// roc 2009-06 00485e40  unit: Ogre::RbxMeshPartAdapter  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00485e40
//
// 00485e40  8b542408             mov edx, dword ptr [esp + 8]
// 00485e44  53                   push ebx
// 00485e45  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00485e49  57                   push edi
// 00485e4a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00485e4e  8bc2                 mov eax, edx
// 00485e50  2bc7                 sub eax, edi
// 00485e52  c1f804               sar eax, 4
// 00485e55  c1e004               shl eax, 4
// 00485e58  8bc8                 mov ecx, eax
// 00485e5a  8bc3                 mov eax, ebx
// 00485e5c  2bc1                 sub eax, ecx
// 00485e5e  3bfa                 cmp edi, edx
// 00485e60  7430                 je 0x485e92
// 00485e62  56                   push esi
// 00485e63  8bf2                 mov esi, edx
// 00485e65  8d4b08               lea ecx, [ebx + 8]
// 00485e68  2bf3                 sub esi, ebx
// 00485e6a  8d9b00000000         lea ebx, [ebx]
// 00485e70  d942f0               fld dword ptr [edx - 0x10]
// 00485e73  83ea10               sub edx, 0x10
// 00485e76  83e910               sub ecx, 0x10
// 00485e79  d959f8               fstp dword ptr [ecx - 8]
// 00485e7c  d94204               fld dword ptr [edx + 4]
// 00485e7f  d959fc               fstp dword ptr [ecx - 4]
// 00485e82  d9040e               fld dword ptr [esi + ecx]
// 00485e85  d919                 fstp dword ptr [ecx]
// 00485e87  d9420c               fld dword ptr [edx + 0xc]
// 00485e8a  d95904               fstp dword ptr [ecx + 4]
// 00485e8d  3bd7                 cmp edx, edi
// 00485e8f  75df                 jne 0x485e70
// 00485e91  5e                   pop esi
// 00485e92  5f                   pop edi
// 00485e93  5b                   pop ebx
// 00485e94  c3                   ret 
// library ogre-1.7.0/OgreEdgeListBuilder.cpp (function ??$_Copy_backward_opt@PAVVector4@Ogre@@PAV12@@std@@YAPAVVector4@Ogre@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreEdgeListBuilder.cpp
