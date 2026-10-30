// roc 2012-06 00a6fe00  unit: CXTPRibbonGroup  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6fe00
//
// 00a6fe00  53                   push ebx
// 00a6fe01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00a6fe05  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00a6fe08  55                   push ebp
// 00a6fe09  56                   push esi
// 00a6fe0a  57                   push edi
// 00a6fe0b  8bf9                 mov edi, ecx
// 00a6fe0d  894760               mov dword ptr [edi + 0x60], eax
// 00a6fe10  8b4b64               mov ecx, dword ptr [ebx + 0x64]
// 00a6fe13  894f64               mov dword ptr [edi + 0x64], ecx
// 00a6fe16  8b5374               mov edx, dword ptr [ebx + 0x74]
// 00a6fe19  8d4328               lea eax, [ebx + 0x28]
// 00a6fe1c  50                   push eax
// 00a6fe1d  8d4f28               lea ecx, [edi + 0x28]
// 00a6fe20  895774               mov dword ptr [edi + 0x74], edx
// 00a6fe23  ff152045b200         call dword ptr [0xb24520]
// 00a6fe29  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00a6fe2c  894f30               mov dword ptr [edi + 0x30], ecx
// 00a6fe2f  8b5324               mov edx, dword ptr [ebx + 0x24]
// 00a6fe32  895724               mov dword ptr [edi + 0x24], edx
// 00a6fe35  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00a6fe38  8b5768               mov edx, dword ptr [edi + 0x68]
// 00a6fe3b  894720               mov dword ptr [edi + 0x20], eax
// 00a6fe3e  8b4b78               mov ecx, dword ptr [ebx + 0x78]
// 00a6fe41  894f78               mov dword ptr [edi + 0x78], ecx
// 00a6fe44  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00a6fe4a  89442414             mov dword ptr [esp + 0x14], eax
// 00a6fe4e  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 00a6fe51  33ed                 xor ebp, ebp
// 00a6fe53  85c0                 test eax, eax
// 00a6fe55  7e73                 jle 0xa6feca
// 00a6fe57  85ed                 test ebp, ebp
// 00a6fe59  7c15                 jl 0xa6fe70
// 00a6fe5b  3be8                 cmp ebp, eax
// 00a6fe5d  7d11                 jge 0xa6fe70
// 00a6fe5f  3b6b4c               cmp ebp, dword ptr [ebx + 0x4c]
// 00a6fe62  0f8dc5000000         jge 0xa6ff2d
// 00a6fe68  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 00a6fe6b  8b04a9               mov eax, dword ptr [ecx + ebp*4]
// 00a6fe6e  eb02                 jmp 0xa6fe72
// 00a6fe70  33c0                 xor eax, eax
// 00a6fe72  8b5758               mov edx, dword ptr [edi + 0x58]
// 00a6fe75  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 00a6fe7b  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a6fe7f  6a00                 push 0
// 00a6fe81  03d5                 add edx, ebp
// 00a6fe83  52                   push edx
// 00a6fe84  50                   push eax
// 00a6fe85  e8d612f6ff           call 0x9d1160
// 00a6fe8a  8bf0                 mov esi, eax
// 00a6fe8c  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00a6fe92  8b06                 mov eax, dword ptr [esi]
// 00a6fe94  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00a6fe9a  81e17fffffff         and ecx, 0xffffff7f
// 00a6fea0  51                   push ecx
// 00a6fea1  8bce                 mov ecx, esi
// 00a6fea3  89be58010000         mov dword ptr [esi + 0x158], edi
// 00a6fea9  ffd2                 call edx
// 00a6feab  8b474c               mov eax, dword ptr [edi + 0x4c]
// 00a6feae  8d4f44               lea ecx, [edi + 0x44]
// 00a6feb1  56                   push esi
// 00a6feb2  50                   push eax
// 00a6feb3  e818200000           call 0xa71ed0
// 00a6feb8  83c604               add esi, 4
// 00a6febb  56                   push esi
// 00a6febc  ff159821b200         call dword ptr [0xb22198]
// 00a6fec2  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 00a6fec5  45                   inc ebp
// 00a6fec6  3be8                 cmp ebp, eax
// 00a6fec8  7c8d                 jl 0xa6fe57
// 00a6feca  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 00a6fecd  8b11                 mov edx, dword ptr [ecx]
// 00a6fecf  8b4368               mov eax, dword ptr [ebx + 0x68]
// 00a6fed2  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 00a6fed8  6a00                 push 0
// 00a6feda  50                   push eax
// 00a6fedb  ffd2                 call edx
// 00a6fedd  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 00a6fee0  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 00a6fee6  8b01                 mov eax, dword ptr [ecx]
// 00a6fee8  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00a6feee  81e27fffffff         and edx, 0xffffff7f
// 00a6fef4  52                   push edx
// 00a6fef5  ffd0                 call eax
// 00a6fef7  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00a6fefa  8b11                 mov edx, dword ptr [ecx]
// 00a6fefc  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 00a6feff  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 00a6ff05  6a00                 push 0
// 00a6ff07  50                   push eax
// 00a6ff08  ffd2                 call edx
// 00a6ff0a  8b7f6c               mov edi, dword ptr [edi + 0x6c]
// 00a6ff0d  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 00a6ff13  8b07                 mov eax, dword ptr [edi]
// 00a6ff15  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00a6ff1b  81e17fffffff         and ecx, 0xffffff7f
// 00a6ff21  51                   push ecx
// 00a6ff22  8bcf                 mov ecx, edi
// 00a6ff24  ffd2                 call edx
// 00a6ff26  5f                   pop edi
// 00a6ff27  5e                   pop esi
// 00a6ff28  5d                   pop ebp
// 00a6ff29  5b                   pop ebx
// 00a6ff2a  c20400               ret 4
// 00a6ff2d  e88e24f1ff           call 0x9823c0
// copied from an identical function in another client (function ?Copy@CXTPRibbonGroup@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp