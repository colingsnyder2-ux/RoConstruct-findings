// roc 2012-06 00540ce0  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00540ce0
//
// 00540ce0  8b542404             mov edx, dword ptr [esp + 4]
// 00540ce4  8bc1                 mov eax, ecx
// 00540ce6  33c9                 xor ecx, ecx
// 00540ce8  8908                 mov dword ptr [eax], ecx
// 00540cea  894804               mov dword ptr [eax + 4], ecx
// 00540ced  894808               mov dword ptr [eax + 8], ecx
// 00540cf0  895010               mov dword ptr [eax + 0x10], edx
// 00540cf3  894814               mov dword ptr [eax + 0x14], ecx
// 00540cf6  894820               mov dword ptr [eax + 0x20], ecx
// 00540cf9  894824               mov dword ptr [eax + 0x24], ecx
// 00540cfc  c20400               ret 4
// library openrbx-client/App\reflection\reflection_property.cpp (function ??0XmlElement@@QAE@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_property.cpp
