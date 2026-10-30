// roc 2012-06 009ac100  unit: CXTPReportControl  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ac100
//
// 009ac100  6aff                 push -1
// 009ac102  68d1dfad00           push 0xaddfd1
// 009ac107  64a100000000         mov eax, dword ptr fs:[0]
// 009ac10d  50                   push eax
// 009ac10e  83ec20               sub esp, 0x20
// 009ac111  55                   push ebp
// 009ac112  56                   push esi
// 009ac113  57                   push edi
// 009ac114  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009ac119  33c4                 xor eax, esp
// 009ac11b  50                   push eax
// 009ac11c  8d442430             lea eax, [esp + 0x30]
// 009ac120  64a300000000         mov dword ptr fs:[0], eax
// 009ac126  8be9                 mov ebp, ecx
// 009ac128  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 009ac12e  8b4160               mov eax, dword ptr [ecx + 0x60]
// 009ac131  83f8ff               cmp eax, -1
// 009ac134  7503                 jne 0x9ac139
// 009ac136  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 009ac139  8b742440             mov esi, dword ptr [esp + 0x40]
// 009ac13d  8b16                 mov edx, dword ptr [esi]
// 009ac13f  50                   push eax
// 009ac140  8b4238               mov eax, dword ptr [edx + 0x38]
// 009ac143  8bce                 mov ecx, esi
// 009ac145  ffd0                 call eax
// 009ac147  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 009ac14d  0514020000           add eax, 0x214
// 009ac152  50                   push eax
// 009ac153  8d4c2444             lea ecx, [esp + 0x44]
// 009ac157  ff158047b200         call dword ptr [0xb24780]
// 009ac15d  8d4c2440             lea ecx, [esp + 0x40]
// 009ac161  c744243800000000     mov dword ptr [esp + 0x38], 0
// 009ac169  ff156046b200         call dword ptr [0xb24660]
// 009ac16f  84c0                 test al, al
// 009ac171  757b                 jne 0x9ac1ee
// 009ac173  8b442444             mov eax, dword ptr [esp + 0x44]
// 009ac177  8b08                 mov ecx, dword ptr [eax]
// 009ac179  8b5004               mov edx, dword ptr [eax + 4]
// 009ac17c  8b7808               mov edi, dword ptr [eax + 8]
// 009ac17f  8b400c               mov eax, dword ptr [eax + 0xc]
// 009ac182  83e805               sub eax, 5
// 009ac185  8944241c             mov dword ptr [esp + 0x1c], eax
// 009ac189  8b8500010000         mov eax, dword ptr [ebp + 0x100]
// 009ac18f  83c105               add ecx, 5
// 009ac192  83c020               add eax, 0x20
// 009ac195  50                   push eax
// 009ac196  894c2414             mov dword ptr [esp + 0x14], ecx
// 009ac19a  83c205               add edx, 5
// 009ac19d  83ef05               sub edi, 5
// 009ac1a0  56                   push esi
// 009ac1a1  8d4c2428             lea ecx, [esp + 0x28]
// 009ac1a5  8954241c             mov dword ptr [esp + 0x1c], edx
// 009ac1a9  897c2420             mov dword ptr [esp + 0x20], edi
// 009ac1ad  e87e930200           call 0x9d5530
// 009ac1b2  8b3e                 mov edi, dword ptr [esi]
// 009ac1b4  6811a80400           push 0x4a811
// 009ac1b9  8d4c2414             lea ecx, [esp + 0x14]
// 009ac1bd  51                   push ecx
// 009ac1be  8d4c2448             lea ecx, [esp + 0x48]
// 009ac1c2  c644244001           mov byte ptr [esp + 0x40], 1
// 009ac1c7  ff155846b200         call dword ptr [0xb24658]
// 009ac1cd  50                   push eax
// 009ac1ce  8d4c244c             lea ecx, [esp + 0x4c]
// 009ac1d2  ff159847b200         call dword ptr [0xb24798]
// 009ac1d8  8b5770               mov edx, dword ptr [edi + 0x70]
// 009ac1db  50                   push eax
// 009ac1dc  8bce                 mov ecx, esi
// 009ac1de  ffd2                 call edx
// 009ac1e0  8d4c2420             lea ecx, [esp + 0x20]
// 009ac1e4  c644243800           mov byte ptr [esp + 0x38], 0
// 009ac1e9  e8c2930200           call 0x9d55b0
// 009ac1ee  8d4c2440             lea ecx, [esp + 0x40]
// 009ac1f2  ff15d047b200         call dword ptr [0xb247d0]
// 009ac1f8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009ac1fc  64890d00000000       mov dword ptr fs:[0], ecx
// 009ac203  59                   pop ecx
// 009ac204  5f                   pop edi
// 009ac205  5e                   pop esi
// 009ac206  5d                   pop ebp
// 009ac207  83c42c               add esp, 0x2c
// 009ac20a  c20800               ret 8
// copied from an identical function in another client (function ?DrawNoItems@CXTPReportControl@@MAEXPAVCDC@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportControl.cpp