// roc 2009-06 004d18e0  unit: RBX::Network::VClient::?$FactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d18e0
//
// 004d18e0  6aff                 push -1
// 004d18e2  6868eb8600           push 0x86eb68
// 004d18e7  64a100000000         mov eax, dword ptr fs:[0]
// 004d18ed  50                   push eax
// 004d18ee  64892500000000       mov dword ptr fs:[0], esp
// 004d18f5  83ec08               sub esp, 8
// 004d18f8  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d18fc  56                   push esi
// 004d18fd  57                   push edi
// 004d18fe  8bf1                 mov esi, ecx
// 004d1900  89742408             mov dword ptr [esp + 8], esi
// 004d1904  50                   push eax
// 004d1905  51                   push ecx
// 004d1906  8bc4                 mov eax, esp
// 004d1908  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004d1910  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004d1918  89642414             mov dword ptr [esp + 0x14], esp
// 004d191c  c70000000000         mov dword ptr [eax], 0
// 004d1922  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004d1926  8b542428             mov edx, dword ptr [esp + 0x28]
// 004d192a  51                   push ecx
// 004d192b  52                   push edx
// 004d192c  c644242801           mov byte ptr [esp + 0x28], 1
// 004d1931  e82ae4ffff           call 0x4cfd60
// 004d1936  50                   push eax
// 004d1937  8bce                 mov ecx, esi
// 004d1939  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004d193e  e82dc3f6ff           call 0x43dc70
// 004d1943  6a00                 push 0
// 004d1945  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004d194a  e8e3702400           call 0x718a32
// 004d194f  6a18                 push 0x18
// 004d1951  c706085f8b00         mov dword ptr [esi], 0x8b5f08
// 004d1957  e8dc702400           call 0x718a38
// 004d195c  83c408               add esp, 8
// 004d195f  85c0                 test eax, eax
// 004d1961  741e                 je 0x4d1981
// 004d1963  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004d1967  33c9                 xor ecx, ecx
// 004d1969  33d2                 xor edx, edx
// 004d196b  897808               mov dword ptr [eax + 8], edi
// 004d196e  c7007c568c00         mov dword ptr [eax], 0x8c567c
// 004d1974  897004               mov dword ptr [eax + 4], esi
// 004d1977  894810               mov dword ptr [eax + 0x10], ecx
// 004d197a  895014               mov dword ptr [eax + 0x14], edx
// 004d197d  8bf8                 mov edi, eax
// 004d197f  eb02                 jmp 0x4d1983
// 004d1981  33ff                 xor edi, edi
// 004d1983  8b4618               mov eax, dword ptr [esi + 0x18]
// 004d1986  3bf8                 cmp edi, eax
// 004d1988  7409                 je 0x4d1993
// 004d198a  50                   push eax
// 004d198b  e8a2702400           call 0x718a32
// 004d1990  83c404               add esp, 4
// 004d1993  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d1997  897e18               mov dword ptr [esi + 0x18], edi
// 004d199a  5f                   pop edi
// 004d199b  8bc6                 mov eax, esi
// 004d199d  64890d00000000       mov dword ptr fs:[0], ecx
// 004d19a4  5e                   pop esi
// 004d19a5  83c414               add esp, 0x14
// 004d19a8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
