// roc 2012-06 008a93c0  unit: RBX::Block  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a93c0
//
// 008a93c0  6aff                 push -1
// 008a93c2  68032ead00           push 0xad2e03
// 008a93c7  64a100000000         mov eax, dword ptr fs:[0]
// 008a93cd  50                   push eax
// 008a93ce  64892500000000       mov dword ptr fs:[0], esp
// 008a93d5  51                   push ecx
// 008a93d6  8bc1                 mov eax, ecx
// 008a93d8  33c9                 xor ecx, ecx
// 008a93da  894804               mov dword ptr [eax + 4], ecx
// 008a93dd  894808               mov dword ptr [eax + 8], ecx
// 008a93e0  89480c               mov dword ptr [eax + 0xc], ecx
// 008a93e3  894814               mov dword ptr [eax + 0x14], ecx
// 008a93e6  894818               mov dword ptr [eax + 0x18], ecx
// 008a93e9  89481c               mov dword ptr [eax + 0x1c], ecx
// 008a93ec  894824               mov dword ptr [eax + 0x24], ecx
// 008a93ef  894828               mov dword ptr [eax + 0x28], ecx
// 008a93f2  89482c               mov dword ptr [eax + 0x2c], ecx
// 008a93f5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008a93f9  64890d00000000       mov dword ptr fs:[0], ecx
// 008a9400  83c410               add esp, 0x10
// 008a9403  c3                   ret 
// library ogre-1.7.0/OgreProgressiveMesh.cpp (function ??0PMWorkingData@ProgressiveMesh@Ogre@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreProgressiveMesh.cpp
