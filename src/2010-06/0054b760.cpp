// roc 2010-06 0054b760  unit: RBX::AggregateChunk  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b760
//
// 0054b760  55                   push ebp
// 0054b761  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0054b765  56                   push esi
// 0054b766  8b742410             mov esi, dword ptr [esp + 0x10]
// 0054b76a  3bee                 cmp ebp, esi
// 0054b76c  0f848b000000         je 0x54b7fd
// 0054b772  57                   push edi
// 0054b773  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0054b777  8d5718               lea edx, [edi + 0x18]
// 0054b77a  8d4e18               lea ecx, [esi + 0x18]
// 0054b77d  8d4900               lea ecx, [ecx]
// 0054b780  d946b0               fld dword ptr [esi - 0x50]
// 0054b783  83e950               sub ecx, 0x50
// 0054b786  d95fb0               fstp dword ptr [edi - 0x50]
// 0054b789  83ea50               sub edx, 0x50
// 0054b78c  d941ec               fld dword ptr [ecx - 0x14]
// 0054b78f  83ee50               sub esi, 0x50
// 0054b792  d95aec               fstp dword ptr [edx - 0x14]
// 0054b795  83ef50               sub edi, 0x50
// 0054b798  d941f0               fld dword ptr [ecx - 0x10]
// 0054b79b  d95af0               fstp dword ptr [edx - 0x10]
// 0054b79e  d941f4               fld dword ptr [ecx - 0xc]
// 0054b7a1  d95af4               fstp dword ptr [edx - 0xc]
// 0054b7a4  d941f8               fld dword ptr [ecx - 8]
// 0054b7a7  d95af8               fstp dword ptr [edx - 8]
// 0054b7aa  d941fc               fld dword ptr [ecx - 4]
// 0054b7ad  d95afc               fstp dword ptr [edx - 4]
// 0054b7b0  d901                 fld dword ptr [ecx]
// 0054b7b2  d91a                 fstp dword ptr [edx]
// 0054b7b4  dd4108               fld qword ptr [ecx + 8]
// 0054b7b7  dd5a08               fstp qword ptr [edx + 8]
// 0054b7ba  dd4110               fld qword ptr [ecx + 0x10]
// 0054b7bd  dd5a10               fstp qword ptr [edx + 0x10]
// 0054b7c0  dd4118               fld qword ptr [ecx + 0x18]
// 0054b7c3  dd5a18               fstp qword ptr [edx + 0x18]
// 0054b7c6  dd4120               fld qword ptr [ecx + 0x20]
// 0054b7c9  dd5a20               fstp qword ptr [edx + 0x20]
// 0054b7cc  d94128               fld dword ptr [ecx + 0x28]
// 0054b7cf  d95a28               fstp dword ptr [edx + 0x28]
// 0054b7d2  d9412c               fld dword ptr [ecx + 0x2c]
// 0054b7d5  d95a2c               fstp dword ptr [edx + 0x2c]
// 0054b7d8  d94130               fld dword ptr [ecx + 0x30]
// 0054b7db  d95a30               fstp dword ptr [edx + 0x30]
// 0054b7de  0fb64134             movzx eax, byte ptr [ecx + 0x34]
// 0054b7e2  884234               mov byte ptr [edx + 0x34], al
// 0054b7e5  0fb64135             movzx eax, byte ptr [ecx + 0x35]
// 0054b7e9  884235               mov byte ptr [edx + 0x35], al
// 0054b7ec  0fb64136             movzx eax, byte ptr [ecx + 0x36]
// 0054b7f0  884236               mov byte ptr [edx + 0x36], al
// 0054b7f3  3bf5                 cmp esi, ebp
// 0054b7f5  7589                 jne 0x54b780
// 0054b7f7  8bc7                 mov eax, edi
// 0054b7f9  5f                   pop edi
// 0054b7fa  5e                   pop esi
// 0054b7fb  5d                   pop ebp
// 0054b7fc  c3                   ret 
// 0054b7fd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054b801  5e                   pop esi
// 0054b802  5d                   pop ebp
// 0054b803  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Copy_backward_opt@PAVGLight@G3D@@PAV12@Uforward_iterator_tag@std@@@std@@YAPAVGLight@G3D@@PAV12@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
