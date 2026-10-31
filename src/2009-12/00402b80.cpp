// roc 2009-12 00402b80  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00402b80
//
// 00402b80  8b442404             mov eax, dword ptr [esp + 4]
// 00402b84  3d0e000780           cmp eax, 0x8007000e
// 00402b89  7505                 jne 0x402b90
// 00402b8b  e8820f3f00           call 0x7f3b12
// 00402b90  50                   push eax
// 00402b91  e8820f3f00           call 0x7f3b18
// copied from an identical function in another client (function ?AtlThrowImpl@ATL@@YGXJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_04fd8290f2921435.cpp