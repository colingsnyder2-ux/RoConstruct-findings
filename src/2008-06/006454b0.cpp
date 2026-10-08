// roc 2008-06 006454b0  unit: RBX::HUMAN::Climbing  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006454b0
//
// 006454b0  d9442414             fld dword ptr [esp + 0x14]
// 006454b4  83ec60               sub esp, 0x60
// 006454b7  56                   push esi
// 006454b8  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 006454bc  57                   push edi
// 006454bd  51                   push ecx
// 006454be  8bce                 mov ecx, esi
// 006454c0  d91c24               fstp dword ptr [esp]
// 006454c3  e8f82dfaff           call 0x5e82c0
// 006454c8  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 006454cc  50                   push eax
// 006454cd  8bcf                 mov ecx, edi
// 006454cf  e8ec2dfaff           call 0x5e82c0
// 006454d4  50                   push eax
// 006454d5  e8c69af9ff           call 0x5defa0
// 006454da  83c40c               add esp, 0xc
// 006454dd  84c0                 test al, al
// 006454df  7508                 jne 0x6454e9
// 006454e1  5f                   pop edi
// 006454e2  32c0                 xor al, al
// 006454e4  5e                   pop esi
// 006454e5  83c460               add esp, 0x60
// 006454e8  c3                   ret 
// 006454e9  8b442474             mov eax, dword ptr [esp + 0x74]
// 006454ed  50                   push eax
// 006454ee  8d4c243c             lea ecx, [esp + 0x3c]
// 006454f2  51                   push ecx
// 006454f3  8bcf                 mov ecx, edi
// 006454f5  e8b62cfaff           call 0x5e81b0
// 006454fa  8b542478             mov edx, dword ptr [esp + 0x78]
// 006454fe  52                   push edx
// 006454ff  8d44240c             lea eax, [esp + 0xc]
// 00645503  50                   push eax
// 00645504  8bce                 mov ecx, esi
// 00645506  e8a52cfaff           call 0x5e81b0
// 0064550b  d90538ad8400         fld dword ptr [0x84ad38]
// 00645511  51                   push ecx
// 00645512  8d4c240c             lea ecx, [esp + 0xc]
// 00645516  d91c24               fstp dword ptr [esp]
// 00645519  51                   push ecx
// 0064551a  8d542440             lea edx, [esp + 0x40]
// 0064551e  52                   push edx
// 0064551f  e86c490000           call 0x649e90
// 00645524  83c40c               add esp, 0xc
// 00645527  84c0                 test al, al
// 00645529  74b6                 je 0x6454e1
// 0064552b  d9842480000000       fld dword ptr [esp + 0x80]
// 00645532  51                   push ecx
// 00645533  8d44240c             lea eax, [esp + 0xc]
// 00645537  d91c24               fstp dword ptr [esp]
// 0064553a  50                   push eax
// 0064553b  8d4c2440             lea ecx, [esp + 0x40]
// 0064553f  51                   push ecx
// 00645540  e8bb4c0000           call 0x64a200
// 00645545  83c40c               add esp, 0xc
// 00645548  84c0                 test al, al
// 0064554a  5f                   pop edi
// 0064554b  0f95c0               setne al
// 0064554e  5e                   pop esi
// 0064554f  83c460               add esp, 0x60
// 00645552  c3                   ret 
// library rbxgs/v8world\Joint.cpp (function ?canBuildJoint@Joint@RBX@@CA_NPAVPrimitive@2@0W4NormalId@2@1MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Joint.cpp
