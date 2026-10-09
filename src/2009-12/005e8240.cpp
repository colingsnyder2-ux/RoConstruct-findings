// roc 2009-12 005e8240  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e8240
//
// 005e8240  6aff                 push -1
// 005e8242  68bee99300           push 0x93e9be
// 005e8247  64a100000000         mov eax, dword ptr fs:[0]
// 005e824d  50                   push eax
// 005e824e  64892500000000       mov dword ptr fs:[0], esp
// 005e8255  51                   push ecx
// 005e8256  56                   push esi
// 005e8257  8bf1                 mov esi, ecx
// 005e8259  57                   push edi
// 005e825a  89742408             mov dword ptr [esp + 8], esi
// 005e825e  8b4610               mov eax, dword ptr [esi + 0x10]
// 005e8261  8b3d08b29800         mov edi, dword ptr [0x98b208]
// 005e8267  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005e826f  85c0                 test eax, eax
// 005e8271  7428                 je 0x5e829b
// 005e8273  83c004               add eax, 4
// 005e8276  50                   push eax
// 005e8277  ffd7                 call edi
// 005e8279  85c0                 test eax, eax
// 005e827b  7517                 jne 0x5e8294
// 005e827d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005e8280  e89b2de6ff           call 0x44b020
// 005e8285  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005e8288  85c9                 test ecx, ecx
// 005e828a  7408                 je 0x5e8294
// 005e828c  8b01                 mov eax, dword ptr [ecx]
// 005e828e  8b10                 mov edx, dword ptr [eax]
// 005e8290  6a01                 push 1
// 005e8292  ffd2                 call edx
// 005e8294  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005e829b  6820cc5c00           push 0x5ccc20
// 005e82a0  6a02                 push 2
// 005e82a2  6a04                 push 4
// 005e82a4  8d4608               lea eax, [esi + 8]
// 005e82a7  50                   push eax
// 005e82a8  c644242400           mov byte ptr [esp + 0x24], 0
// 005e82ad  e8f2c62000           call 0x7f49a4
// 005e82b2  8b06                 mov eax, dword ptr [esi]
// 005e82b4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e82bc  85c0                 test eax, eax
// 005e82be  7425                 je 0x5e82e5
// 005e82c0  83c004               add eax, 4
// 005e82c3  50                   push eax
// 005e82c4  ffd7                 call edi
// 005e82c6  85c0                 test eax, eax
// 005e82c8  7515                 jne 0x5e82df
// 005e82ca  8b0e                 mov ecx, dword ptr [esi]
// 005e82cc  e84f2de6ff           call 0x44b020
// 005e82d1  8b0e                 mov ecx, dword ptr [esi]
// 005e82d3  85c9                 test ecx, ecx
// 005e82d5  7408                 je 0x5e82df
// 005e82d7  8b11                 mov edx, dword ptr [ecx]
// 005e82d9  8b02                 mov eax, dword ptr [edx]
// 005e82db  6a01                 push 1
// 005e82dd  ffd0                 call eax
// 005e82df  c70600000000         mov dword ptr [esi], 0
// 005e82e5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e82e9  5f                   pop edi
// 005e82ea  5e                   pop esi
// 005e82eb  64890d00000000       mov dword ptr fs:[0], ecx
// 005e82f2  83c410               add esp, 0x10
// 005e82f5  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??1ToneMap@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
