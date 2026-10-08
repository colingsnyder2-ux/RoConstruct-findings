// roc 2007-08 006001d0  unit: RBX::BallBallContact  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006001d0
//
// 006001d0  6aff                 push -1
// 006001d2  6848bf7500           push 0x75bf48
// 006001d7  64a100000000         mov eax, dword ptr fs:[0]
// 006001dd  50                   push eax
// 006001de  64892500000000       mov dword ptr fs:[0], esp
// 006001e5  83ec10               sub esp, 0x10
// 006001e8  53                   push ebx
// 006001e9  56                   push esi
// 006001ea  8bf1                 mov esi, ecx
// 006001ec  57                   push edi
// 006001ed  8974240c             mov dword ptr [esp + 0xc], esi
// 006001f1  e8ba91faff           call 0x5a93b0
// 006001f6  894604               mov dword ptr [esi + 4], eax
// 006001f9  c6401101             mov byte ptr [eax + 0x11], 1
// 006001fd  8b4604               mov eax, dword ptr [esi + 4]
// 00600200  894004               mov dword ptr [eax + 4], eax
// 00600203  8b4604               mov eax, dword ptr [esi + 4]
// 00600206  8900                 mov dword ptr [eax], eax
// 00600208  8b4604               mov eax, dword ptr [esi + 4]
// 0060020b  894008               mov dword ptr [eax + 8], eax
// 0060020e  33c0                 xor eax, eax
// 00600210  894608               mov dword ptr [esi + 8], eax
// 00600213  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00600217  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0060021b  3bfb                 cmp edi, ebx
// 0060021d  89442424             mov dword ptr [esp + 0x24], eax
// 00600221  7414                 je 0x600237
// 00600223  57                   push edi
// 00600224  8d442414             lea eax, [esp + 0x14]
// 00600228  50                   push eax
// 00600229  8bce                 mov ecx, esi
// 0060022b  e88027feff           call 0x5e29b0
// 00600230  83c704               add edi, 4
// 00600233  3bfb                 cmp edi, ebx
// 00600235  75ec                 jne 0x600223
// 00600237  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060023b  5f                   pop edi
// 0060023c  8bc6                 mov eax, esi
// 0060023e  5e                   pop esi
// 0060023f  5b                   pop ebx
// 00600240  64890d00000000       mov dword ptr fs:[0], ecx
// 00600247  83c41c               add esp, 0x1c
// 0060024a  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ??$?0PBQAVPrimitive@RBX@@@?$set@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@@std@@QAE@PBQAVPrimitive@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
