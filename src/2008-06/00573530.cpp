// roc 2008-06 00573530  unit: RBX::GuiTarget  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573530
//
// 00573530  56                   push esi
// 00573531  8bf1                 mov esi, ecx
// 00573533  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 0057353d  e8ce792400           call 0x7baf10
// 00573542  d900                 fld dword ptr [eax]
// 00573544  d99e44010000         fstp dword ptr [esi + 0x144]
// 0057354a  d94004               fld dword ptr [eax + 4]
// 0057354d  d99e48010000         fstp dword ptr [esi + 0x148]
// 00573553  d94008               fld dword ptr [eax + 8]
// 00573556  d99e4c010000         fstp dword ptr [esi + 0x14c]
// 0057355c  d9400c               fld dword ptr [eax + 0xc]
// 0057355f  d99e50010000         fstp dword ptr [esi + 0x150]
// 00573565  c6865801000001       mov byte ptr [esi + 0x158], 1
// 0057356c  5e                   pop esi
// 0057356d  c3                   ret 
// library openrbx-client/App\gui\GUI.cpp (function ?init@TopMenuBar@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
