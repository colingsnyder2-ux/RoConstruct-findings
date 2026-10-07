// roc 2009-06 00485de0  unit: Ogre::RbxMeshPartAdapter  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00485de0
//
// 00485de0  53                   push ebx
// 00485de1  56                   push esi
// 00485de2  8b742410             mov esi, dword ptr [esp + 0x10]
// 00485de6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00485dea  57                   push edi
// 00485deb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00485def  8bce                 mov ecx, esi
// 00485df1  2bcf                 sub ecx, edi
// 00485df3  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00485df8  f7e9                 imul ecx
// 00485dfa  d1fa                 sar edx, 1
// 00485dfc  8bc2                 mov eax, edx
// 00485dfe  c1e81f               shr eax, 0x1f
// 00485e01  03c2                 add eax, edx
// 00485e03  8d0440               lea eax, [eax + eax*2]
// 00485e06  03c0                 add eax, eax
// 00485e08  03c0                 add eax, eax
// 00485e0a  8bc8                 mov ecx, eax
// 00485e0c  8bc3                 mov eax, ebx
// 00485e0e  2bc1                 sub eax, ecx
// 00485e10  8bd6                 mov edx, esi
// 00485e12  3bfe                 cmp edi, esi
// 00485e14  7425                 je 0x485e3b
// 00485e16  8d4b08               lea ecx, [ebx + 8]
// 00485e19  2bf3                 sub esi, ebx
// 00485e1b  eb03                 jmp 0x485e20
// 00485e1d  8d4900               lea ecx, [ecx]
// 00485e20  d942f4               fld dword ptr [edx - 0xc]
// 00485e23  83ea0c               sub edx, 0xc
// 00485e26  83e90c               sub ecx, 0xc
// 00485e29  d959f8               fstp dword ptr [ecx - 8]
// 00485e2c  d94204               fld dword ptr [edx + 4]
// 00485e2f  d959fc               fstp dword ptr [ecx - 4]
// 00485e32  d9040e               fld dword ptr [esi + ecx]
// 00485e35  d919                 fstp dword ptr [ecx]
// 00485e37  3bd7                 cmp edx, edi
// 00485e39  75e5                 jne 0x485e20
// 00485e3b  5f                   pop edi
// 00485e3c  5e                   pop esi
// 00485e3d  5b                   pop ebx
// 00485e3e  c3                   ret 
// library ogre-1.7.0/OgreMeshSerializerImpl.cpp (function ??$_Copy_backward_opt@PAVVector3@Ogre@@PAV12@@std@@YAPAVVector3@Ogre@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMeshSerializerImpl.cpp
