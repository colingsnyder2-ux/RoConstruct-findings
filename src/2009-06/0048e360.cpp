// roc 2009-06 0048e360  unit: Ogre::RbxTextureCompositorSceneManager  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048e360
//
// 0048e360  83ec08               sub esp, 8
// 0048e363  8b542414             mov edx, dword ptr [esp + 0x14]
// 0048e367  53                   push ebx
// 0048e368  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0048e36c  56                   push esi
// 0048e36d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048e371  57                   push edi
// 0048e372  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0048e376  32c0                 xor al, al
// 0048e378  88442410             mov byte ptr [esp + 0x10], al
// 0048e37c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048e380  8844240c             mov byte ptr [esp + 0xc], al
// 0048e384  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048e388  50                   push eax
// 0048e389  51                   push ecx
// 0048e38a  52                   push edx
// 0048e38b  56                   push esi
// 0048e38c  57                   push edi
// 0048e38d  53                   push ebx
// 0048e38e  e84df0ffff           call 0x48d3e0
// 0048e393  8bc7                 mov eax, edi
// 0048e395  2bc3                 sub eax, ebx
// 0048e397  83c418               add esp, 0x18
// 0048e39a  c1f806               sar eax, 6
// 0048e39d  c1e006               shl eax, 6
// 0048e3a0  5f                   pop edi
// 0048e3a1  03c6                 add eax, esi
// 0048e3a3  5e                   pop esi
// 0048e3a4  5b                   pop ebx
// 0048e3a5  83c408               add esp, 8
// 0048e3a8  c3                   ret 
// library ogre-1.7.0/OgreTangentSpaceCalc.cpp (function ??$_Copy_opt@PAUVertexInfo@TangentSpaceCalc@Ogre@@PAU123@@std@@YAPAUVertexInfo@TangentSpaceCalc@Ogre@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTangentSpaceCalc.cpp
