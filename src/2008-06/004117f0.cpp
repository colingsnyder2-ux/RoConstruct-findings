// roc 2008-06 004117f0  unit: ChatEnter  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004117f0
//
// 004117f0  56                   push esi
// 004117f1  8bf1                 mov esi, ecx
// 004117f3  e8f81a1600           call 0x5732f0
// 004117f8  8b10                 mov edx, dword ptr [eax]
// 004117fa  56                   push esi
// 004117fb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004117ff  8bc8                 mov ecx, eax
// 00411801  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00411804  56                   push esi
// 00411805  ffd0                 call eax
// 00411807  8bc6                 mov eax, esi
// 00411809  5e                   pop esi
// 0041180a  c20400               ret 4
// library openrbx-client/App\gui\Widget.cpp (function ?getPosition@GuiItem@RBX@@MBE?AVVector2@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/Widget.cpp
