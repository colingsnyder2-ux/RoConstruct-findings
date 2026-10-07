// roc 2009-06 0048e6d0  unit: Ogre::RbxTextureCompositorSceneManager  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048e6d0
//
// 0048e6d0  83ec08               sub esp, 8
// 0048e6d3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0048e6d7  53                   push ebx
// 0048e6d8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0048e6dc  56                   push esi
// 0048e6dd  8b742418             mov esi, dword ptr [esp + 0x18]
// 0048e6e1  57                   push edi
// 0048e6e2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0048e6e6  32c0                 xor al, al
// 0048e6e8  88442410             mov byte ptr [esp + 0x10], al
// 0048e6ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048e6f0  8844240c             mov byte ptr [esp + 0xc], al
// 0048e6f4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048e6f8  50                   push eax
// 0048e6f9  51                   push ecx
// 0048e6fa  52                   push edx
// 0048e6fb  57                   push edi
// 0048e6fc  56                   push esi
// 0048e6fd  53                   push ebx
// 0048e6fe  e89dedffff           call 0x48d4a0
// 0048e703  2bf3                 sub esi, ebx
// 0048e705  83c418               add esp, 0x18
// 0048e708  c1fe06               sar esi, 6
// 0048e70b  c1e606               shl esi, 6
// 0048e70e  8bc7                 mov eax, edi
// 0048e710  5f                   pop edi
// 0048e711  2bc6                 sub eax, esi
// 0048e713  5e                   pop esi
// 0048e714  5b                   pop ebx
// 0048e715  83c408               add esp, 8
// 0048e718  c3                   ret 
// library ogre-1.7.0/OgreTangentSpaceCalc.cpp (function ??$_Copy_backward_opt@PAUVertexInfo@TangentSpaceCalc@Ogre@@PAU123@@std@@YAPAUVertexInfo@TangentSpaceCalc@Ogre@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTangentSpaceCalc.cpp
