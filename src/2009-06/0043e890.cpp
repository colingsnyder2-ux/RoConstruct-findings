// roc 2009-06 0043e890  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043e890
//
// 0043e890  6aff                 push -1
// 0043e892  6868eb8600           push 0x86eb68
// 0043e897  64a100000000         mov eax, dword ptr fs:[0]
// 0043e89d  50                   push eax
// 0043e89e  64892500000000       mov dword ptr fs:[0], esp
// 0043e8a5  83ec08               sub esp, 8
// 0043e8a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0043e8ac  56                   push esi
// 0043e8ad  57                   push edi
// 0043e8ae  8bf1                 mov esi, ecx
// 0043e8b0  89742408             mov dword ptr [esp + 8], esi
// 0043e8b4  50                   push eax
// 0043e8b5  51                   push ecx
// 0043e8b6  8bc4                 mov eax, esp
// 0043e8b8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0043e8c0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0043e8c8  89642414             mov dword ptr [esp + 0x14], esp
// 0043e8cc  c70000000000         mov dword ptr [eax], 0
// 0043e8d2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0043e8d6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0043e8da  51                   push ecx
// 0043e8db  52                   push edx
// 0043e8dc  c644242801           mov byte ptr [esp + 0x28], 1
// 0043e8e1  e8fac6fcff           call 0x40afe0
// 0043e8e6  50                   push eax
// 0043e8e7  8bce                 mov ecx, esi
// 0043e8e9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0043e8ee  e8fdf3ffff           call 0x43dcf0
// 0043e8f3  6a00                 push 0
// 0043e8f5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0043e8fa  e833a12d00           call 0x718a32
// 0043e8ff  6a18                 push 0x18
// 0043e901  c7063c5f8b00         mov dword ptr [esi], 0x8b5f3c
// 0043e907  e82ca12d00           call 0x718a38
// 0043e90c  83c408               add esp, 8
// 0043e90f  85c0                 test eax, eax
// 0043e911  741e                 je 0x43e931
// 0043e913  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0043e917  33c9                 xor ecx, ecx
// 0043e919  33d2                 xor edx, edx
// 0043e91b  897808               mov dword ptr [eax + 8], edi
// 0043e91e  c7008c5e8b00         mov dword ptr [eax], 0x8b5e8c
// 0043e924  897004               mov dword ptr [eax + 4], esi
// 0043e927  894810               mov dword ptr [eax + 0x10], ecx
// 0043e92a  895014               mov dword ptr [eax + 0x14], edx
// 0043e92d  8bf8                 mov edi, eax
// 0043e92f  eb02                 jmp 0x43e933
// 0043e931  33ff                 xor edi, edi
// 0043e933  8b4618               mov eax, dword ptr [esi + 0x18]
// 0043e936  3bf8                 cmp edi, eax
// 0043e938  7409                 je 0x43e943
// 0043e93a  50                   push eax
// 0043e93b  e8f2a02d00           call 0x718a32
// 0043e940  83c404               add esp, 4
// 0043e943  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0043e947  897e18               mov dword ptr [esi + 0x18], edi
// 0043e94a  5f                   pop edi
// 0043e94b  8bc6                 mov eax, esi
// 0043e94d  64890d00000000       mov dword ptr fs:[0], ecx
// 0043e954  5e                   pop esi
// 0043e955  83c414               add esp, 0x14
// 0043e958  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
