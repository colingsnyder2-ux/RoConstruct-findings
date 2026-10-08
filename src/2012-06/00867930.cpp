// roc 2012-06 00867930  unit: RBX::MouseCommand  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00867930
//
// 00867930  6aff                 push -1
// 00867932  688833ad00           push 0xad3388
// 00867937  64a100000000         mov eax, dword ptr fs:[0]
// 0086793d  50                   push eax
// 0086793e  64892500000000       mov dword ptr fs:[0], esp
// 00867945  83ec20               sub esp, 0x20
// 00867948  8b442438             mov eax, dword ptr [esp + 0x38]
// 0086794c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00867950  56                   push esi
// 00867951  50                   push eax
// 00867952  51                   push ecx
// 00867953  8d542410             lea edx, [esp + 0x10]
// 00867957  33f6                 xor esi, esi
// 00867959  52                   push edx
// 0086795a  89742410             mov dword ptr [esp + 0x10], esi
// 0086795e  e8edfeffff           call 0x867850
// 00867963  8d442414             lea eax, [esp + 0x14]
// 00867967  89742438             mov dword ptr [esp + 0x38], esi
// 0086796b  8b742440             mov esi, dword ptr [esp + 0x40]
// 0086796f  50                   push eax
// 00867970  56                   push esi
// 00867971  e81afaffff           call 0x867390
// 00867976  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0086797a  83c414               add esp, 0x14
// 0086797d  8bc6                 mov eax, esi
// 0086797f  5e                   pop esi
// 00867980  64890d00000000       mov dword ptr fs:[0], ecx
// 00867987  83c42c               add esp, 0x2c
// 0086798a  c3                   ret 
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getSearchRay@MouseCommand@RBX@@SA?AVRay@G3D@@ABVUIEvent@2@PAVICameraOwner@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
