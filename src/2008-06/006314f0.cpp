// roc 2008-06 006314f0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006314f0
//
// 006314f0  6aff                 push -1
// 006314f2  68880d7c00           push 0x7c0d88
// 006314f7  64a100000000         mov eax, dword ptr fs:[0]
// 006314fd  50                   push eax
// 006314fe  64892500000000       mov dword ptr fs:[0], esp
// 00631505  83ec08               sub esp, 8
// 00631508  8b442424             mov eax, dword ptr [esp + 0x24]
// 0063150c  56                   push esi
// 0063150d  57                   push edi
// 0063150e  8bf1                 mov esi, ecx
// 00631510  89742408             mov dword ptr [esp + 8], esi
// 00631514  50                   push eax
// 00631515  51                   push ecx
// 00631516  8bc4                 mov eax, esp
// 00631518  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00631520  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00631528  89642414             mov dword ptr [esp + 0x14], esp
// 0063152c  c70000000000         mov dword ptr [eax], 0
// 00631532  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00631536  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063153a  51                   push ecx
// 0063153b  52                   push edx
// 0063153c  c644242801           mov byte ptr [esp + 0x28], 1
// 00631541  e85af9ffff           call 0x630ea0
// 00631546  50                   push eax
// 00631547  8bce                 mov ecx, esi
// 00631549  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063154e  e8bd40e1ff           call 0x445610
// 00631553  6a18                 push 0x18
// 00631555  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0063155a  c70634418200         mov dword ptr [esi], 0x824134
// 00631560  e8bbf30600           call 0x6a0920
// 00631565  83c404               add esp, 4
// 00631568  85c0                 test eax, eax
// 0063156a  741e                 je 0x63158a
// 0063156c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00631570  33c9                 xor ecx, ecx
// 00631572  33d2                 xor edx, edx
// 00631574  897808               mov dword ptr [eax + 8], edi
// 00631577  c700ec728400         mov dword ptr [eax], 0x8472ec
// 0063157d  897004               mov dword ptr [eax + 4], esi
// 00631580  894810               mov dword ptr [eax + 0x10], ecx
// 00631583  895014               mov dword ptr [eax + 0x14], edx
// 00631586  8bf8                 mov edi, eax
// 00631588  eb02                 jmp 0x63158c
// 0063158a  33ff                 xor edi, edi
// 0063158c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0063158f  3bf8                 cmp edi, eax
// 00631591  740d                 je 0x6315a0
// 00631593  85c0                 test eax, eax
// 00631595  7409                 je 0x6315a0
// 00631597  50                   push eax
// 00631598  e8ddf00600           call 0x6a067a
// 0063159d  83c404               add esp, 4
// 006315a0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006315a4  897e18               mov dword ptr [esi + 0x18], edi
// 006315a7  5f                   pop edi
// 006315a8  8bc6                 mov eax, esi
// 006315aa  64890d00000000       mov dword ptr fs:[0], ecx
// 006315b1  5e                   pop esi
// 006315b2  83c414               add esp, 0x14
// 006315b5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
