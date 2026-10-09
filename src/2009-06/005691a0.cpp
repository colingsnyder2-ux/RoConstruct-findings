// roc 2009-06 005691a0  unit: RBX::RbxG3D::RenderScene  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005691a0
//
// 005691a0  55                   push ebp
// 005691a1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 005691a5  56                   push esi
// 005691a6  8b742410             mov esi, dword ptr [esp + 0x10]
// 005691aa  3bee                 cmp ebp, esi
// 005691ac  0f848b000000         je 0x56923d
// 005691b2  57                   push edi
// 005691b3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005691b7  8d5718               lea edx, [edi + 0x18]
// 005691ba  8d4e18               lea ecx, [esi + 0x18]
// 005691bd  8d4900               lea ecx, [ecx]
// 005691c0  d946b0               fld dword ptr [esi - 0x50]
// 005691c3  83e950               sub ecx, 0x50
// 005691c6  d95fb0               fstp dword ptr [edi - 0x50]
// 005691c9  83ea50               sub edx, 0x50
// 005691cc  d941ec               fld dword ptr [ecx - 0x14]
// 005691cf  83ee50               sub esi, 0x50
// 005691d2  d95aec               fstp dword ptr [edx - 0x14]
// 005691d5  83ef50               sub edi, 0x50
// 005691d8  d941f0               fld dword ptr [ecx - 0x10]
// 005691db  d95af0               fstp dword ptr [edx - 0x10]
// 005691de  d941f4               fld dword ptr [ecx - 0xc]
// 005691e1  d95af4               fstp dword ptr [edx - 0xc]
// 005691e4  d941f8               fld dword ptr [ecx - 8]
// 005691e7  d95af8               fstp dword ptr [edx - 8]
// 005691ea  d941fc               fld dword ptr [ecx - 4]
// 005691ed  d95afc               fstp dword ptr [edx - 4]
// 005691f0  d901                 fld dword ptr [ecx]
// 005691f2  d91a                 fstp dword ptr [edx]
// 005691f4  dd4108               fld qword ptr [ecx + 8]
// 005691f7  dd5a08               fstp qword ptr [edx + 8]
// 005691fa  dd4110               fld qword ptr [ecx + 0x10]
// 005691fd  dd5a10               fstp qword ptr [edx + 0x10]
// 00569200  dd4118               fld qword ptr [ecx + 0x18]
// 00569203  dd5a18               fstp qword ptr [edx + 0x18]
// 00569206  dd4120               fld qword ptr [ecx + 0x20]
// 00569209  dd5a20               fstp qword ptr [edx + 0x20]
// 0056920c  d94128               fld dword ptr [ecx + 0x28]
// 0056920f  d95a28               fstp dword ptr [edx + 0x28]
// 00569212  d9412c               fld dword ptr [ecx + 0x2c]
// 00569215  d95a2c               fstp dword ptr [edx + 0x2c]
// 00569218  d94130               fld dword ptr [ecx + 0x30]
// 0056921b  d95a30               fstp dword ptr [edx + 0x30]
// 0056921e  0fb64134             movzx eax, byte ptr [ecx + 0x34]
// 00569222  884234               mov byte ptr [edx + 0x34], al
// 00569225  0fb64135             movzx eax, byte ptr [ecx + 0x35]
// 00569229  884235               mov byte ptr [edx + 0x35], al
// 0056922c  0fb64136             movzx eax, byte ptr [ecx + 0x36]
// 00569230  884236               mov byte ptr [edx + 0x36], al
// 00569233  3bf5                 cmp esi, ebp
// 00569235  7589                 jne 0x5691c0
// 00569237  8bc7                 mov eax, edi
// 00569239  5f                   pop edi
// 0056923a  5e                   pop esi
// 0056923b  5d                   pop ebp
// 0056923c  c3                   ret 
// 0056923d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00569241  5e                   pop esi
// 00569242  5d                   pop ebp
// 00569243  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Copy_backward_opt@PAVGLight@G3D@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAVGLight@G3D@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
