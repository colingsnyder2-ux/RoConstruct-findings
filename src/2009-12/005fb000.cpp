// roc 2009-12 005fb000  unit: G3D::TextInput::WrongSymbol  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fb000
//
// 005fb000  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 005fb003  8b542404             mov edx, dword ptr [esp + 4]
// 005fb007  56                   push esi
// 005fb008  8d3410               lea esi, [eax + edx]
// 005fb00b  3b7124               cmp esi, dword ptr [ecx + 0x24]
// 005fb00e  5e                   pop esi
// 005fb00f  7206                 jb 0x5fb017
// 005fb011  83c8ff               or eax, 0xffffffff
// 005fb014  c20400               ret 4
// 005fb017  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 005fb01a  03c8                 add ecx, eax
// 005fb01c  0fb60411             movzx eax, byte ptr [ecx + edx]
// 005fb020  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?peekInputChar@TextInput@G3D@@AAEHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
