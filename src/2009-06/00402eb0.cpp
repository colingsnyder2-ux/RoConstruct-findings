// roc 2009-06 00402eb0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00402eb0
//
// 00402eb0  8b442404             mov eax, dword ptr [esp + 4]
// 00402eb4  3d0e000780           cmp eax, 0x8007000e
// 00402eb9  7505                 jne 0x402ec0
// 00402ebb  e82a5e3100           call 0x718cea
// 00402ec0  50                   push eax
// 00402ec1  e82a5e3100           call 0x718cf0
// copied from an identical function in another client (function ?AtlThrowImpl@ATL@@YGXJ@Z)

// from server: 100% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp