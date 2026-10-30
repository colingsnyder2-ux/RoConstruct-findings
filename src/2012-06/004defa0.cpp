// roc 2012-06 004defa0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004defa0
//
// 004defa0  55                   push ebp
// 004defa1  8bec                 mov ebp, esp
// 004defa3  6aff                 push -1
// 004defa5  68617caa00           push 0xaa7c61
// 004defaa  64a100000000         mov eax, dword ptr fs:[0]
// 004defb0  50                   push eax
// 004defb1  64892500000000       mov dword ptr fs:[0], esp
// 004defb8  83ec0c               sub esp, 0xc
// 004defbb  53                   push ebx
// 004defbc  56                   push esi
// 004defbd  8b7510               mov esi, dword ptr [ebp + 0x10]
// 004defc0  57                   push edi
// 004defc1  8b7d08               mov edi, dword ptr [ebp + 8]
// 004defc4  33db                 xor ebx, ebx
// 004defc6  8965f0               mov dword ptr [ebp - 0x10], esp
// 004defc9  8975ec               mov dword ptr [ebp - 0x14], esi
// 004defcc  895dfc               mov dword ptr [ebp - 4], ebx
// 004defcf  90                   nop 
// 004defd0  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 004defd3  7445                 je 0x4df01a
// 004defd5  897508               mov dword ptr [ebp + 8], esi
// 004defd8  8975e8               mov dword ptr [ebp - 0x18], esi
// 004defdb  c645fc01             mov byte ptr [ebp - 4], 1
// 004defdf  3bf3                 cmp esi, ebx
// 004defe1  7408                 je 0x4defeb
// 004defe3  57                   push edi
// 004defe4  8bce                 mov ecx, esi
// 004defe6  e875efffff           call 0x4ddf60
// 004defeb  83c654               add esi, 0x54
// 004defee  885dfc               mov byte ptr [ebp - 4], bl
// 004deff1  897510               mov dword ptr [ebp + 0x10], esi
// 004deff4  83c754               add edi, 0x54
// 004deff7  ebd7                 jmp 0x4defd0
// library ogre-1.7.0/OgreMesh.cpp (function ??$_Uninit_copy@PAUMeshLodUsage@Ogre@@PAU12@V?$allocator@UMeshLodUsage@Ogre@@@std@@@std@@YAPAUMeshLodUsage@Ogre@@PAU12@00AAV?$allocator@UMeshLodUsage@Ogre@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMesh.cpp
