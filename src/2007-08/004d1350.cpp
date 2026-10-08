// roc 2007-08 004d1350  unit: RBX::View::PartChunk  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d1350
//
// 004d1350  8b442404             mov eax, dword ptr [esp + 4]
// 004d1354  3d58298c00           cmp eax, 0x8c2958
// 004d1359  56                   push esi
// 004d135a  8bf1                 mov esi, ecx
// 004d135c  7510                 jne 0x4d136e
// 004d135e  e8fdfdffff           call 0x4d1160
// 004d1363  8bce                 mov ecx, esi
// 004d1365  e8e6feffff           call 0x4d1250
// 004d136a  5e                   pop esi
// 004d136b  c20400               ret 4
// 004d136e  3dc0288c00           cmp eax, 0x8c28c0
// 004d1373  740f                 je 0x4d1384
// 004d1375  50                   push eax
// 004d1376  e825570e00           call 0x5b6aa0
// 004d137b  83c404               add esp, 4
// 004d137e  84c0                 test al, al
// 004d1380  7407                 je 0x4d1389
// 004d1382  8bce                 mov ecx, esi
// 004d1384  e8d7fdffff           call 0x4d1160
// 004d1389  5e                   pop esi
// 004d138a  c20400               ret 4
// library rbxgs-view/Part.cpp (function ?onPropertyChanged@PartChunk@View@RBX@@MAEXPBVPropertyDescriptor@Reflection@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
