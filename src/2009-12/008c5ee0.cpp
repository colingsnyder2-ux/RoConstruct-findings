// roc 2009-12 008c5ee0  unit: CXTPControlCustom  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5ee0
//
// 008c5ee0  53                   push ebx
// 008c5ee1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008c5ee5  56                   push esi
// 008c5ee6  8bf1                 mov esi, ecx
// 008c5ee8  83be9c01000000       cmp dword ptr [esi + 0x19c], 0
// 008c5eef  7520                 jne 0x8c5f11
// 008c5ef1  8b06                 mov eax, dword ptr [esi]
// 008c5ef3  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008c5ef9  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008c5eff  f6c310               test bl, 0x10
// 008c5f02  7405                 je 0x8c5f09
// 008c5f04  83c904               or ecx, 4
// 008c5f07  eb03                 jmp 0x8c5f0c
// 008c5f09  83e1fb               and ecx, 0xfffffffb
// 008c5f0c  51                   push ecx
// 008c5f0d  8bce                 mov ecx, esi
// 008c5f0f  ffd2                 call edx
// 008c5f11  83be9c01000002       cmp dword ptr [esi + 0x19c], 2
// 008c5f18  7515                 jne 0x8c5f2f
// 008c5f1a  c1eb04               shr ebx, 4
// 008c5f1d  f7d3                 not ebx
// 008c5f1f  83e301               and ebx, 1
// 008c5f22  8bce                 mov ecx, esi
// 008c5f24  899e90010000         mov dword ptr [esi + 0x190], ebx
// 008c5f2a  e8a1feffff           call 0x8c5dd0
// 008c5f2f  5e                   pop esi
// 008c5f30  5b                   pop ebx
// 008c5f31  c20400               ret 4
// copied from an identical function in another client (function ?OnCalcDynamicSize@CXTPControlCustom@@MAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlCustom.cpp