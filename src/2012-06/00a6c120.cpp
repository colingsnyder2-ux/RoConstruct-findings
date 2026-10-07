// roc 2012-06 00a6c120  unit: CXTPScrollBase  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6c120
//
// 00a6c120  56                   push esi
// 00a6c121  57                   push edi
// 00a6c122  8bf9                 mov edi, ecx
// 00a6c124  8b7760               mov esi, dword ptr [edi + 0x60]
// 00a6c127  85f6                 test esi, esi
// 00a6c129  7473                 je 0xa6c19e
// 00a6c12b  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00a6c132  ff15743ab200         call dword ptr [0xb23a74]
// 00a6c138  837e3000             cmp dword ptr [esi + 0x30], 0
// 00a6c13c  743a                 je 0xa6c178
// 00a6c13e  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a6c143  7409                 je 0xa6c14e
// 00a6c145  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a6c148  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00a6c14b  894e24               mov dword ptr [esi + 0x24], ecx
// 00a6c14e  8b4624               mov eax, dword ptr [esi + 0x24]
// 00a6c151  8b17                 mov edx, dword ptr [edi]
// 00a6c153  8b5218               mov edx, dword ptr [edx + 0x18]
// 00a6c156  50                   push eax
// 00a6c157  6a04                 push 4
// 00a6c159  8bcf                 mov ecx, edi
// 00a6c15b  ffd2                 call edx
// 00a6c15d  8b07                 mov eax, dword ptr [edi]
// 00a6c15f  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00a6c162  8bcf                 mov ecx, edi
// 00a6c164  ffd2                 call edx
// 00a6c166  8b17                 mov edx, dword ptr [edi]
// 00a6c168  8b4218               mov eax, dword ptr [edx + 0x18]
// 00a6c16b  6a00                 push 0
// 00a6c16d  6a08                 push 8
// 00a6c16f  8bcf                 mov ecx, edi
// 00a6c171  ffd0                 call eax
// 00a6c173  5f                   pop edi
// 00a6c174  5e                   pop esi
// 00a6c175  c20400               ret 4
// 00a6c178  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a6c17b  85c0                 test eax, eax
// 00a6c17d  7412                 je 0xa6c191
// 00a6c17f  50                   push eax
// 00a6c180  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00a6c183  50                   push eax
// 00a6c184  ff15083cb200         call dword ptr [0xb23c08]
// 00a6c18a  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00a6c191  8b17                 mov edx, dword ptr [edi]
// 00a6c193  8b4218               mov eax, dword ptr [edx + 0x18]
// 00a6c196  6a00                 push 0
// 00a6c198  6a08                 push 8
// 00a6c19a  8bcf                 mov ecx, edi
// 00a6c19c  ffd0                 call eax
// 00a6c19e  5f                   pop edi
// 00a6c19f  5e                   pop esi
// 00a6c1a0  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?EndScroll@CXTPScrollBase@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
