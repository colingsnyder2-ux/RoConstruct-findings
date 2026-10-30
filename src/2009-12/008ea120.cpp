// roc 2009-12 008ea120  unit: CXTPRibbonGroup  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea120
//
// 008ea120  53                   push ebx
// 008ea121  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008ea125  8b4360               mov eax, dword ptr [ebx + 0x60]
// 008ea128  55                   push ebp
// 008ea129  56                   push esi
// 008ea12a  57                   push edi
// 008ea12b  8bf9                 mov edi, ecx
// 008ea12d  894760               mov dword ptr [edi + 0x60], eax
// 008ea130  8b4b64               mov ecx, dword ptr [ebx + 0x64]
// 008ea133  894f64               mov dword ptr [edi + 0x64], ecx
// 008ea136  8b5374               mov edx, dword ptr [ebx + 0x74]
// 008ea139  8d4328               lea eax, [ebx + 0x28]
// 008ea13c  50                   push eax
// 008ea13d  8d4f28               lea ecx, [edi + 0x28]
// 008ea140  895774               mov dword ptr [edi + 0x74], edx
// 008ea143  ff1538d59800         call dword ptr [0x98d538]
// 008ea149  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 008ea14c  894f30               mov dword ptr [edi + 0x30], ecx
// 008ea14f  8b5324               mov edx, dword ptr [ebx + 0x24]
// 008ea152  895724               mov dword ptr [edi + 0x24], edx
// 008ea155  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008ea158  8b5768               mov edx, dword ptr [edi + 0x68]
// 008ea15b  894720               mov dword ptr [edi + 0x20], eax
// 008ea15e  8b4b78               mov ecx, dword ptr [ebx + 0x78]
// 008ea161  894f78               mov dword ptr [edi + 0x78], ecx
// 008ea164  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008ea16a  89442414             mov dword ptr [esp + 0x14], eax
// 008ea16e  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 008ea171  33ed                 xor ebp, ebp
// 008ea173  85c0                 test eax, eax
// 008ea175  7e73                 jle 0x8ea1ea
// 008ea177  85ed                 test ebp, ebp
// 008ea179  7c15                 jl 0x8ea190
// 008ea17b  3be8                 cmp ebp, eax
// 008ea17d  7d11                 jge 0x8ea190
// 008ea17f  3b6b4c               cmp ebp, dword ptr [ebx + 0x4c]
// 008ea182  0f8dc5000000         jge 0x8ea24d
// 008ea188  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 008ea18b  8b04a9               mov eax, dword ptr [ecx + ebp*4]
// 008ea18e  eb02                 jmp 0x8ea192
// 008ea190  33c0                 xor eax, eax
// 008ea192  8b5758               mov edx, dword ptr [edi + 0x58]
// 008ea195  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 008ea19b  8b542414             mov edx, dword ptr [esp + 0x14]
// 008ea19f  6a00                 push 0
// 008ea1a1  03d5                 add edx, ebp
// 008ea1a3  52                   push edx
// 008ea1a4  50                   push eax
// 008ea1a5  e806d1f5ff           call 0x8472b0
// 008ea1aa  8bf0                 mov esi, eax
// 008ea1ac  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008ea1b2  8b06                 mov eax, dword ptr [esi]
// 008ea1b4  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008ea1ba  81e17fffffff         and ecx, 0xffffff7f
// 008ea1c0  51                   push ecx
// 008ea1c1  8bce                 mov ecx, esi
// 008ea1c3  89be58010000         mov dword ptr [esi + 0x158], edi
// 008ea1c9  ffd2                 call edx
// 008ea1cb  8b474c               mov eax, dword ptr [edi + 0x4c]
// 008ea1ce  8d4f44               lea ecx, [edi + 0x44]
// 008ea1d1  56                   push esi
// 008ea1d2  50                   push eax
// 008ea1d3  e8980af8ff           call 0x86ac70
// 008ea1d8  83c604               add esi, 4
// 008ea1db  56                   push esi
// 008ea1dc  ff150cb29800         call dword ptr [0x98b20c]
// 008ea1e2  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 008ea1e5  45                   inc ebp
// 008ea1e6  3be8                 cmp ebp, eax
// 008ea1e8  7c8d                 jl 0x8ea177
// 008ea1ea  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 008ea1ed  8b11                 mov edx, dword ptr [ecx]
// 008ea1ef  8b4368               mov eax, dword ptr [ebx + 0x68]
// 008ea1f2  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 008ea1f8  6a00                 push 0
// 008ea1fa  50                   push eax
// 008ea1fb  ffd2                 call edx
// 008ea1fd  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 008ea200  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 008ea206  8b01                 mov eax, dword ptr [ecx]
// 008ea208  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 008ea20e  81e27fffffff         and edx, 0xffffff7f
// 008ea214  52                   push edx
// 008ea215  ffd0                 call eax
// 008ea217  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 008ea21a  8b11                 mov edx, dword ptr [ecx]
// 008ea21c  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 008ea21f  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 008ea225  6a00                 push 0
// 008ea227  50                   push eax
// 008ea228  ffd2                 call edx
// 008ea22a  8b7f6c               mov edi, dword ptr [edi + 0x6c]
// 008ea22d  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 008ea233  8b07                 mov eax, dword ptr [edi]
// 008ea235  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008ea23b  81e17fffffff         and ecx, 0xffffff7f
// 008ea241  51                   push ecx
// 008ea242  8bcf                 mov ecx, edi
// 008ea244  ffd2                 call edx
// 008ea246  5f                   pop edi
// 008ea247  5e                   pop esi
// 008ea248  5d                   pop ebp
// 008ea249  5b                   pop ebx
// 008ea24a  c20400               ret 4
// 008ea24d  e8ba98f0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?Copy@CXTPRibbonGroup@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp