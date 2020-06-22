/*
 * PROJECT:     Authentication Package DLL
 * LICENSE:     GPL-2.0-or-later (https://spdx.org/licenses/GPL-2.0-or-later)
 * PURPOSE:     Security Account Manager (SAM) related functions - header
 * COPYRIGHT:   Copyright 2013 Eric Kohl <eric.kohl@reactos.org>
 */

#pragma once

typedef struct _LSA_SAM_PWD_DATA
{
    /* TRUE: PlainPwd is filled,
       FALSE: LmPwd and NtPwd is filled */
    BOOL IsNetwork;
    PUNICODE_STRING PlainPwd;

    /* Input (IsNetwork = TRUE) */
    PUNICODE_STRING ComputerName;
} LSA_SAM_PWD_DATA, *PLSA_SAM_PWD_DATA;

/**
 * @brief Validates a user by checking if it exists in the sam database.
 *        Some other checks are done further.
 */
NTSTATUS
SamValidateUser(
    _In_ SECURITY_LOGON_TYPE LogonType,
    _In_ PUNICODE_STRING LogonUserName,
    _In_ PUNICODE_STRING LogonDomain,
    _In_ PLSA_SAM_PWD_DATA LogonPwdData,
    _In_ PUNICODE_STRING ComputerName,
    _Out_ PBOOL SpecialAccount,
    _Out_ PRPC_SID* AccountDomainSidPtr,
    _Out_ SAMPR_HANDLE* UserHandlePtr,
    _Out_ PSAMPR_USER_INFO_BUFFER* UserInfoPtr,
    _Out_ PNTSTATUS SubStatus);
