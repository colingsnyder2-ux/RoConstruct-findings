// roc 2011-06 00833b00  unit: CXTPReportControl  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00833b00
//
// 00833b00  6aff                 push -1
// 00833b02  685142a000           push 0xa04251
// 00833b07  64a100000000         mov eax, dword ptr fs:[0]
// 00833b0d  50                   push eax
// 00833b0e  83ec20               sub esp, 0x20
// 00833b11  55                   push ebp
// 00833b12  56                   push esi
// 00833b13  57                   push edi
// 00833b14  a12058c900           mov eax, dword ptr [0xc95820]
// 00833b19  33c4                 xor eax, esp
// 00833b1b  50                   push eax
// 00833b1c  8d442430             lea eax, [esp + 0x30]
// 00833b20  64a300000000         mov dword ptr fs:[0], eax
// 00833b26  8be9                 mov ebp, ecx
// 00833b28  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 00833b2e  8b4160               mov eax, dword ptr [ecx + 0x60]
// 00833b31  83f8ff               cmp eax, -1
// 00833b34  7503                 jne 0x833b39
// 00833b36  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 00833b39  8b742440             mov esi, dword ptr [esp + 0x40]
// 00833b3d  8b16                 mov edx, dword ptr [esi]
// 00833b3f  50                   push eax
// 00833b40  8b4238               mov eax, dword ptr [edx + 0x38]
// 00833b43  8bce                 mov ecx, esi
// 00833b45  ffd0                 call eax
// 00833b47  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 00833b4d  0514020000           add eax, 0x214
// 00833b52  50                   push eax
// 00833b53  8d4c2444             lea ecx, [esp + 0x44]
// 00833b57  ff15e42da400         call dword ptr [0xa42de4]
// 00833b5d  8d4c2440             lea ecx, [esp + 0x40]
// 00833b61  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00833b69  ff15b026a400         call dword ptr [0xa426b0]
// 00833b6f  84c0                 test al, al
// 00833b71  757b                 jne 0x833bee
// 00833b73  8b442444             mov eax, dword ptr [esp + 0x44]
// 00833b77  8b08                 mov ecx, dword ptr [eax]
// 00833b79  8b5004               mov edx, dword ptr [eax + 4]
// 00833b7c  8b7808               mov edi, dword ptr [eax + 8]
// 00833b7f  8b400c               mov eax, dword ptr [eax + 0xc]
// 00833b82  83e805               sub eax, 5
// 00833b85  8944241c             mov dword ptr [esp + 0x1c], eax
// 00833b89  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 00833b8f  83c105               add ecx, 5
// 00833b92  83c020               add eax, 0x20
// 00833b95  50                   push eax
// 00833b96  894c2414             mov dword ptr [esp + 0x14], ecx
// 00833b9a  83c205               add edx, 5
// 00833b9d  83ef05               sub edi, 5
// 00833ba0  56                   push esi
// 00833ba1  8d4c2428             lea ecx, [esp + 0x28]
// 00833ba5  8954241c             mov dword ptr [esp + 0x1c], edx
// 00833ba9  897c2420             mov dword ptr [esp + 0x20], edi
// 00833bad  e86e950200           call 0x85d120
// 00833bb2  8b3e                 mov edi, dword ptr [esi]
// 00833bb4  6811a80400           push 0x4a811
// 00833bb9  8d4c2414             lea ecx, [esp + 0x14]
// 00833bbd  51                   push ecx
// 00833bbe  8d4c2448             lea ecx, [esp + 0x48]
// 00833bc2  c644244001           mov byte ptr [esp + 0x40], 1
// 00833bc7  ff15a826a400         call dword ptr [0xa426a8]
// 00833bcd  50                   push eax
// 00833bce  8d4c244c             lea ecx, [esp + 0x4c]
// 00833bd2  ff15c82da400         call dword ptr [0xa42dc8]
// 00833bd8  8b5770               mov edx, dword ptr [edi + 0x70]
// 00833bdb  50                   push eax
// 00833bdc  8bce                 mov ecx, esi
// 00833bde  ffd2                 call edx
// 00833be0  8d4c2420             lea ecx, [esp + 0x20]
// 00833be4  c644243800           mov byte ptr [esp + 0x38], 0
// 00833be9  e8b2950200           call 0x85d1a0
// 00833bee  8d4c2440             lea ecx, [esp + 0x40]
// 00833bf2  ff15082ea400         call dword ptr [0xa42e08]
// 00833bf8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00833bfc  64890d00000000       mov dword ptr fs:[0], ecx
// 00833c03  59                   pop ecx
// 00833c04  5f                   pop edi
// 00833c05  5e                   pop esi
// 00833c06  5d                   pop ebp
// 00833c07  83c42c               add esp, 0x2c
// 00833c0a  c20800               ret 8
// copied from an identical function in another client (function ?DrawNoItems@CXTPReportControl@@MAEXPAVCDC@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportControl.cpp