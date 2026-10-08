// roc 2012-06 004e5180  unit: Ogre::RbxMaterialAdapter  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004e5180
//
// 004e5180  55                   push ebp
// 004e5181  8bec                 mov ebp, esp
// 004e5183  6aff                 push -1
// 004e5185  68f184aa00           push 0xaa84f1
// 004e518a  64a100000000         mov eax, dword ptr fs:[0]
// 004e5190  50                   push eax
// 004e5191  64892500000000       mov dword ptr fs:[0], esp
// 004e5198  83ec0c               sub esp, 0xc
// 004e519b  53                   push ebx
// 004e519c  56                   push esi
// 004e519d  8b7508               mov esi, dword ptr [ebp + 8]
// 004e51a0  57                   push edi
// 004e51a1  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004e51a4  33db                 xor ebx, ebx
// 004e51a6  8965f0               mov dword ptr [ebp - 0x10], esp
// 004e51a9  8975ec               mov dword ptr [ebp - 0x14], esi
// 004e51ac  895dfc               mov dword ptr [ebp - 4], ebx
// 004e51af  90                   nop 
// 004e51b0  3bfb                 cmp edi, ebx
// 004e51b2  7646                 jbe 0x4e51fa
// 004e51b4  89750c               mov dword ptr [ebp + 0xc], esi
// 004e51b7  8975e8               mov dword ptr [ebp - 0x18], esi
// 004e51ba  c645fc01             mov byte ptr [ebp - 4], 1
// 004e51be  3bf3                 cmp esi, ebx
// 004e51c0  740b                 je 0x4e51cd
// 004e51c2  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004e51c5  50                   push eax
// 004e51c6  8bce                 mov ecx, esi
// 004e51c8  e8938dffff           call 0x4ddf60
// 004e51cd  4f                   dec edi
// 004e51ce  83c654               add esi, 0x54
// 004e51d1  885dfc               mov byte ptr [ebp - 4], bl
// 004e51d4  897508               mov dword ptr [ebp + 8], esi
// 004e51d7  ebd7                 jmp 0x4e51b0
// library ogre-1.7.0/OgreMesh.cpp (function ??$_Uninit_fill_n@PAUMeshLodUsage@Ogre@@IU12@V?$allocator@UMeshLodUsage@Ogre@@@std@@@std@@YAXPAUMeshLodUsage@Ogre@@IABU12@AAV?$allocator@UMeshLodUsage@Ogre@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMesh.cpp
