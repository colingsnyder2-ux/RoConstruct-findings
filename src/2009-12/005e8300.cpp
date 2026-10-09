// roc 2009-12 005e8300  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e8300
//
// 005e8300  6aff                 push -1
// 005e8302  68e3e99300           push 0x93e9e3
// 005e8307  64a100000000         mov eax, dword ptr fs:[0]
// 005e830d  50                   push eax
// 005e830e  64892500000000       mov dword ptr fs:[0], esp
// 005e8315  51                   push ecx
// 005e8316  56                   push esi
// 005e8317  8bf1                 mov esi, ecx
// 005e8319  57                   push edi
// 005e831a  89742408             mov dword ptr [esp + 8], esi
// 005e831e  8b4608               mov eax, dword ptr [esi + 8]
// 005e8321  8b3d08b29800         mov edi, dword ptr [0x98b208]
// 005e8327  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005e832f  85c0                 test eax, eax
// 005e8331  7428                 je 0x5e835b
// 005e8333  83c004               add eax, 4
// 005e8336  50                   push eax
// 005e8337  ffd7                 call edi
// 005e8339  85c0                 test eax, eax
// 005e833b  7517                 jne 0x5e8354
// 005e833d  8b4e08               mov ecx, dword ptr [esi + 8]
// 005e8340  e8db2ce6ff           call 0x44b020
// 005e8345  8b4e08               mov ecx, dword ptr [esi + 8]
// 005e8348  85c9                 test ecx, ecx
// 005e834a  7408                 je 0x5e8354
// 005e834c  8b01                 mov eax, dword ptr [ecx]
// 005e834e  8b10                 mov edx, dword ptr [eax]
// 005e8350  6a01                 push 1
// 005e8352  ffd2                 call edx
// 005e8354  c7460800000000       mov dword ptr [esi + 8], 0
// 005e835b  8b4604               mov eax, dword ptr [esi + 4]
// 005e835e  c644241400           mov byte ptr [esp + 0x14], 0
// 005e8363  85c0                 test eax, eax
// 005e8365  7428                 je 0x5e838f
// 005e8367  83c004               add eax, 4
// 005e836a  50                   push eax
// 005e836b  ffd7                 call edi
// 005e836d  85c0                 test eax, eax
// 005e836f  7517                 jne 0x5e8388
// 005e8371  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e8374  e8a72ce6ff           call 0x44b020
// 005e8379  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e837c  85c9                 test ecx, ecx
// 005e837e  7408                 je 0x5e8388
// 005e8380  8b01                 mov eax, dword ptr [ecx]
// 005e8382  8b10                 mov edx, dword ptr [eax]
// 005e8384  6a01                 push 1
// 005e8386  ffd2                 call edx
// 005e8388  c7460400000000       mov dword ptr [esi + 4], 0
// 005e838f  8b06                 mov eax, dword ptr [esi]
// 005e8391  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e8399  85c0                 test eax, eax
// 005e839b  7425                 je 0x5e83c2
// 005e839d  83c004               add eax, 4
// 005e83a0  50                   push eax
// 005e83a1  ffd7                 call edi
// 005e83a3  85c0                 test eax, eax
// 005e83a5  7515                 jne 0x5e83bc
// 005e83a7  8b0e                 mov ecx, dword ptr [esi]
// 005e83a9  e8722ce6ff           call 0x44b020
// 005e83ae  8b0e                 mov ecx, dword ptr [esi]
// 005e83b0  85c9                 test ecx, ecx
// 005e83b2  7408                 je 0x5e83bc
// 005e83b4  8b01                 mov eax, dword ptr [ecx]
// 005e83b6  8b10                 mov edx, dword ptr [eax]
// 005e83b8  6a01                 push 1
// 005e83ba  ffd2                 call edx
// 005e83bc  c70600000000         mov dword ptr [esi], 0
// 005e83c2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e83c6  5f                   pop edi
// 005e83c7  5e                   pop esi
// 005e83c8  64890d00000000       mov dword ptr fs:[0], ecx
// 005e83cf  83c410               add esp, 0x10
// 005e83d2  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??1DepthBlur@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
