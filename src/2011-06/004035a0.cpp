// roc 2011-06 004035a0  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004035a0
//
// 004035a0  8b442404             mov eax, dword ptr [esp + 4]
// 004035a4  3d0e000780           cmp eax, 0x8007000e
// 004035a9  7505                 jne 0x4035b0
// 004035ab  e8606d4000           call 0x80a310
// 004035b0  50                   push eax
// 004035b1  e8606d4000           call 0x80a316
// copied from an identical function in another client (function ?AtlThrowImpl@ATL@@YGXJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_04fd8290f2921435.cpp