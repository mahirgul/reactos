/*
 * PROJECT:     ReactOS Setup Library
 * LICENSE:     GPL-2.0-or-later (https://spdx.org/licenses/GPL-2.0-or-later)
 * PURPOSE:     Device utility functions
 * COPYRIGHT:   Copyright 2024 Hermès Bélusca-Maïto <hermes.belusca-maito@reactos.org>
 */

#pragma once

/* FUNCTIONS *****************************************************************/

NTSTATUS
pOpenDeviceEx_UStr(
    _In_ PCUNICODE_STRING DevicePath,
    _Out_ PHANDLE DeviceHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG ShareAccess);

NTSTATUS
pOpenDeviceEx(
    _In_ PCWSTR DevicePath,
    _Out_ PHANDLE DeviceHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG ShareAccess);

NTSTATUS
pOpenDevice_UStr(
    _In_ PCUNICODE_STRING DevicePath,
    _Out_ PHANDLE DeviceHandle);

NTSTATUS
pOpenDevice(
    _In_ PCWSTR DevicePath,
    _Out_ PHANDLE DeviceHandle);

/* EOF */
