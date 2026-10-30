// roc 2009-12 00884180  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00884180
//
// 00884180  83ec30               sub esp, 0x30
// 00884183  53                   push ebx
// 00884184  55                   push ebp
// 00884185  57                   push edi
// 00884186  8bf9                 mov edi, ecx
// 00884188  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 0088418e  83c006               add eax, 6
// 00884191  83f819               cmp eax, 0x19
// 00884194  7d05                 jge 0x88419b
// 00884196  b819000000           mov eax, 0x19
// 0088419b  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0088419f  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 008841a3  c7450008000000       mov dword ptr [ebp], 8
// 008841aa  894504               mov dword ptr [ebp + 4], eax
// 008841ad  85db                 test ebx, ebx
// 008841af  0f8434010000         je 0x8842e9
// 008841b5  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 008841ba  0f8429010000         je 0x8842e9
// 008841c0  56                   push esi
// 008841c1  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 008841c5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008841c8  8d442410             lea eax, [esp + 0x10]
// 008841cc  50                   push eax
// 008841cd  51                   push ecx
// 008841ce  ff1550cc9800         call dword ptr [0x98cc50]
// 008841d4  6afd                 push -3
// 008841d6  6afd                 push -3
// 008841d8  8d542418             lea edx, [esp + 0x18]
// 008841dc  52                   push edx
// 008841dd  ff1558ca9800         call dword ptr [0x98ca58]
// 008841e3  8b4504               mov eax, dword ptr [ebp + 4]
// 008841e6  03442414             add eax, dword ptr [esp + 0x14]
// 008841ea  83beec01000000       cmp dword ptr [esi + 0x1ec], 0
// 008841f1  8944241c             mov dword ptr [esp + 0x1c], eax
// 008841f5  7429                 je 0x884220
// 008841f7  83bf4005000000       cmp dword ptr [edi + 0x540], 0
// 008841fe  7408                 je 0x884208
// 00884200  8d8f50050000         lea ecx, [edi + 0x550]
// 00884206  eb1e                 jmp 0x884226
// 00884208  6a24                 push 0x24
// 0088420a  8bcf                 mov ecx, edi
// 0088420c  e82f94f7ff           call 0x7fd640
// 00884211  50                   push eax
// 00884212  8d442414             lea eax, [esp + 0x14]
// 00884216  50                   push eax
// 00884217  8bcb                 mov ecx, ebx
// 00884219  e8e003f7ff           call 0x7f45fe
// 0088421e  eb1d                 jmp 0x88423d
// 00884220  8d8f7c040000         lea ecx, [edi + 0x47c]
// 00884226  6a00                 push 0
// 00884228  6a00                 push 0
// 0088422a  51                   push ecx
// 0088422b  8d54241c             lea edx, [esp + 0x1c]
// 0088422f  52                   push edx
// 00884230  53                   push ebx
// 00884231  e86a90fcff           call 0x84d2a0
// 00884236  8bc8                 mov ecx, eax
// 00884238  e88393fcff           call 0x84d5c0
// 0088423d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00884241  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00884245  83c604               add esi, 4
// 00884248  83c0fb               add eax, -5
// 0088424b  3bf0                 cmp esi, eax
// 0088424d  0f8d8a000000         jge 0x8842dd
// 00884253  bd07000000           mov ebp, 7
// 00884258  eb06                 jmp 0x884260
// 0088425a  8d9b00000000         lea ebx, [ebx]
// 00884260  8d4e01               lea ecx, [esi + 1]
// 00884263  894c2424             mov dword ptr [esp + 0x24], ecx
// 00884267  8d5603               lea edx, [esi + 3]
// 0088426a  6a05                 push 5
// 0088426c  8bcf                 mov ecx, edi
// 0088426e  c744242406000000     mov dword ptr [esp + 0x24], 6
// 00884276  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 0088427e  89542430             mov dword ptr [esp + 0x30], edx
// 00884282  e8b993f7ff           call 0x7fd640
// 00884287  50                   push eax
// 00884288  8d442424             lea eax, [esp + 0x24]
// 0088428c  50                   push eax
// 0088428d  8bcb                 mov ecx, ebx
// 0088428f  e86a03f7ff           call 0x7f45fe
// 00884294  8d4e02               lea ecx, [esi + 2]
// 00884297  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0088429b  6a26                 push 0x26
// 0088429d  8bcf                 mov ecx, edi
// 0088429f  c744243405000000     mov dword ptr [esp + 0x34], 5
// 008842a7  89742438             mov dword ptr [esp + 0x38], esi
// 008842ab  896c243c             mov dword ptr [esp + 0x3c], ebp
// 008842af  e88c93f7ff           call 0x7fd640
// 008842b4  50                   push eax
// 008842b5  8d542434             lea edx, [esp + 0x34]
// 008842b9  52                   push edx
// 008842ba  8bcb                 mov ecx, ebx
// 008842bc  e83d03f7ff           call 0x7f45fe
// 008842c1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008842c5  83c604               add esi, 4
// 008842c8  83c0fb               add eax, -5
// 008842cb  3bf0                 cmp esi, eax
// 008842cd  7c91                 jl 0x884260
// 008842cf  8b442444             mov eax, dword ptr [esp + 0x44]
// 008842d3  5e                   pop esi
// 008842d4  5f                   pop edi
// 008842d5  5d                   pop ebp
// 008842d6  5b                   pop ebx
// 008842d7  83c430               add esp, 0x30
// 008842da  c21000               ret 0x10
// 008842dd  5e                   pop esi
// 008842de  5f                   pop edi
// 008842df  8bc5                 mov eax, ebp
// 008842e1  5d                   pop ebp
// 008842e2  5b                   pop ebx
// 008842e3  83c430               add esp, 0x30
// 008842e6  c21000               ret 0x10
// 008842e9  5f                   pop edi
// 008842ea  8bc5                 mov eax, ebp
// 008842ec  5d                   pop ebp
// 008842ed  5b                   pop ebx
// 008842ee  83c430               add esp, 0x30
// 008842f1  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawDialogBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
