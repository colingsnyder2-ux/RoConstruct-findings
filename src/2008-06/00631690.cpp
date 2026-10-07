// roc 2008-06 00631690  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631690
//
// 00631690  6aff                 push -1
// 00631692  68880d7c00           push 0x7c0d88
// 00631697  64a100000000         mov eax, dword ptr fs:[0]
// 0063169d  50                   push eax
// 0063169e  64892500000000       mov dword ptr fs:[0], esp
// 006316a5  83ec08               sub esp, 8
// 006316a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006316ac  56                   push esi
// 006316ad  57                   push edi
// 006316ae  8bf1                 mov esi, ecx
// 006316b0  89742408             mov dword ptr [esp + 8], esi
// 006316b4  50                   push eax
// 006316b5  51                   push ecx
// 006316b6  8bc4                 mov eax, esp
// 006316b8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006316c0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006316c8  89642414             mov dword ptr [esp + 0x14], esp
// 006316cc  c70000000000         mov dword ptr [eax], 0
// 006316d2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006316d6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006316da  51                   push ecx
// 006316db  52                   push edx
// 006316dc  c644242801           mov byte ptr [esp + 0x28], 1
// 006316e1  e8baf7ffff           call 0x630ea0
// 006316e6  50                   push eax
// 006316e7  8bce                 mov ecx, esi
// 006316e9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006316ee  e84d2df5ff           call 0x584440
// 006316f3  6a18                 push 0x18
// 006316f5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006316fa  c70620748400         mov dword ptr [esi], 0x847420
// 00631700  e81bf20600           call 0x6a0920
// 00631705  83c404               add esp, 4
// 00631708  85c0                 test eax, eax
// 0063170a  741e                 je 0x63172a
// 0063170c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00631710  33c9                 xor ecx, ecx
// 00631712  33d2                 xor edx, edx
// 00631714  897808               mov dword ptr [eax + 8], edi
// 00631717  c70014738400         mov dword ptr [eax], 0x847314
// 0063171d  897004               mov dword ptr [eax + 4], esi
// 00631720  894810               mov dword ptr [eax + 0x10], ecx
// 00631723  895014               mov dword ptr [eax + 0x14], edx
// 00631726  8bf8                 mov edi, eax
// 00631728  eb02                 jmp 0x63172c
// 0063172a  33ff                 xor edi, edi
// 0063172c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0063172f  3bf8                 cmp edi, eax
// 00631731  740d                 je 0x631740
// 00631733  85c0                 test eax, eax
// 00631735  7409                 je 0x631740
// 00631737  50                   push eax
// 00631738  e83def0600           call 0x6a067a
// 0063173d  83c404               add esp, 4
// 00631740  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00631744  897e18               mov dword ptr [esi + 0x18], edi
// 00631747  5f                   pop edi
// 00631748  8bc6                 mov eax, esi
// 0063174a  64890d00000000       mov dword ptr fs:[0], ecx
// 00631751  5e                   pop esi
// 00631752  83c414               add esp, 0x14
// 00631755  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
