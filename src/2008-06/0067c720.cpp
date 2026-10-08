// roc 2008-06 0067c720  unit: Ogre::RbxEntity  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067c720
//
// 0067c720  8b542408             mov edx, dword ptr [esp + 8]
// 0067c724  53                   push ebx
// 0067c725  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0067c729  57                   push edi
// 0067c72a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0067c72e  8bc2                 mov eax, edx
// 0067c730  2bc7                 sub eax, edi
// 0067c732  c1f804               sar eax, 4
// 0067c735  c1e004               shl eax, 4
// 0067c738  8bc8                 mov ecx, eax
// 0067c73a  8bc3                 mov eax, ebx
// 0067c73c  2bc1                 sub eax, ecx
// 0067c73e  3bfa                 cmp edi, edx
// 0067c740  7430                 je 0x67c772
// 0067c742  56                   push esi
// 0067c743  8bf2                 mov esi, edx
// 0067c745  8d4b08               lea ecx, [ebx + 8]
// 0067c748  2bf3                 sub esi, ebx
// 0067c74a  8d9b00000000         lea ebx, [ebx]
// 0067c750  d942f0               fld dword ptr [edx - 0x10]
// 0067c753  83ea10               sub edx, 0x10
// 0067c756  83e910               sub ecx, 0x10
// 0067c759  d959f8               fstp dword ptr [ecx - 8]
// 0067c75c  d94204               fld dword ptr [edx + 4]
// 0067c75f  d959fc               fstp dword ptr [ecx - 4]
// 0067c762  d9040e               fld dword ptr [esi + ecx]
// 0067c765  d919                 fstp dword ptr [ecx]
// 0067c767  d9420c               fld dword ptr [edx + 0xc]
// 0067c76a  d95904               fstp dword ptr [ecx + 4]
// 0067c76d  3bd7                 cmp edx, edi
// 0067c76f  75df                 jne 0x67c750
// 0067c771  5e                   pop esi
// 0067c772  5f                   pop edi
// 0067c773  5b                   pop ebx
// 0067c774  c3                   ret 
// library ogre-1.7.0/OgreEdgeListBuilder.cpp (function ??$_Copy_backward_opt@PAVVector4@Ogre@@PAV12@@std@@YAPAVVector4@Ogre@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreEdgeListBuilder.cpp
