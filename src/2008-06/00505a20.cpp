// roc 2008-06 00505a20  unit: RBX::Render::RenderScene  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505a20
//
// 00505a20  55                   push ebp
// 00505a21  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00505a25  56                   push esi
// 00505a26  8b742410             mov esi, dword ptr [esp + 0x10]
// 00505a2a  3bee                 cmp ebp, esi
// 00505a2c  0f848b000000         je 0x505abd
// 00505a32  57                   push edi
// 00505a33  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00505a37  8d5718               lea edx, [edi + 0x18]
// 00505a3a  8d4e18               lea ecx, [esi + 0x18]
// 00505a3d  8d4900               lea ecx, [ecx]
// 00505a40  d946b0               fld dword ptr [esi - 0x50]
// 00505a43  83e950               sub ecx, 0x50
// 00505a46  d95fb0               fstp dword ptr [edi - 0x50]
// 00505a49  83ea50               sub edx, 0x50
// 00505a4c  d941ec               fld dword ptr [ecx - 0x14]
// 00505a4f  83ee50               sub esi, 0x50
// 00505a52  d95aec               fstp dword ptr [edx - 0x14]
// 00505a55  83ef50               sub edi, 0x50
// 00505a58  d941f0               fld dword ptr [ecx - 0x10]
// 00505a5b  d95af0               fstp dword ptr [edx - 0x10]
// 00505a5e  d941f4               fld dword ptr [ecx - 0xc]
// 00505a61  d95af4               fstp dword ptr [edx - 0xc]
// 00505a64  d941f8               fld dword ptr [ecx - 8]
// 00505a67  d95af8               fstp dword ptr [edx - 8]
// 00505a6a  d941fc               fld dword ptr [ecx - 4]
// 00505a6d  d95afc               fstp dword ptr [edx - 4]
// 00505a70  d901                 fld dword ptr [ecx]
// 00505a72  d91a                 fstp dword ptr [edx]
// 00505a74  dd4108               fld qword ptr [ecx + 8]
// 00505a77  dd5a08               fstp qword ptr [edx + 8]
// 00505a7a  dd4110               fld qword ptr [ecx + 0x10]
// 00505a7d  dd5a10               fstp qword ptr [edx + 0x10]
// 00505a80  dd4118               fld qword ptr [ecx + 0x18]
// 00505a83  dd5a18               fstp qword ptr [edx + 0x18]
// 00505a86  dd4120               fld qword ptr [ecx + 0x20]
// 00505a89  dd5a20               fstp qword ptr [edx + 0x20]
// 00505a8c  d94128               fld dword ptr [ecx + 0x28]
// 00505a8f  d95a28               fstp dword ptr [edx + 0x28]
// 00505a92  d9412c               fld dword ptr [ecx + 0x2c]
// 00505a95  d95a2c               fstp dword ptr [edx + 0x2c]
// 00505a98  d94130               fld dword ptr [ecx + 0x30]
// 00505a9b  d95a30               fstp dword ptr [edx + 0x30]
// 00505a9e  0fb64134             movzx eax, byte ptr [ecx + 0x34]
// 00505aa2  884234               mov byte ptr [edx + 0x34], al
// 00505aa5  0fb64135             movzx eax, byte ptr [ecx + 0x35]
// 00505aa9  884235               mov byte ptr [edx + 0x35], al
// 00505aac  0fb64136             movzx eax, byte ptr [ecx + 0x36]
// 00505ab0  884236               mov byte ptr [edx + 0x36], al
// 00505ab3  3bf5                 cmp esi, ebp
// 00505ab5  7589                 jne 0x505a40
// 00505ab7  8bc7                 mov eax, edi
// 00505ab9  5f                   pop edi
// 00505aba  5e                   pop esi
// 00505abb  5d                   pop ebp
// 00505abc  c3                   ret 
// 00505abd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00505ac1  5e                   pop esi
// 00505ac2  5d                   pop ebp
// 00505ac3  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Copy_backward_opt@PAVGLight@G3D@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAVGLight@G3D@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
