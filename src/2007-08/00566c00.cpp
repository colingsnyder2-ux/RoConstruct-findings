// roc 2007-08 00566c00  unit: TextXmlWriter  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00566c00
//
// 00566c00  8bc1                 mov eax, ecx
// 00566c02  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00566c06  894804               mov dword ptr [eax + 4], ecx
// 00566c09  33c9                 xor ecx, ecx
// 00566c0b  c700c0967a00         mov dword ptr [eax], 0x7a96c0
// 00566c11  89480c               mov dword ptr [eax + 0xc], ecx
// 00566c14  894810               mov dword ptr [eax + 0x10], ecx
// 00566c17  894814               mov dword ptr [eax + 0x14], ecx
// 00566c1a  894818               mov dword ptr [eax + 0x18], ecx
// 00566c1d  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlParser@@IAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
