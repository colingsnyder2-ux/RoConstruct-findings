// roc 2009-06 004bb220  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bb220
//
// 004bb220  6aff                 push -1
// 004bb222  6868eb8600           push 0x86eb68
// 004bb227  64a100000000         mov eax, dword ptr fs:[0]
// 004bb22d  50                   push eax
// 004bb22e  64892500000000       mov dword ptr fs:[0], esp
// 004bb235  83ec08               sub esp, 8
// 004bb238  8b442424             mov eax, dword ptr [esp + 0x24]
// 004bb23c  56                   push esi
// 004bb23d  57                   push edi
// 004bb23e  8bf1                 mov esi, ecx
// 004bb240  89742408             mov dword ptr [esp + 8], esi
// 004bb244  50                   push eax
// 004bb245  51                   push ecx
// 004bb246  8bc4                 mov eax, esp
// 004bb248  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004bb250  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004bb258  89642414             mov dword ptr [esp + 0x14], esp
// 004bb25c  c70000000000         mov dword ptr [eax], 0
// 004bb262  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004bb266  8b542428             mov edx, dword ptr [esp + 0x28]
// 004bb26a  51                   push ecx
// 004bb26b  52                   push edx
// 004bb26c  c644242801           mov byte ptr [esp + 0x28], 1
// 004bb271  e86af9ffff           call 0x4babe0
// 004bb276  50                   push eax
// 004bb277  8bce                 mov ecx, esi
// 004bb279  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004bb27e  e87d4ef8ff           call 0x440100
// 004bb283  6a00                 push 0
// 004bb285  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004bb28a  e8a3d72500           call 0x718a32
// 004bb28f  6a18                 push 0x18
// 004bb291  c706ac468c00         mov dword ptr [esi], 0x8c46ac
// 004bb297  e89cd72500           call 0x718a38
// 004bb29c  83c408               add esp, 8
// 004bb29f  85c0                 test eax, eax
// 004bb2a1  741e                 je 0x4bb2c1
// 004bb2a3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004bb2a7  33c9                 xor ecx, ecx
// 004bb2a9  33d2                 xor edx, edx
// 004bb2ab  897808               mov dword ptr [eax + 8], edi
// 004bb2ae  c700ac448c00         mov dword ptr [eax], 0x8c44ac
// 004bb2b4  897004               mov dword ptr [eax + 4], esi
// 004bb2b7  894810               mov dword ptr [eax + 0x10], ecx
// 004bb2ba  895014               mov dword ptr [eax + 0x14], edx
// 004bb2bd  8bf8                 mov edi, eax
// 004bb2bf  eb02                 jmp 0x4bb2c3
// 004bb2c1  33ff                 xor edi, edi
// 004bb2c3  8b4618               mov eax, dword ptr [esi + 0x18]
// 004bb2c6  3bf8                 cmp edi, eax
// 004bb2c8  7409                 je 0x4bb2d3
// 004bb2ca  50                   push eax
// 004bb2cb  e862d72500           call 0x718a32
// 004bb2d0  83c404               add esp, 4
// 004bb2d3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004bb2d7  897e18               mov dword ptr [esi + 0x18], edi
// 004bb2da  5f                   pop edi
// 004bb2db  8bc6                 mov eax, esi
// 004bb2dd  64890d00000000       mov dword ptr fs:[0], ecx
// 004bb2e4  5e                   pop esi
// 004bb2e5  83c414               add esp, 0x14
// 004bb2e8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
