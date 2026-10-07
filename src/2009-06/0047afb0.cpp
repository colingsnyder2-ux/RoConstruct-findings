// roc 2009-06 0047afb0  unit: Ogre::VRootManager::?$sp_counted_impl_p  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0047afb0
//
// 0047afb0  53                   push ebx
// 0047afb1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0047afb5  56                   push esi
// 0047afb6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047afba  57                   push edi
// 0047afbb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0047afbf  8bcf                 mov ecx, edi
// 0047afc1  2bce                 sub ecx, esi
// 0047afc3  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0047afc8  f7e9                 imul ecx
// 0047afca  d1fa                 sar edx, 1
// 0047afcc  8bc2                 mov eax, edx
// 0047afce  c1e81f               shr eax, 0x1f
// 0047afd1  03c2                 add eax, edx
// 0047afd3  8d0440               lea eax, [eax + eax*2]
// 0047afd6  8d0483               lea eax, [ebx + eax*4]
// 0047afd9  8bd6                 mov edx, esi
// 0047afdb  3bf7                 cmp esi, edi
// 0047afdd  7421                 je 0x47b000
// 0047afdf  8d4b08               lea ecx, [ebx + 8]
// 0047afe2  2bf3                 sub esi, ebx
// 0047afe4  d902                 fld dword ptr [edx]
// 0047afe6  83c20c               add edx, 0xc
// 0047afe9  d959f8               fstp dword ptr [ecx - 8]
// 0047afec  83c10c               add ecx, 0xc
// 0047afef  d942f8               fld dword ptr [edx - 8]
// 0047aff2  d959f0               fstp dword ptr [ecx - 0x10]
// 0047aff5  d9440ef4             fld dword ptr [esi + ecx - 0xc]
// 0047aff9  d959f4               fstp dword ptr [ecx - 0xc]
// 0047affc  3bd7                 cmp edx, edi
// 0047affe  75e4                 jne 0x47afe4
// 0047b000  5f                   pop edi
// 0047b001  5e                   pop esi
// 0047b002  5b                   pop ebx
// 0047b003  c3                   ret 
// library ogre-1.7.0/OgreMesh.cpp (function ??$_Copy_opt@PAVVector3@Ogre@@PAV12@@std@@YAPAVVector3@Ogre@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMesh.cpp
