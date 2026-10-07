// roc 2009-06 00486700  unit: Ogre::RbxMeshPartAdapter  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00486700
//
// 00486700  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00486704  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00486708  56                   push esi
// 00486709  8b742408             mov esi, dword ptr [esp + 8]
// 0048670d  8bc1                 mov eax, ecx
// 0048670f  2bc6                 sub eax, esi
// 00486711  c1f803               sar eax, 3
// 00486714  03c0                 add eax, eax
// 00486716  03c0                 add eax, eax
// 00486718  03c0                 add eax, eax
// 0048671a  57                   push edi
// 0048671b  8bf8                 mov edi, eax
// 0048671d  8bc2                 mov eax, edx
// 0048671f  2bc7                 sub eax, edi
// 00486721  3bf1                 cmp esi, ecx
// 00486723  7416                 je 0x48673b
// 00486725  2bd1                 sub edx, ecx
// 00486727  d941f8               fld dword ptr [ecx - 8]
// 0048672a  83e908               sub ecx, 8
// 0048672d  d91c0a               fstp dword ptr [edx + ecx]
// 00486730  d94104               fld dword ptr [ecx + 4]
// 00486733  d95c0a04             fstp dword ptr [edx + ecx + 4]
// 00486737  3bce                 cmp ecx, esi
// 00486739  75ec                 jne 0x486727
// 0048673b  5f                   pop edi
// 0048673c  5e                   pop esi
// 0048673d  c3                   ret 
// library ogre-1.7.0/OgreShadowCameraSetupPlaneOptimal.cpp (function ??$_Copy_backward_opt@PAVVector2@Ogre@@PAV12@@std@@YAPAVVector2@Ogre@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreShadowCameraSetupPlaneOptimal.cpp
