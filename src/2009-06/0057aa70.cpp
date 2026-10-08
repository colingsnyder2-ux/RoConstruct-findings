// from server: 100% by auto
// roc 2009-06 0057aa70  unit: G3D::TextInput::WrongSymbol  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057aa70
//
// 0057aa70  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0057aa73  8b542404             mov edx, dword ptr [esp + 4]
// 0057aa77  56                   push esi
// 0057aa78  8d3410               lea esi, [eax + edx]
// 0057aa7b  3b7124               cmp esi, dword ptr [ecx + 0x24]
// 0057aa7e  5e                   pop esi
// 0057aa7f  7206                 jb 0x57aa87
// 0057aa81  83c8ff               or eax, 0xffffffff
// 0057aa84  c20400               ret 4
// 0057aa87  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0057aa8a  03c8                 add ecx, eax
// 0057aa8c  0fb60411             movzx eax, byte ptr [ecx + edx]
// 0057aa90  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?peekInputChar@TextInput@G3D@@AAEHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
