// roc 2009-06 00744b00  unit: CXTPReportControl  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00744b00
//
// 00744b00  6aff                 push -1
// 00744b02  68b16b8700           push 0x876bb1
// 00744b07  64a100000000         mov eax, dword ptr fs:[0]
// 00744b0d  50                   push eax
// 00744b0e  83ec20               sub esp, 0x20
// 00744b11  55                   push ebp
// 00744b12  56                   push esi
// 00744b13  57                   push edi
// 00744b14  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00744b19  33c4                 xor eax, esp
// 00744b1b  50                   push eax
// 00744b1c  8d442430             lea eax, [esp + 0x30]
// 00744b20  64a300000000         mov dword ptr fs:[0], eax
// 00744b26  8be9                 mov ebp, ecx
// 00744b28  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 00744b2e  8b4160               mov eax, dword ptr [ecx + 0x60]
// 00744b31  83f8ff               cmp eax, -1
// 00744b34  7503                 jne 0x744b39
// 00744b36  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 00744b39  8b742440             mov esi, dword ptr [esp + 0x40]
// 00744b3d  8b16                 mov edx, dword ptr [esi]
// 00744b3f  50                   push eax
// 00744b40  8b4238               mov eax, dword ptr [edx + 0x38]
// 00744b43  8bce                 mov ecx, esi
// 00744b45  ffd0                 call eax
// 00744b47  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 00744b4d  0514020000           add eax, 0x214
// 00744b52  50                   push eax
// 00744b53  8d4c2444             lea ecx, [esp + 0x44]
// 00744b57  ff15e4fc8900         call dword ptr [0x89fce4]
// 00744b5d  8d4c2440             lea ecx, [esp + 0x40]
// 00744b61  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00744b69  ff155cfb8900         call dword ptr [0x89fb5c]
// 00744b6f  84c0                 test al, al
// 00744b71  757b                 jne 0x744bee
// 00744b73  8b442444             mov eax, dword ptr [esp + 0x44]
// 00744b77  8b08                 mov ecx, dword ptr [eax]
// 00744b79  8b5004               mov edx, dword ptr [eax + 4]
// 00744b7c  8b7808               mov edi, dword ptr [eax + 8]
// 00744b7f  8b400c               mov eax, dword ptr [eax + 0xc]
// 00744b82  83e805               sub eax, 5
// 00744b85  8944241c             mov dword ptr [esp + 0x1c], eax
// 00744b89  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 00744b8f  83c105               add ecx, 5
// 00744b92  83c020               add eax, 0x20
// 00744b95  50                   push eax
// 00744b96  894c2414             mov dword ptr [esp + 0x14], ecx
// 00744b9a  83c205               add edx, 5
// 00744b9d  83ef05               sub edi, 5
// 00744ba0  56                   push esi
// 00744ba1  8d4c2428             lea ecx, [esp + 0x28]
// 00744ba5  8954241c             mov dword ptr [esp + 0x1c], edx
// 00744ba9  897c2420             mov dword ptr [esp + 0x20], edi
// 00744bad  e8aebc0200           call 0x770860
// 00744bb2  8b3e                 mov edi, dword ptr [esi]
// 00744bb4  6811a80400           push 0x4a811
// 00744bb9  8d4c2414             lea ecx, [esp + 0x14]
// 00744bbd  51                   push ecx
// 00744bbe  8d4c2448             lea ecx, [esp + 0x48]
// 00744bc2  c644244001           mov byte ptr [esp + 0x40], 1
// 00744bc7  ff1554fb8900         call dword ptr [0x89fb54]
// 00744bcd  50                   push eax
// 00744bce  8d4c244c             lea ecx, [esp + 0x4c]
// 00744bd2  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00744bd8  8b5770               mov edx, dword ptr [edi + 0x70]
// 00744bdb  50                   push eax
// 00744bdc  8bce                 mov ecx, esi
// 00744bde  ffd2                 call edx
// 00744be0  8d4c2420             lea ecx, [esp + 0x20]
// 00744be4  c644243800           mov byte ptr [esp + 0x38], 0
// 00744be9  e8f2bc0200           call 0x7708e0
// 00744bee  8d4c2440             lea ecx, [esp + 0x40]
// 00744bf2  ff1510fd8900         call dword ptr [0x89fd10]
// 00744bf8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00744bfc  64890d00000000       mov dword ptr fs:[0], ecx
// 00744c03  59                   pop ecx
// 00744c04  5f                   pop edi
// 00744c05  5e                   pop esi
// 00744c06  5d                   pop ebp
// 00744c07  83c42c               add esp, 0x2c
// 00744c0a  c20800               ret 8
// copied from an identical function in another client (function ?DrawNoItems@CXTPReportControl@@MAEXPAVCDC@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportControl.cpp