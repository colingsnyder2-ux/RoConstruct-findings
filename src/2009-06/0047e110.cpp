// roc 2009-06 0047e110  unit: Ogre::RbxPart  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0047e110
//
// 0047e110  56                   push esi
// 0047e111  8bf1                 mov esi, ecx
// 0047e113  8b4628               mov eax, dword ptr [esi + 0x28]
// 0047e116  57                   push edi
// 0047e117  33ff                 xor edi, edi
// 0047e119  3bc7                 cmp eax, edi
// 0047e11b  7409                 je 0x47e126
// 0047e11d  50                   push eax
// 0047e11e  e80fa92900           call 0x718a32
// 0047e123  83c404               add esp, 4
// 0047e126  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0047e129  50                   push eax
// 0047e12a  897e28               mov dword ptr [esi + 0x28], edi
// 0047e12d  897e2c               mov dword ptr [esi + 0x2c], edi
// 0047e130  897e30               mov dword ptr [esi + 0x30], edi
// 0047e133  e8faa82900           call 0x718a32
// 0047e138  8b4610               mov eax, dword ptr [esi + 0x10]
// 0047e13b  83c404               add esp, 4
// 0047e13e  3bc7                 cmp eax, edi
// 0047e140  7409                 je 0x47e14b
// 0047e142  50                   push eax
// 0047e143  e8eaa82900           call 0x718a32
// 0047e148  83c404               add esp, 4
// 0047e14b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047e14e  51                   push ecx
// 0047e14f  897e10               mov dword ptr [esi + 0x10], edi
// 0047e152  897e14               mov dword ptr [esi + 0x14], edi
// 0047e155  897e18               mov dword ptr [esi + 0x18], edi
// 0047e158  e8d5a82900           call 0x718a32
// 0047e15d  83c404               add esp, 4
// 0047e160  5f                   pop edi
// 0047e161  5e                   pop esi
// 0047e162  c3                   ret 
// library ogre-1.7.0/OgreRotationSpline.cpp (function ??1RotationalSpline@Ogre@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreRotationSpline.cpp
