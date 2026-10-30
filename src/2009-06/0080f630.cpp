// roc 2009-06 0080f630  unit: CXTPRibbonGroup  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080f630
//
// 0080f630  53                   push ebx
// 0080f631  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0080f635  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0080f638  55                   push ebp
// 0080f639  56                   push esi
// 0080f63a  57                   push edi
// 0080f63b  8bf9                 mov edi, ecx
// 0080f63d  894760               mov dword ptr [edi + 0x60], eax
// 0080f640  8b4b64               mov ecx, dword ptr [ebx + 0x64]
// 0080f643  894f64               mov dword ptr [edi + 0x64], ecx
// 0080f646  8b5374               mov edx, dword ptr [ebx + 0x74]
// 0080f649  8d4328               lea eax, [ebx + 0x28]
// 0080f64c  50                   push eax
// 0080f64d  8d4f28               lea ecx, [edi + 0x28]
// 0080f650  895774               mov dword ptr [edi + 0x74], edx
// 0080f653  ff1508fa8900         call dword ptr [0x89fa08]
// 0080f659  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0080f65c  894f30               mov dword ptr [edi + 0x30], ecx
// 0080f65f  8b5324               mov edx, dword ptr [ebx + 0x24]
// 0080f662  895724               mov dword ptr [edi + 0x24], edx
// 0080f665  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0080f668  8b5768               mov edx, dword ptr [edi + 0x68]
// 0080f66b  894720               mov dword ptr [edi + 0x20], eax
// 0080f66e  8b4b78               mov ecx, dword ptr [ebx + 0x78]
// 0080f671  894f78               mov dword ptr [edi + 0x78], ecx
// 0080f674  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0080f67a  89442414             mov dword ptr [esp + 0x14], eax
// 0080f67e  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 0080f681  33ed                 xor ebp, ebp
// 0080f683  85c0                 test eax, eax
// 0080f685  7e73                 jle 0x80f6fa
// 0080f687  85ed                 test ebp, ebp
// 0080f689  7c15                 jl 0x80f6a0
// 0080f68b  3be8                 cmp ebp, eax
// 0080f68d  7d11                 jge 0x80f6a0
// 0080f68f  3b6b4c               cmp ebp, dword ptr [ebx + 0x4c]
// 0080f692  0f8dc5000000         jge 0x80f75d
// 0080f698  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 0080f69b  8b04a9               mov eax, dword ptr [ecx + ebp*4]
// 0080f69e  eb02                 jmp 0x80f6a2
// 0080f6a0  33c0                 xor eax, eax
// 0080f6a2  8b5758               mov edx, dword ptr [edi + 0x58]
// 0080f6a5  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 0080f6ab  8b542414             mov edx, dword ptr [esp + 0x14]
// 0080f6af  6a00                 push 0
// 0080f6b1  03d5                 add edx, ebp
// 0080f6b3  52                   push edx
// 0080f6b4  50                   push eax
// 0080f6b5  e816cef5ff           call 0x76c4d0
// 0080f6ba  8bf0                 mov esi, eax
// 0080f6bc  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0080f6c2  8b06                 mov eax, dword ptr [esi]
// 0080f6c4  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0080f6ca  81e17fffffff         and ecx, 0xffffff7f
// 0080f6d0  51                   push ecx
// 0080f6d1  8bce                 mov ecx, esi
// 0080f6d3  89be58010000         mov dword ptr [esi + 0x158], edi
// 0080f6d9  ffd2                 call edx
// 0080f6db  8b474c               mov eax, dword ptr [edi + 0x4c]
// 0080f6de  8d4f44               lea ecx, [edi + 0x44]
// 0080f6e1  56                   push esi
// 0080f6e2  50                   push eax
// 0080f6e3  e83830f4ff           call 0x752720
// 0080f6e8  83c604               add esi, 4
// 0080f6eb  56                   push esi
// 0080f6ec  ff15d0e18900         call dword ptr [0x89e1d0]
// 0080f6f2  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 0080f6f5  45                   inc ebp
// 0080f6f6  3be8                 cmp ebp, eax
// 0080f6f8  7c8d                 jl 0x80f687
// 0080f6fa  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 0080f6fd  8b11                 mov edx, dword ptr [ecx]
// 0080f6ff  8b4368               mov eax, dword ptr [ebx + 0x68]
// 0080f702  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 0080f708  6a00                 push 0
// 0080f70a  50                   push eax
// 0080f70b  ffd2                 call edx
// 0080f70d  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 0080f710  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 0080f716  8b01                 mov eax, dword ptr [ecx]
// 0080f718  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0080f71e  81e27fffffff         and edx, 0xffffff7f
// 0080f724  52                   push edx
// 0080f725  ffd0                 call eax
// 0080f727  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 0080f72a  8b11                 mov edx, dword ptr [ecx]
// 0080f72c  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 0080f72f  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 0080f735  6a00                 push 0
// 0080f737  50                   push eax
// 0080f738  ffd2                 call edx
// 0080f73a  8b7f6c               mov edi, dword ptr [edi + 0x6c]
// 0080f73d  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 0080f743  8b07                 mov eax, dword ptr [edi]
// 0080f745  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0080f74b  81e17fffffff         and ecx, 0xffffff7f
// 0080f751  51                   push ecx
// 0080f752  8bcf                 mov ecx, edi
// 0080f754  ffd2                 call edx
// 0080f756  5f                   pop edi
// 0080f757  5e                   pop esi
// 0080f758  5d                   pop ebp
// 0080f759  5b                   pop ebx
// 0080f75a  c20400               ret 4
// 0080f75d  e88295f0ff           call 0x718ce4
// copied from an identical function in another client (function ?Copy@CXTPRibbonGroup@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp