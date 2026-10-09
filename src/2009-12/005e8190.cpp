// roc 2009-12 005e8190  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e8190
//
// 005e8190  55                   push ebp
// 005e8191  8b6c2408             mov ebp, dword ptr [esp + 8]
// 005e8195  56                   push esi
// 005e8196  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e819a  3bee                 cmp ebp, esi
// 005e819c  0f848b000000         je 0x5e822d
// 005e81a2  57                   push edi
// 005e81a3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005e81a7  8d5718               lea edx, [edi + 0x18]
// 005e81aa  8d4e18               lea ecx, [esi + 0x18]
// 005e81ad  8d4900               lea ecx, [ecx]
// 005e81b0  d946b0               fld dword ptr [esi - 0x50]
// 005e81b3  83e950               sub ecx, 0x50
// 005e81b6  d95fb0               fstp dword ptr [edi - 0x50]
// 005e81b9  83ea50               sub edx, 0x50
// 005e81bc  d941ec               fld dword ptr [ecx - 0x14]
// 005e81bf  83ee50               sub esi, 0x50
// 005e81c2  d95aec               fstp dword ptr [edx - 0x14]
// 005e81c5  83ef50               sub edi, 0x50
// 005e81c8  d941f0               fld dword ptr [ecx - 0x10]
// 005e81cb  d95af0               fstp dword ptr [edx - 0x10]
// 005e81ce  d941f4               fld dword ptr [ecx - 0xc]
// 005e81d1  d95af4               fstp dword ptr [edx - 0xc]
// 005e81d4  d941f8               fld dword ptr [ecx - 8]
// 005e81d7  d95af8               fstp dword ptr [edx - 8]
// 005e81da  d941fc               fld dword ptr [ecx - 4]
// 005e81dd  d95afc               fstp dword ptr [edx - 4]
// 005e81e0  d901                 fld dword ptr [ecx]
// 005e81e2  d91a                 fstp dword ptr [edx]
// 005e81e4  dd4108               fld qword ptr [ecx + 8]
// 005e81e7  dd5a08               fstp qword ptr [edx + 8]
// 005e81ea  dd4110               fld qword ptr [ecx + 0x10]
// 005e81ed  dd5a10               fstp qword ptr [edx + 0x10]
// 005e81f0  dd4118               fld qword ptr [ecx + 0x18]
// 005e81f3  dd5a18               fstp qword ptr [edx + 0x18]
// 005e81f6  dd4120               fld qword ptr [ecx + 0x20]
// 005e81f9  dd5a20               fstp qword ptr [edx + 0x20]
// 005e81fc  d94128               fld dword ptr [ecx + 0x28]
// 005e81ff  d95a28               fstp dword ptr [edx + 0x28]
// 005e8202  d9412c               fld dword ptr [ecx + 0x2c]
// 005e8205  d95a2c               fstp dword ptr [edx + 0x2c]
// 005e8208  d94130               fld dword ptr [ecx + 0x30]
// 005e820b  d95a30               fstp dword ptr [edx + 0x30]
// 005e820e  0fb64134             movzx eax, byte ptr [ecx + 0x34]
// 005e8212  884234               mov byte ptr [edx + 0x34], al
// 005e8215  0fb64135             movzx eax, byte ptr [ecx + 0x35]
// 005e8219  884235               mov byte ptr [edx + 0x35], al
// 005e821c  0fb64136             movzx eax, byte ptr [ecx + 0x36]
// 005e8220  884236               mov byte ptr [edx + 0x36], al
// 005e8223  3bf5                 cmp esi, ebp
// 005e8225  7589                 jne 0x5e81b0
// 005e8227  8bc7                 mov eax, edi
// 005e8229  5f                   pop edi
// 005e822a  5e                   pop esi
// 005e822b  5d                   pop ebp
// 005e822c  c3                   ret 
// 005e822d  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e8231  5e                   pop esi
// 005e8232  5d                   pop ebp
// 005e8233  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Copy_backward_opt@PAVGLight@G3D@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAVGLight@G3D@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
