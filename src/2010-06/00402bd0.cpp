// roc 2010-06 00402bd0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00402bd0
//
// 00402bd0  8b442404             mov eax, dword ptr [esp + 4]
// 00402bd4  3d0e000780           cmp eax, 0x8007000e
// 00402bd9  7505                 jne 0x402be0
// 00402bdb  e872503a00           call 0x7a7c52
// 00402be0  50                   push eax
// 00402be1  e872503a00           call 0x7a7c58
// copied from an identical function in another client (function ?AtlThrowImpl@ATL@@YGXJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_04fd8290f2921435.cpp