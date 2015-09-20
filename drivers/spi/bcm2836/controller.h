/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    controller.h

Abstract:

    This module contains the controller-specific function
    definitions.

Environment:

    kernel-mode only

Revision History:

--*/

#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

//
// Controller specific function prototypes.
//

VOID ControllerInitialize(
    _Inout_ PPBC_DEVICE pDevice
    );

VOID ControllerUninitialize(
    _Inout_ PPBC_DEVICE pDevice
    );

NTSTATUS
ControllerTransferData(
    _Inout_ PPBC_DEVICE pDevice,
    _Inout_ PPBC_REQUEST pRequest
    );

NTSTATUS
ControllerDoOneTransferPollMode(
    _Inout_ PPBC_DEVICE pDevice,
    _Inout_ PPBC_REQUEST pRequest
    );

VOID
ControllerCompleteTransfer(
    _Inout_ PPBC_DEVICE pDevice,
    _Inout_ PPBC_REQUEST pRequest,
    _In_ BOOLEAN AbortSequence
    );

VOID
ControllerUnlockTransfer(
    _Inout_ PPBC_DEVICE pDevice
    );

VOID
ControllerConfigForTargetAndActivate(
    _In_ PPBC_DEVICE pDevice
    );

VOID
ControllerCompleteRequest(
    _In_ PPBC_DEVICE pDevice,
    _In_ PPBC_REQUEST pRequest
    );

NTSTATUS
ControllerDelayTransfer(
    _In_ PPBC_DEVICE pDevice,
    _In_ PPBC_REQUEST pRequest
    );

VOID
ControllerConfigClock(
    PPBC_DEVICE pDevice,
    ULONG clockHz
    );

#endif
