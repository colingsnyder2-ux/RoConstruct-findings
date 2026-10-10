// roc 2008-06 00772c30  unit: CXTPControlCustom  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772c30
//
// 00772c30  53                   push ebx
// 00772c31  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00772c35  56                   push esi
// 00772c36  8bf1                 mov esi, ecx
// 00772c38  83be9c01000000       cmp dword ptr [esi + 0x19c], 0
// 00772c3f  7520                 jne 0x772c61
// 00772c41  8b06                 mov eax, dword ptr [esi]
// 00772c43  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00772c49  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00772c4f  f6c310               test bl, 0x10
// 00772c52  7405                 je 0x772c59
// 00772c54  83c904               or ecx, 4
// 00772c57  eb03                 jmp 0x772c5c
// 00772c59  83e1fb               and ecx, 0xfffffffb
// 00772c5c  51                   push ecx
// 00772c5d  8bce                 mov ecx, esi
// 00772c5f  ffd2                 call edx
// 00772c61  83be9c01000002       cmp dword ptr [esi + 0x19c], 2
// 00772c68  7515                 jne 0x772c7f
// 00772c6a  c1eb04               shr ebx, 4
// 00772c6d  f7d3                 not ebx
// 00772c6f  83e301               and ebx, 1
// 00772c72  8bce                 mov ecx, esi
// 00772c74  899e90010000         mov dword ptr [esi + 0x190], ebx
// 00772c7a  e8a1feffff           call 0x772b20
// 00772c7f  5e                   pop esi
// 00772c80  5b                   pop ebx
// 00772c81  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlCustom.cpp (function ?OnCalcDynamicSize@CXTPControlCustom@@MAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlCustom.cpp
