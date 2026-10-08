// roc 2008-06 0067f170  unit: Ogre::RbxEntity  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067f170
//
// 0067f170  53                   push ebx
// 0067f171  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0067f175  56                   push esi
// 0067f176  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067f17a  57                   push edi
// 0067f17b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0067f17f  8bcf                 mov ecx, edi
// 0067f181  2bce                 sub ecx, esi
// 0067f183  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0067f188  f7e9                 imul ecx
// 0067f18a  d1fa                 sar edx, 1
// 0067f18c  8bc2                 mov eax, edx
// 0067f18e  c1e81f               shr eax, 0x1f
// 0067f191  03c2                 add eax, edx
// 0067f193  8d0440               lea eax, [eax + eax*2]
// 0067f196  8d0483               lea eax, [ebx + eax*4]
// 0067f199  8bd6                 mov edx, esi
// 0067f19b  3bf7                 cmp esi, edi
// 0067f19d  7421                 je 0x67f1c0
// 0067f19f  8d4b08               lea ecx, [ebx + 8]
// 0067f1a2  2bf3                 sub esi, ebx
// 0067f1a4  d902                 fld dword ptr [edx]
// 0067f1a6  83c20c               add edx, 0xc
// 0067f1a9  d959f8               fstp dword ptr [ecx - 8]
// 0067f1ac  83c10c               add ecx, 0xc
// 0067f1af  d942f8               fld dword ptr [edx - 8]
// 0067f1b2  d959f0               fstp dword ptr [ecx - 0x10]
// 0067f1b5  d9440ef4             fld dword ptr [esi + ecx - 0xc]
// 0067f1b9  d959f4               fstp dword ptr [ecx - 0xc]
// 0067f1bc  3bd7                 cmp edx, edi
// 0067f1be  75e4                 jne 0x67f1a4
// 0067f1c0  5f                   pop edi
// 0067f1c1  5e                   pop esi
// 0067f1c2  5b                   pop ebx
// 0067f1c3  c3                   ret 
// library ogre-1.7.0/OgreMesh.cpp (function ??$_Copy_opt@PAVVector3@Ogre@@PAV12@@std@@YAPAVVector3@Ogre@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMesh.cpp
