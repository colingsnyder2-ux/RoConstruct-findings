// roc 2008-06 0067f1d0  unit: Ogre::RbxEntity  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067f1d0
//
// 0067f1d0  53                   push ebx
// 0067f1d1  56                   push esi
// 0067f1d2  8b742410             mov esi, dword ptr [esp + 0x10]
// 0067f1d6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0067f1da  57                   push edi
// 0067f1db  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0067f1df  8bce                 mov ecx, esi
// 0067f1e1  2bcf                 sub ecx, edi
// 0067f1e3  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0067f1e8  f7e9                 imul ecx
// 0067f1ea  d1fa                 sar edx, 1
// 0067f1ec  8bc2                 mov eax, edx
// 0067f1ee  c1e81f               shr eax, 0x1f
// 0067f1f1  03c2                 add eax, edx
// 0067f1f3  8d0440               lea eax, [eax + eax*2]
// 0067f1f6  03c0                 add eax, eax
// 0067f1f8  03c0                 add eax, eax
// 0067f1fa  8bc8                 mov ecx, eax
// 0067f1fc  8bc3                 mov eax, ebx
// 0067f1fe  2bc1                 sub eax, ecx
// 0067f200  8bd6                 mov edx, esi
// 0067f202  3bfe                 cmp edi, esi
// 0067f204  7425                 je 0x67f22b
// 0067f206  8d4b08               lea ecx, [ebx + 8]
// 0067f209  2bf3                 sub esi, ebx
// 0067f20b  eb03                 jmp 0x67f210
// 0067f20d  8d4900               lea ecx, [ecx]
// 0067f210  d942f4               fld dword ptr [edx - 0xc]
// 0067f213  83ea0c               sub edx, 0xc
// 0067f216  83e90c               sub ecx, 0xc
// 0067f219  d959f8               fstp dword ptr [ecx - 8]
// 0067f21c  d94204               fld dword ptr [edx + 4]
// 0067f21f  d959fc               fstp dword ptr [ecx - 4]
// 0067f222  d9040e               fld dword ptr [esi + ecx]
// 0067f225  d919                 fstp dword ptr [ecx]
// 0067f227  3bd7                 cmp edx, edi
// 0067f229  75e5                 jne 0x67f210
// 0067f22b  5f                   pop edi
// 0067f22c  5e                   pop esi
// 0067f22d  5b                   pop ebx
// 0067f22e  c3                   ret 
// library ogre-1.7.0/OgreMeshSerializerImpl.cpp (function ??$_Copy_backward_opt@PAVVector3@Ogre@@PAV12@@std@@YAPAVVector3@Ogre@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMeshSerializerImpl.cpp
