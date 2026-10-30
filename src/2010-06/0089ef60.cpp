// roc 2010-06 0089ef60  unit: CXTPRibbonGroup  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089ef60
//
// 0089ef60  53                   push ebx
// 0089ef61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0089ef65  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0089ef68  55                   push ebp
// 0089ef69  56                   push esi
// 0089ef6a  57                   push edi
// 0089ef6b  8bf9                 mov edi, ecx
// 0089ef6d  894760               mov dword ptr [edi + 0x60], eax
// 0089ef70  8b4b64               mov ecx, dword ptr [ebx + 0x64]
// 0089ef73  894f64               mov dword ptr [edi + 0x64], ecx
// 0089ef76  8b5374               mov edx, dword ptr [ebx + 0x74]
// 0089ef79  8d4328               lea eax, [ebx + 0x28]
// 0089ef7c  50                   push eax
// 0089ef7d  8d4f28               lea ecx, [edi + 0x28]
// 0089ef80  895774               mov dword ptr [edi + 0x74], edx
// 0089ef83  ff1580c59e00         call dword ptr [0x9ec580]
// 0089ef89  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0089ef8c  894f30               mov dword ptr [edi + 0x30], ecx
// 0089ef8f  8b5324               mov edx, dword ptr [ebx + 0x24]
// 0089ef92  895724               mov dword ptr [edi + 0x24], edx
// 0089ef95  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0089ef98  8b5768               mov edx, dword ptr [edi + 0x68]
// 0089ef9b  894720               mov dword ptr [edi + 0x20], eax
// 0089ef9e  8b4b78               mov ecx, dword ptr [ebx + 0x78]
// 0089efa1  894f78               mov dword ptr [edi + 0x78], ecx
// 0089efa4  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0089efaa  89442414             mov dword ptr [esp + 0x14], eax
// 0089efae  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 0089efb1  33ed                 xor ebp, ebp
// 0089efb3  85c0                 test eax, eax
// 0089efb5  7e73                 jle 0x89f02a
// 0089efb7  85ed                 test ebp, ebp
// 0089efb9  7c15                 jl 0x89efd0
// 0089efbb  3be8                 cmp ebp, eax
// 0089efbd  7d11                 jge 0x89efd0
// 0089efbf  3b6b4c               cmp ebp, dword ptr [ebx + 0x4c]
// 0089efc2  0f8dc5000000         jge 0x89f08d
// 0089efc8  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 0089efcb  8b04a9               mov eax, dword ptr [ecx + ebp*4]
// 0089efce  eb02                 jmp 0x89efd2
// 0089efd0  33c0                 xor eax, eax
// 0089efd2  8b5758               mov edx, dword ptr [edi + 0x58]
// 0089efd5  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 0089efdb  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089efdf  6a00                 push 0
// 0089efe1  03d5                 add edx, ebp
// 0089efe3  52                   push edx
// 0089efe4  50                   push eax
// 0089efe5  e866c3f5ff           call 0x7fb350
// 0089efea  8bf0                 mov esi, eax
// 0089efec  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0089eff2  8b06                 mov eax, dword ptr [esi]
// 0089eff4  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0089effa  81e17fffffff         and ecx, 0xffffff7f
// 0089f000  51                   push ecx
// 0089f001  8bce                 mov ecx, esi
// 0089f003  89be58010000         mov dword ptr [esi + 0x158], edi
// 0089f009  ffd2                 call edx
// 0089f00b  8b474c               mov eax, dword ptr [edi + 0x4c]
// 0089f00e  8d4f44               lea ecx, [edi + 0x44]
// 0089f011  56                   push esi
// 0089f012  50                   push eax
// 0089f013  e89824f4ff           call 0x7e14b0
// 0089f018  83c604               add esi, 4
// 0089f01b  56                   push esi
// 0089f01c  ff1580a39e00         call dword ptr [0x9ea380]
// 0089f022  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 0089f025  45                   inc ebp
// 0089f026  3be8                 cmp ebp, eax
// 0089f028  7c8d                 jl 0x89efb7
// 0089f02a  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 0089f02d  8b11                 mov edx, dword ptr [ecx]
// 0089f02f  8b4368               mov eax, dword ptr [ebx + 0x68]
// 0089f032  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 0089f038  6a00                 push 0
// 0089f03a  50                   push eax
// 0089f03b  ffd2                 call edx
// 0089f03d  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 0089f040  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 0089f046  8b01                 mov eax, dword ptr [ecx]
// 0089f048  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0089f04e  81e27fffffff         and edx, 0xffffff7f
// 0089f054  52                   push edx
// 0089f055  ffd0                 call eax
// 0089f057  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 0089f05a  8b11                 mov edx, dword ptr [ecx]
// 0089f05c  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 0089f05f  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 0089f065  6a00                 push 0
// 0089f067  50                   push eax
// 0089f068  ffd2                 call edx
// 0089f06a  8b7f6c               mov edi, dword ptr [edi + 0x6c]
// 0089f06d  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 0089f073  8b07                 mov eax, dword ptr [edi]
// 0089f075  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0089f07b  81e17fffffff         and ecx, 0xffffff7f
// 0089f081  51                   push ecx
// 0089f082  8bcf                 mov ecx, edi
// 0089f084  ffd2                 call edx
// 0089f086  5f                   pop edi
// 0089f087  5e                   pop esi
// 0089f088  5d                   pop ebp
// 0089f089  5b                   pop ebx
// 0089f08a  c20400               ret 4
// 0089f08d  e8ba8bf0ff           call 0x7a7c4c
// copied from an identical function in another client (function ?Copy@CXTPRibbonGroup@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp