// roc 2007-03 0040e250  unit: seg_00400000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040e250
//
// 0040e250  56                   push esi
// 0040e251  8bf1                 mov esi, ecx
// 0040e253  e8b8381400           call 0x551b10
// 0040e258  8b10                 mov edx, dword ptr [eax]
// 0040e25a  56                   push esi
// 0040e25b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0040e25f  8bc8                 mov ecx, eax
// 0040e261  8b424c               mov eax, dword ptr [edx + 0x4c]
// 0040e264  56                   push esi
// 0040e265  ffd0                 call eax
// 0040e267  8bc6                 mov eax, esi
// 0040e269  5e                   pop esi
// 0040e26a  c20400               ret 4
// library openrbx-client/App\gui\Widget.cpp (function ?getPosition@GuiItem@RBX@@MBE?AVVector2@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/Widget.cpp
