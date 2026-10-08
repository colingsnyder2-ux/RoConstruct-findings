// roc 2007-03 005681d0  unit: seg_00560000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005681d0
//
// 005681d0  8bc1                 mov eax, ecx
// 005681d2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005681d6  894804               mov dword ptr [eax + 4], ecx
// 005681d9  33c9                 xor ecx, ecx
// 005681db  c700f8b07a00         mov dword ptr [eax], 0x7ab0f8
// 005681e1  89480c               mov dword ptr [eax + 0xc], ecx
// 005681e4  894810               mov dword ptr [eax + 0x10], ecx
// 005681e7  894814               mov dword ptr [eax + 0x14], ecx
// 005681ea  894818               mov dword ptr [eax + 0x18], ecx
// 005681ed  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlParser@@IAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
