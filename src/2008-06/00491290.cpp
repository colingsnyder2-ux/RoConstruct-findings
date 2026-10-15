// roc 2008-06 00491290  unit: RBX::Network::VPlayer::?$PropDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491290
//
// 00491290  6aff                 push -1
// 00491292  6811e87c00           push 0x7ce811
// 00491297  64a100000000         mov eax, dword ptr fs:[0]
// 0049129d  50                   push eax
// 0049129e  64892500000000       mov dword ptr fs:[0], esp
// 004912a5  51                   push ecx
// 004912a6  56                   push esi
// 004912a7  8b742418             mov esi, dword ptr [esp + 0x18]
// 004912ab  89742418             mov dword ptr [esp + 0x18], esi
// 004912af  89742404             mov dword ptr [esp + 4], esi
// 004912b3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004912bb  85f6                 test esi, esi
// 004912bd  7414                 je 0x4912d3
// 004912bf  57                   push edi
// 004912c0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004912c4  57                   push edi
// 004912c5  8bce                 mov ecx, esi
// 004912c7  e874c1ffff           call 0x48d440
// 004912cc  8b4720               mov eax, dword ptr [edi + 0x20]
// 004912cf  894620               mov dword ptr [esi + 0x20], eax
// 004912d2  5f                   pop edi
// 004912d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004912d7  5e                   pop esi
// 004912d8  64890d00000000       mov dword ptr fs:[0], ecx
// 004912df  83c410               add esp, 0x10
// 004912e2  c3                   ret 
// library rbxgs/roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp (function ??$_Construct@U?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@algorithm@boost@@U1234@@std@@YAXPAU?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@algorithm@boost@@ABU1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp
