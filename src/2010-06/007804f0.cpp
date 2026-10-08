// from server: 100% by auto
// roc 2010-06 007804f0  unit: seg_00780000  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007804f0
//
// 007804f0  83ec38               sub esp, 0x38
// 007804f3  53                   push ebx
// 007804f4  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 007804f8  55                   push ebp
// 007804f9  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 007804fd  8d4508               lea eax, [ebp + 8]
// 00780500  89442448             mov dword ptr [esp + 0x48], eax
// 00780504  8b00                 mov eax, dword ptr [eax]
// 00780506  83f806               cmp eax, 6
// 00780509  56                   push esi
// 0078050a  57                   push edi
// 0078050b  7c05                 jl 0x780512
// 0078050d  83f809               cmp eax, 9
// 00780510  7e0e                 jle 0x780520
// 00780512  681832a500           push 0xa53218
// 00780517  53                   push ebx
// 00780518  e873200000           call 0x782590
// 0078051d  83c408               add esp, 8
// 00780520  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00780523  83f82c               cmp eax, 0x2c
// 00780526  755d                 jne 0x780585
// 00780528  53                   push ebx
// 00780529  e852340000           call 0x783980
// 0078052e  83c404               add esp, 4
// 00780531  8d7c2430             lea edi, [esp + 0x30]
// 00780535  8bf3                 mov esi, ebx
// 00780537  896c2428             mov dword ptr [esp + 0x28], ebp
// 0078053b  e840f7ffff           call 0x77fc80
// 00780540  837c243006           cmp dword ptr [esp + 0x30], 6
// 00780545  7509                 jne 0x780550
// 00780547  8bc5                 mov eax, ebp
// 00780549  8bcb                 mov ecx, ebx
// 0078054b  e840ffffff           call 0x780490
// 00780550  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00780553  0fb74834             movzx ecx, word ptr [eax + 0x34]
// 00780557  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0078055b  bac8000000           mov edx, 0xc8
// 00780560  2bd1                 sub edx, ecx
// 00780562  3bfa                 cmp edi, edx
// 00780564  7e0d                 jle 0x780573
// 00780566  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00780569  b90032a500           mov ecx, 0xa53200
// 0078056e  e86de5ffff           call 0x77eae0
// 00780573  47                   inc edi
// 00780574  57                   push edi
// 00780575  8d54242c             lea edx, [esp + 0x2c]
// 00780579  52                   push edx
// 0078057a  53                   push ebx
// 0078057b  e870ffffff           call 0x7804f0
// 00780580  83c40c               add esp, 0xc
// 00780583  eb61                 jmp 0x7805e6
// 00780585  83f83d               cmp eax, 0x3d
// 00780588  7421                 je 0x7805ab
// 0078058a  6a3d                 push 0x3d
// 0078058c  53                   push ebx
// 0078058d  e8fe1e0000           call 0x782490
// 00780592  50                   push eax
// 00780593  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00780596  683830a500           push 0xa53038
// 0078059b  50                   push eax
// 0078059c  e83f28fbff           call 0x732de0
// 007805a1  50                   push eax
// 007805a2  53                   push ebx
// 007805a3  e8e81f0000           call 0x782590
// 007805a8  83c41c               add esp, 0x1c
// 007805ab  53                   push ebx
// 007805ac  e8cf330000           call 0x783980
// 007805b1  83c404               add esp, 4
// 007805b4  8d7c2410             lea edi, [esp + 0x10]
// 007805b8  8bf3                 mov esi, ebx
// 007805ba  e8d1f4ffff           call 0x77fa90
// 007805bf  8b742454             mov esi, dword ptr [esp + 0x54]
// 007805c3  8bf8                 mov edi, eax
// 007805c5  3bfe                 cmp edi, esi
// 007805c7  7456                 je 0x78061f
// 007805c9  57                   push edi
// 007805ca  8d4c2414             lea ecx, [esp + 0x14]
// 007805ce  8bd6                 mov edx, esi
// 007805d0  8bc3                 mov eax, ebx
// 007805d2  e8e9e9ffff           call 0x77efc0
// 007805d7  83c404               add esp, 4
// 007805da  3bfe                 cmp edi, esi
// 007805dc  7e08                 jle 0x7805e6
// 007805de  8b4330               mov eax, dword ptr [ebx + 0x30]
// 007805e1  2bf7                 sub esi, edi
// 007805e3  017024               add dword ptr [eax + 0x24], esi
// 007805e6  8b5b30               mov ebx, dword ptr [ebx + 0x30]
// 007805e9  8b4324               mov eax, dword ptr [ebx + 0x24]
// 007805ec  8b542450             mov edx, dword ptr [esp + 0x50]
// 007805f0  83c9ff               or ecx, 0xffffffff
// 007805f3  894c2420             mov dword ptr [esp + 0x20], ecx
// 007805f7  894c2424             mov dword ptr [esp + 0x24], ecx
// 007805fb  8d4c2410             lea ecx, [esp + 0x10]
// 007805ff  51                   push ecx
// 00780600  52                   push edx
// 00780601  48                   dec eax
// 00780602  53                   push ebx
// 00780603  c744241c0c000000     mov dword ptr [esp + 0x1c], 0xc
// 0078060b  89442424             mov dword ptr [esp + 0x24], eax
// 0078060f  e84cfd0000           call 0x790360
// 00780614  83c40c               add esp, 0xc
// 00780617  5f                   pop edi
// 00780618  5e                   pop esi
// 00780619  5d                   pop ebp
// 0078061a  5b                   pop ebx
// 0078061b  83c438               add esp, 0x38
// 0078061e  c3                   ret 
// 0078061f  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00780622  8d442410             lea eax, [esp + 0x10]
// 00780626  50                   push eax
// 00780627  51                   push ecx
// 00780628  e8c3f20000           call 0x78f8f0
// 0078062d  8b442458             mov eax, dword ptr [esp + 0x58]
// 00780631  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00780634  8d542418             lea edx, [esp + 0x18]
// 00780638  52                   push edx
// 00780639  50                   push eax
// 0078063a  51                   push ecx
// 0078063b  e820fd0000           call 0x790360
// 00780640  83c414               add esp, 0x14
// 00780643  5f                   pop edi
// 00780644  5e                   pop esi
// 00780645  5d                   pop ebp
// 00780646  5b                   pop ebx
// 00780647  83c438               add esp, 0x38
// 0078064a  c3                   ret 
// library lua-5.1.4/lparser.c (function _assignment)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
