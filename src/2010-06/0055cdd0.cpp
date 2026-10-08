// from server: 100% by auto
// roc 2010-06 0055cdd0  unit: G3D::TextInput::WrongSymbol  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055cdd0
//
// 0055cdd0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0055cdd3  8b542404             mov edx, dword ptr [esp + 4]
// 0055cdd7  56                   push esi
// 0055cdd8  8d3410               lea esi, [eax + edx]
// 0055cddb  3b7124               cmp esi, dword ptr [ecx + 0x24]
// 0055cdde  5e                   pop esi
// 0055cddf  7206                 jb 0x55cde7
// 0055cde1  83c8ff               or eax, 0xffffffff
// 0055cde4  c20400               ret 4
// 0055cde7  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0055cdea  03c8                 add ecx, eax
// 0055cdec  0fb60411             movzx eax, byte ptr [ecx + edx]
// 0055cdf0  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?peekInputChar@TextInput@G3D@@AAEHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
