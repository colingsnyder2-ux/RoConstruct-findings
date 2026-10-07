// roc 2008-06 006315c0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006315c0
//
// 006315c0  6aff                 push -1
// 006315c2  68880d7c00           push 0x7c0d88
// 006315c7  64a100000000         mov eax, dword ptr fs:[0]
// 006315cd  50                   push eax
// 006315ce  64892500000000       mov dword ptr fs:[0], esp
// 006315d5  83ec08               sub esp, 8
// 006315d8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006315dc  56                   push esi
// 006315dd  57                   push edi
// 006315de  8bf1                 mov esi, ecx
// 006315e0  89742408             mov dword ptr [esp + 8], esi
// 006315e4  50                   push eax
// 006315e5  51                   push ecx
// 006315e6  8bc4                 mov eax, esp
// 006315e8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006315f0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006315f8  89642414             mov dword ptr [esp + 0x14], esp
// 006315fc  c70000000000         mov dword ptr [eax], 0
// 00631602  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00631606  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063160a  51                   push ecx
// 0063160b  52                   push edx
// 0063160c  c644242801           mov byte ptr [esp + 0x28], 1
// 00631611  e88af8ffff           call 0x630ea0
// 00631616  50                   push eax
// 00631617  8bce                 mov ecx, esi
// 00631619  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063161e  e88d8ef6ff           call 0x59a4b0
// 00631623  6a18                 push 0x18
// 00631625  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0063162a  c706e45c8400         mov dword ptr [esi], 0x845ce4
// 00631630  e8ebf20600           call 0x6a0920
// 00631635  83c404               add esp, 4
// 00631638  85c0                 test eax, eax
// 0063163a  741e                 je 0x63165a
// 0063163c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00631640  33c9                 xor ecx, ecx
// 00631642  33d2                 xor edx, edx
// 00631644  897808               mov dword ptr [eax + 8], edi
// 00631647  c70000738400         mov dword ptr [eax], 0x847300
// 0063164d  897004               mov dword ptr [eax + 4], esi
// 00631650  894810               mov dword ptr [eax + 0x10], ecx
// 00631653  895014               mov dword ptr [eax + 0x14], edx
// 00631656  8bf8                 mov edi, eax
// 00631658  eb02                 jmp 0x63165c
// 0063165a  33ff                 xor edi, edi
// 0063165c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0063165f  3bf8                 cmp edi, eax
// 00631661  740d                 je 0x631670
// 00631663  85c0                 test eax, eax
// 00631665  7409                 je 0x631670
// 00631667  50                   push eax
// 00631668  e80df00600           call 0x6a067a
// 0063166d  83c404               add esp, 4
// 00631670  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00631674  897e18               mov dword ptr [esi + 0x18], edi
// 00631677  5f                   pop edi
// 00631678  8bc6                 mov eax, esi
// 0063167a  64890d00000000       mov dword ptr fs:[0], ecx
// 00631681  5e                   pop esi
// 00631682  83c414               add esp, 0x14
// 00631685  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
