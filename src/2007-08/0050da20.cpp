// roc 2007-08 0050da20  unit: G3D::TextInput::WrongSymbol  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050da20
//
// 0050da20  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0050da23  8b542404             mov edx, dword ptr [esp + 4]
// 0050da27  56                   push esi
// 0050da28  8d3410               lea esi, [eax + edx]
// 0050da2b  3b7118               cmp esi, dword ptr [ecx + 0x18]
// 0050da2e  5e                   pop esi
// 0050da2f  7206                 jb 0x50da37
// 0050da31  83c8ff               or eax, 0xffffffff
// 0050da34  c20400               ret 4
// 0050da37  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0050da3a  03c8                 add ecx, eax
// 0050da3c  0fb60411             movzx eax, byte ptr [ecx + edx]
// 0050da40  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?peekInputChar@TextInput@G3D@@AAEHI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
