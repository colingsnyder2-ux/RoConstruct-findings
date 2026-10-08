// from server: 100% by auto
// roc 2008-06 00516b40  unit: G3D::TextInput::WrongSymbol  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516b40
//
// 00516b40  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00516b43  8b542404             mov edx, dword ptr [esp + 4]
// 00516b47  56                   push esi
// 00516b48  8d3410               lea esi, [eax + edx]
// 00516b4b  3b7124               cmp esi, dword ptr [ecx + 0x24]
// 00516b4e  5e                   pop esi
// 00516b4f  7206                 jb 0x516b57
// 00516b51  83c8ff               or eax, 0xffffffff
// 00516b54  c20400               ret 4
// 00516b57  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00516b5a  03c8                 add ecx, eax
// 00516b5c  0fb60411             movzx eax, byte ptr [ecx + edx]
// 00516b60  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?peekInputChar@TextInput@G3D@@AAEHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
