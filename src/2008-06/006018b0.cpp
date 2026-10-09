// roc 2008-06 006018b0  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006018b0
//
// 006018b0  6aff                 push -1
// 006018b2  68abfd7b00           push 0x7bfdab
// 006018b7  64a100000000         mov eax, dword ptr fs:[0]
// 006018bd  50                   push eax
// 006018be  64892500000000       mov dword ptr fs:[0], esp
// 006018c5  51                   push ecx
// 006018c6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006018ca  53                   push ebx
// 006018cb  55                   push ebp
// 006018cc  8be9                 mov ebp, ecx
// 006018ce  56                   push esi
// 006018cf  8b742420             mov esi, dword ptr [esp + 0x20]
// 006018d3  50                   push eax
// 006018d4  8d5d04               lea ebx, [ebp + 4]
// 006018d7  56                   push esi
// 006018d8  8bcb                 mov ecx, ebx
// 006018da  896c2414             mov dword ptr [esp + 0x14], ebp
// 006018de  897500               mov dword ptr [ebp], esi
// 006018e1  e8caf2ffff           call 0x600bb0
// 006018e6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006018ee  85f6                 test esi, esi
// 006018f0  7453                 je 0x601945
// 006018f2  57                   push edi
// 006018f3  8dbee4000000         lea edi, [esi + 0xe4]
// 006018f9  85ff                 test edi, edi
// 006018fb  7431                 je 0x60192e
// 006018fd  8937                 mov dword ptr [edi], esi
// 006018ff  8b33                 mov esi, dword ptr [ebx]
// 00601901  85f6                 test esi, esi
// 00601903  740c                 je 0x601911
// 00601905  8d4e08               lea ecx, [esi + 8]
// 00601908  ba01000000           mov edx, 1
// 0060190d  f00fc111             lock xadd dword ptr [ecx], edx
// 00601911  8b4f04               mov ecx, dword ptr [edi + 4]
// 00601914  85c9                 test ecx, ecx
// 00601916  7413                 je 0x60192b
// 00601918  8d4108               lea eax, [ecx + 8]
// 0060191b  83caff               or edx, 0xffffffff
// 0060191e  f00fc110             lock xadd dword ptr [eax], edx
// 00601922  7507                 jne 0x60192b
// 00601924  8b01                 mov eax, dword ptr [ecx]
// 00601926  8b5008               mov edx, dword ptr [eax + 8]
// 00601929  ffd2                 call edx
// 0060192b  897704               mov dword ptr [edi + 4], esi
// 0060192e  5f                   pop edi
// 0060192f  5e                   pop esi
// 00601930  8bc5                 mov eax, ebp
// 00601932  5d                   pop ebp
// 00601933  5b                   pop ebx
// 00601934  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601938  64890d00000000       mov dword ptr fs:[0], ecx
// 0060193f  83c410               add esp, 0x10
// 00601942  c20800               ret 8
// 00601945  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00601949  5e                   pop esi
// 0060194a  8bc5                 mov eax, ebp
// 0060194c  5d                   pop ebp
// 0060194d  5b                   pop ebx
// 0060194e  64890d00000000       mov dword ptr fs:[0], ecx
// 00601955  83c410               add esp, 0x10
// 00601958  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
