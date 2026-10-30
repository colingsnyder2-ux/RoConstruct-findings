// roc 2009-12 0081f910  unit: CXTPReportControl  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081f910
//
// 0081f910  6aff                 push -1
// 0081f912  68a1ae9500           push 0x95aea1
// 0081f917  64a100000000         mov eax, dword ptr fs:[0]
// 0081f91d  50                   push eax
// 0081f91e  83ec20               sub esp, 0x20
// 0081f921  55                   push ebp
// 0081f922  56                   push esi
// 0081f923  57                   push edi
// 0081f924  a10052b600           mov eax, dword ptr [0xb65200]
// 0081f929  33c4                 xor eax, esp
// 0081f92b  50                   push eax
// 0081f92c  8d442430             lea eax, [esp + 0x30]
// 0081f930  64a300000000         mov dword ptr fs:[0], eax
// 0081f936  8be9                 mov ebp, ecx
// 0081f938  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 0081f93e  8b4160               mov eax, dword ptr [ecx + 0x60]
// 0081f941  83f8ff               cmp eax, -1
// 0081f944  7503                 jne 0x81f949
// 0081f946  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 0081f949  8b742440             mov esi, dword ptr [esp + 0x40]
// 0081f94d  8b16                 mov edx, dword ptr [esi]
// 0081f94f  50                   push eax
// 0081f950  8b4238               mov eax, dword ptr [edx + 0x38]
// 0081f953  8bce                 mov ecx, esi
// 0081f955  ffd0                 call eax
// 0081f957  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 0081f95d  0514020000           add eax, 0x214
// 0081f962  50                   push eax
// 0081f963  8d4c2444             lea ecx, [esp + 0x44]
// 0081f967  ff1594de9800         call dword ptr [0x98de94]
// 0081f96d  8d4c2440             lea ecx, [esp + 0x40]
// 0081f971  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0081f979  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0081f97f  84c0                 test al, al
// 0081f981  757b                 jne 0x81f9fe
// 0081f983  8b442444             mov eax, dword ptr [esp + 0x44]
// 0081f987  8b08                 mov ecx, dword ptr [eax]
// 0081f989  8b5004               mov edx, dword ptr [eax + 4]
// 0081f98c  8b7808               mov edi, dword ptr [eax + 8]
// 0081f98f  8b400c               mov eax, dword ptr [eax + 0xc]
// 0081f992  83e805               sub eax, 5
// 0081f995  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081f999  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 0081f99f  83c105               add ecx, 5
// 0081f9a2  83c020               add eax, 0x20
// 0081f9a5  50                   push eax
// 0081f9a6  894c2414             mov dword ptr [esp + 0x14], ecx
// 0081f9aa  83c205               add edx, 5
// 0081f9ad  83ef05               sub edi, 5
// 0081f9b0  56                   push esi
// 0081f9b1  8d4c2428             lea ecx, [esp + 0x28]
// 0081f9b5  8954241c             mov dword ptr [esp + 0x1c], edx
// 0081f9b9  897c2420             mov dword ptr [esp + 0x20], edi
// 0081f9bd  e89ebc0200           call 0x84b660
// 0081f9c2  8b3e                 mov edi, dword ptr [esi]
// 0081f9c4  6811a80400           push 0x4a811
// 0081f9c9  8d4c2414             lea ecx, [esp + 0x14]
// 0081f9cd  51                   push ecx
// 0081f9ce  8d4c2448             lea ecx, [esp + 0x48]
// 0081f9d2  c644244001           mov byte ptr [esp + 0x40], 1
// 0081f9d7  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0081f9dd  50                   push eax
// 0081f9de  8d4c244c             lea ecx, [esp + 0x4c]
// 0081f9e2  ff1580de9800         call dword ptr [0x98de80]
// 0081f9e8  8b5770               mov edx, dword ptr [edi + 0x70]
// 0081f9eb  50                   push eax
// 0081f9ec  8bce                 mov ecx, esi
// 0081f9ee  ffd2                 call edx
// 0081f9f0  8d4c2420             lea ecx, [esp + 0x20]
// 0081f9f4  c644243800           mov byte ptr [esp + 0x38], 0
// 0081f9f9  e8e2bc0200           call 0x84b6e0
// 0081f9fe  8d4c2440             lea ecx, [esp + 0x40]
// 0081fa02  ff15c0de9800         call dword ptr [0x98dec0]
// 0081fa08  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0081fa0c  64890d00000000       mov dword ptr fs:[0], ecx
// 0081fa13  59                   pop ecx
// 0081fa14  5f                   pop edi
// 0081fa15  5e                   pop esi
// 0081fa16  5d                   pop ebp
// 0081fa17  83c42c               add esp, 0x2c
// 0081fa1a  c20800               ret 8
// copied from an identical function in another client (function ?DrawNoItems@CXTPReportControl@@MAEXPAVCDC@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportControl.cpp