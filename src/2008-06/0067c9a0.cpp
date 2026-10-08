// roc 2008-06 0067c9a0  unit: Ogre::RbxEntity  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067c9a0
//
// 0067c9a0  55                   push ebp
// 0067c9a1  8bec                 mov ebp, esp
// 0067c9a3  6aff                 push -1
// 0067c9a5  68c1d77d00           push 0x7dd7c1
// 0067c9aa  64a100000000         mov eax, dword ptr fs:[0]
// 0067c9b0  50                   push eax
// 0067c9b1  64892500000000       mov dword ptr fs:[0], esp
// 0067c9b8  51                   push ecx
// 0067c9b9  53                   push ebx
// 0067c9ba  56                   push esi
// 0067c9bb  8b7508               mov esi, dword ptr [ebp + 8]
// 0067c9be  57                   push edi
// 0067c9bf  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0067c9c2  33db                 xor ebx, ebx
// 0067c9c4  8965f0               mov dword ptr [ebp - 0x10], esp
// 0067c9c7  895dfc               mov dword ptr [ebp - 4], ebx
// 0067c9ca  8d9b00000000         lea ebx, [ebx]
// 0067c9d0  3bfb                 cmp edi, ebx
// 0067c9d2  762c                 jbe 0x67ca00
// 0067c9d4  897508               mov dword ptr [ebp + 8], esi
// 0067c9d7  89750c               mov dword ptr [ebp + 0xc], esi
// 0067c9da  c645fc01             mov byte ptr [ebp - 4], 1
// 0067c9de  3bf3                 cmp esi, ebx
// 0067c9e0  740c                 je 0x67c9ee
// 0067c9e2  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0067c9e5  50                   push eax
// 0067c9e6  8bce                 mov ecx, esi
// 0067c9e8  ff1554448000         call dword ptr [0x804454]
// 0067c9ee  4f                   dec edi
// 0067c9ef  885dfc               mov byte ptr [ebp - 4], bl
// 0067c9f2  83c610               add esi, 0x10
// 0067c9f5  ebd9                 jmp 0x67c9d0
// library ogre-1.7.0/OgreRenderSystem.cpp (function ??$_Uninit_fill_n@PAVPlane@Ogre@@IV12@V?$allocator@VPlane@Ogre@@@std@@@std@@YAXPAVPlane@Ogre@@IABV12@AAV?$allocator@VPlane@Ogre@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreRenderSystem.cpp
