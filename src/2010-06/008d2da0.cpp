// roc 2010-06 008d2da0  unit: Ogre::VisualEngine  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d2da0
//
// 008d2da0  83ec08               sub esp, 8
// 008d2da3  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d2da7  53                   push ebx
// 008d2da8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008d2dac  56                   push esi
// 008d2dad  8b742418             mov esi, dword ptr [esp + 0x18]
// 008d2db1  57                   push edi
// 008d2db2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008d2db6  32c0                 xor al, al
// 008d2db8  88442410             mov byte ptr [esp + 0x10], al
// 008d2dbc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d2dc0  8844240c             mov byte ptr [esp + 0xc], al
// 008d2dc4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d2dc8  50                   push eax
// 008d2dc9  51                   push ecx
// 008d2dca  52                   push edx
// 008d2dcb  57                   push edi
// 008d2dcc  56                   push esi
// 008d2dcd  53                   push ebx
// 008d2dce  e89df1ffff           call 0x8d1f70
// 008d2dd3  2bf3                 sub esi, ebx
// 008d2dd5  83c418               add esp, 0x18
// 008d2dd8  c1fe04               sar esi, 4
// 008d2ddb  c1e604               shl esi, 4
// 008d2dde  8bc7                 mov eax, edi
// 008d2de0  5f                   pop edi
// 008d2de1  2bc6                 sub eax, esi
// 008d2de3  5e                   pop esi
// 008d2de4  5b                   pop ebx
// 008d2de5  83c408               add esp, 8
// 008d2de8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Copy_backward_opt@PAVModelSorter@G3D@@PAV12@@std@@YAPAVModelSorter@G3D@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
