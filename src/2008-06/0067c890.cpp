// roc 2008-06 0067c890  unit: Ogre::RbxEntity  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067c890
//
// 0067c890  55                   push ebp
// 0067c891  8bec                 mov ebp, esp
// 0067c893  6aff                 push -1
// 0067c895  68a1d77d00           push 0x7dd7a1
// 0067c89a  64a100000000         mov eax, dword ptr fs:[0]
// 0067c8a0  50                   push eax
// 0067c8a1  64892500000000       mov dword ptr fs:[0], esp
// 0067c8a8  51                   push ecx
// 0067c8a9  53                   push ebx
// 0067c8aa  56                   push esi
// 0067c8ab  8b7510               mov esi, dword ptr [ebp + 0x10]
// 0067c8ae  57                   push edi
// 0067c8af  8b7d08               mov edi, dword ptr [ebp + 8]
// 0067c8b2  33db                 xor ebx, ebx
// 0067c8b4  8965f0               mov dword ptr [ebp - 0x10], esp
// 0067c8b7  895dfc               mov dword ptr [ebp - 4], ebx
// 0067c8ba  8d9b00000000         lea ebx, [ebx]
// 0067c8c0  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 0067c8c3  742b                 je 0x67c8f0
// 0067c8c5  897510               mov dword ptr [ebp + 0x10], esi
// 0067c8c8  897508               mov dword ptr [ebp + 8], esi
// 0067c8cb  c645fc01             mov byte ptr [ebp - 4], 1
// 0067c8cf  3bf3                 cmp esi, ebx
// 0067c8d1  7409                 je 0x67c8dc
// 0067c8d3  57                   push edi
// 0067c8d4  8bce                 mov ecx, esi
// 0067c8d6  ff1554448000         call dword ptr [0x804454]
// 0067c8dc  83c610               add esi, 0x10
// 0067c8df  885dfc               mov byte ptr [ebp - 4], bl
// 0067c8e2  83c710               add edi, 0x10
// 0067c8e5  ebd9                 jmp 0x67c8c0
// library ogre-1.7.0/OgreRenderSystem.cpp (function ??$_Uninit_copy@PAVPlane@Ogre@@PAV12@V?$allocator@VPlane@Ogre@@@std@@@std@@YAPAVPlane@Ogre@@PAV12@00AAV?$allocator@VPlane@Ogre@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreRenderSystem.cpp
