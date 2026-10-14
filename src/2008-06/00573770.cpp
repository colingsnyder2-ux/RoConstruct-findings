// roc 2008-06 00573770  unit: RBX::TextDisplay  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573770
//
// 00573770  b801000000           mov eax, 1
// 00573775  83ec0c               sub esp, 0xc
// 00573778  84055c4e9700         test byte ptr [0x974e5c], al
// 0057377e  751e                 jne 0x57379e
// 00573780  d905a4638100         fld dword ptr [0x8163a4]
// 00573786  09055c4e9700         or dword ptr [0x974e5c], eax
// 0057378c  d91d544e9700         fstp dword ptr [0x974e54]
// 00573792  d90570f88200         fld dword ptr [0x82f870]
// 00573798  d91d584e9700         fstp dword ptr [0x974e58]
// 0057379e  8d442404             lea eax, [esp + 4]
// 005737a2  68544e9700           push 0x974e54
// 005737a7  50                   push eax
// 005737a8  e843ffffff           call 0x5736f0
// 005737ad  db442418             fild dword ptr [esp + 0x18]
// 005737b1  d808                 fmul dword ptr [eax]
// 005737b3  d80d9c838100         fmul dword ptr [0x81839c]
// 005737b9  dd1c24               fstp qword ptr [esp]
// 005737bc  e8efe31200           call 0x6a1bb0
// 005737c1  d95c2408             fstp dword ptr [esp + 8]
// 005737c5  83c408               add esp, 8
// 005737c8  d90424               fld dword ptr [esp]
// 005737cb  db5c2410             fistp dword ptr [esp + 0x10]
// 005737cf  8b442410             mov eax, dword ptr [esp + 0x10]
// 005737d3  83c40c               add esp, 0xc
// 005737d6  c3                   ret 
// library rbxgs-dll/gui\GUI.cpp (function ?normalizedFontSize@GuiRoot@RBX@@SAHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll gui/GUI.cpp
