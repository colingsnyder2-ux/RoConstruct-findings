// roc 2007-03 004633c0  unit: seg_00460000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004633c0
//
// 004633c0  56                   push esi
// 004633c1  8b7108               mov esi, dword ptr [ecx + 8]
// 004633c4  85f6                 test esi, esi
// 004633c6  741b                 je 0x4633e3
// 004633c8  8b0e                 mov ecx, dword ptr [esi]
// 004633ca  8b01                 mov eax, dword ptr [ecx]
// 004633cc  8b5004               mov edx, dword ptr [eax + 4]
// 004633cf  ffd2                 call edx
// 004633d1  8bc6                 mov eax, esi
// 004633d3  8b7604               mov esi, dword ptr [esi + 4]
// 004633d6  50                   push eax
// 004633d7  e814ad1b00           call 0x61e0f0
// 004633dc  83c404               add esp, 4
// 004633df  85f6                 test esi, esi
// 004633e1  75e5                 jne 0x4633c8
// 004633e3  5e                   pop esi
// 004633e4  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?ReferenceCountedObject_zeroWeakPointers@ReferenceCountedObject@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
