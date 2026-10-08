// roc 2007-03 0042bd40  unit: seg_00420000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042bd40
//
// 0042bd40  56                   push esi
// 0042bd41  8bf1                 mov esi, ecx
// 0042bd43  833e00               cmp dword ptr [esi], 0
// 0042bd46  57                   push edi
// 0042bd47  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 0042bd4d  7502                 jne 0x42bd51
// 0042bd4f  ffd7                 call edi
// 0042bd51  8b06                 mov eax, dword ptr [esi]
// 0042bd53  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042bd56  3b4804               cmp ecx, dword ptr [eax + 4]
// 0042bd59  7502                 jne 0x42bd5d
// 0042bd5b  ffd7                 call edi
// 0042bd5d  8b4604               mov eax, dword ptr [esi + 4]
// 0042bd60  5f                   pop edi
// 0042bd61  83c008               add eax, 8
// 0042bd64  5e                   pop esi
// 0042bd65  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??D?$_Const_iterator@$00@?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@QBEABUconnection_slot_pair@detail@signals@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
