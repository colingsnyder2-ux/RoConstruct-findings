// roc 2011-06 004c77d0  unit: RBX::MeshAdapter  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c77d0
//
// 004c77d0  8b542404             mov edx, dword ptr [esp + 4]
// 004c77d4  8bc1                 mov eax, ecx
// 004c77d6  33c9                 xor ecx, ecx
// 004c77d8  8908                 mov dword ptr [eax], ecx
// 004c77da  894804               mov dword ptr [eax + 4], ecx
// 004c77dd  894808               mov dword ptr [eax + 8], ecx
// 004c77e0  895010               mov dword ptr [eax + 0x10], edx
// 004c77e3  894814               mov dword ptr [eax + 0x14], ecx
// 004c77e6  894820               mov dword ptr [eax + 0x20], ecx
// 004c77e9  894824               mov dword ptr [eax + 0x24], ecx
// 004c77ec  c20400               ret 4
// library openrbx-client/App\reflection\reflection_property.cpp (function ??0XmlElement@@QAE@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_property.cpp
