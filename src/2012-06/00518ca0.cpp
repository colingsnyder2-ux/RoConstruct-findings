// roc 2012-06 00518ca0  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00518ca0
//
// 00518ca0  56                   push esi
// 00518ca1  8bf1                 mov esi, ecx
// 00518ca3  8b4618               mov eax, dword ptr [esi + 0x18]
// 00518ca6  57                   push edi
// 00518ca7  33ff                 xor edi, edi
// 00518ca9  3bc7                 cmp eax, edi
// 00518cab  7409                 je 0x518cb6
// 00518cad  50                   push eax
// 00518cae  e861944600           call 0x982114
// 00518cb3  83c404               add esp, 4
// 00518cb6  897e18               mov dword ptr [esi + 0x18], edi
// 00518cb9  897e1c               mov dword ptr [esi + 0x1c], edi
// 00518cbc  897e20               mov dword ptr [esi + 0x20], edi
// 00518cbf  8b4608               mov eax, dword ptr [esi + 8]
// 00518cc2  3bc7                 cmp eax, edi
// 00518cc4  7409                 je 0x518ccf
// 00518cc6  50                   push eax
// 00518cc7  e848944600           call 0x982114
// 00518ccc  83c404               add esp, 4
// 00518ccf  897e08               mov dword ptr [esi + 8], edi
// 00518cd2  897e0c               mov dword ptr [esi + 0xc], edi
// 00518cd5  897e10               mov dword ptr [esi + 0x10], edi
// 00518cd8  5f                   pop edi
// 00518cd9  5e                   pop esi
// 00518cda  c3                   ret 
// library ogre-1.7.0/OgreRotationSpline.cpp (function ??1RotationalSpline@Ogre@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreRotationSpline.cpp
