// roc 2009-06 0049de10  unit: G3D::VARArea  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049de10
//
// 0049de10  83f806               cmp eax, 6
// 0049de13  772b                 ja 0x49de40
// 0049de15  ff248544de4900       jmp dword ptr [eax*4 + 0x49de44]
// 0049de1c  b802030000           mov eax, 0x302
// 0049de21  c3                   ret 
// 0049de22  b803030000           mov eax, 0x303
// 0049de27  c3                   ret 
// 0049de28  b801000000           mov eax, 1
// 0049de2d  c3                   ret 
// 0049de2e  b800030000           mov eax, 0x300
// 0049de33  c3                   ret 
// 0049de34  b806030000           mov eax, 0x306
// 0049de39  c3                   ret 
// 0049de3a  b801030000           mov eax, 0x301
// 0049de3f  c3                   ret 
// 0049de40  33c0                 xor eax, eax
// 0049de42  c3                   ret 
// 0049de43  90                   nop 
// 0049de44  1cde                 sbb al, 0xde
// 0049de46  49                   dec ecx
// 0049de47  0022                 add byte ptr [edx], ah
// 0049de49  de4900               fimul word ptr [ecx]
// 0049de4c  28de                 sub dh, bl
// 0049de4e  49                   dec ecx
// 0049de4f  0040de               add byte ptr [eax - 0x22], al
// 0049de52  49                   dec ecx
// 0049de53  002e                 add byte ptr [esi], ch
// 0049de55  de4900               fimul word ptr [ecx]
// 0049de58  34de                 xor al, 0xde
// 0049de5a  49                   dec ecx
// 0049de5b  003a                 add byte ptr [edx], bh
// 0049de5d  de4900               fimul word ptr [ecx]
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?toGLBlendFunc@G3D@@YAHW4BlendFunc@RenderDevice@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
