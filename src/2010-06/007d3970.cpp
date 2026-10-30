// roc 2010-06 007d3970  unit: CXTPReportControl  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d3970
//
// 007d3970  6aff                 push -1
// 007d3972  68310c9b00           push 0x9b0c31
// 007d3977  64a100000000         mov eax, dword ptr fs:[0]
// 007d397d  50                   push eax
// 007d397e  83ec20               sub esp, 0x20
// 007d3981  55                   push ebp
// 007d3982  56                   push esi
// 007d3983  57                   push edi
// 007d3984  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007d3989  33c4                 xor eax, esp
// 007d398b  50                   push eax
// 007d398c  8d442430             lea eax, [esp + 0x30]
// 007d3990  64a300000000         mov dword ptr fs:[0], eax
// 007d3996  8be9                 mov ebp, ecx
// 007d3998  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 007d399e  8b4160               mov eax, dword ptr [ecx + 0x60]
// 007d39a1  83f8ff               cmp eax, -1
// 007d39a4  7503                 jne 0x7d39a9
// 007d39a6  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 007d39a9  8b742440             mov esi, dword ptr [esp + 0x40]
// 007d39ad  8b16                 mov edx, dword ptr [esi]
// 007d39af  50                   push eax
// 007d39b0  8b4238               mov eax, dword ptr [edx + 0x38]
// 007d39b3  8bce                 mov ecx, esi
// 007d39b5  ffd0                 call eax
// 007d39b7  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 007d39bd  0514020000           add eax, 0x214
// 007d39c2  50                   push eax
// 007d39c3  8d4c2444             lea ecx, [esp + 0x44]
// 007d39c7  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007d39cd  8d4c2440             lea ecx, [esp + 0x40]
// 007d39d1  c744243800000000     mov dword ptr [esp + 0x38], 0
// 007d39d9  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007d39df  84c0                 test al, al
// 007d39e1  757b                 jne 0x7d3a5e
// 007d39e3  8b442444             mov eax, dword ptr [esp + 0x44]
// 007d39e7  8b08                 mov ecx, dword ptr [eax]
// 007d39e9  8b5004               mov edx, dword ptr [eax + 4]
// 007d39ec  8b7808               mov edi, dword ptr [eax + 8]
// 007d39ef  8b400c               mov eax, dword ptr [eax + 0xc]
// 007d39f2  83e805               sub eax, 5
// 007d39f5  8944241c             mov dword ptr [esp + 0x1c], eax
// 007d39f9  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 007d39ff  83c105               add ecx, 5
// 007d3a02  83c020               add eax, 0x20
// 007d3a05  50                   push eax
// 007d3a06  894c2414             mov dword ptr [esp + 0x14], ecx
// 007d3a0a  83c205               add edx, 5
// 007d3a0d  83ef05               sub edi, 5
// 007d3a10  56                   push esi
// 007d3a11  8d4c2428             lea ecx, [esp + 0x28]
// 007d3a15  8954241c             mov dword ptr [esp + 0x1c], edx
// 007d3a19  897c2420             mov dword ptr [esp + 0x20], edi
// 007d3a1d  e87ebc0200           call 0x7ff6a0
// 007d3a22  8b3e                 mov edi, dword ptr [esi]
// 007d3a24  6811a80400           push 0x4a811
// 007d3a29  8d4c2414             lea ecx, [esp + 0x14]
// 007d3a2d  51                   push ecx
// 007d3a2e  8d4c2448             lea ecx, [esp + 0x48]
// 007d3a32  c644244001           mov byte ptr [esp + 0x40], 1
// 007d3a37  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007d3a3d  50                   push eax
// 007d3a3e  8d4c244c             lea ecx, [esp + 0x4c]
// 007d3a42  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007d3a48  8b5770               mov edx, dword ptr [edi + 0x70]
// 007d3a4b  50                   push eax
// 007d3a4c  8bce                 mov ecx, esi
// 007d3a4e  ffd2                 call edx
// 007d3a50  8d4c2420             lea ecx, [esp + 0x20]
// 007d3a54  c644243800           mov byte ptr [esp + 0x38], 0
// 007d3a59  e8c2bc0200           call 0x7ff720
// 007d3a5e  8d4c2440             lea ecx, [esp + 0x40]
// 007d3a62  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007d3a68  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007d3a6c  64890d00000000       mov dword ptr fs:[0], ecx
// 007d3a73  59                   pop ecx
// 007d3a74  5f                   pop edi
// 007d3a75  5e                   pop esi
// 007d3a76  5d                   pop ebp
// 007d3a77  83c42c               add esp, 0x2c
// 007d3a7a  c20800               ret 8
// copied from an identical function in another client (function ?DrawNoItems@CXTPReportControl@@MAEXPAVCDC@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportControl.cpp