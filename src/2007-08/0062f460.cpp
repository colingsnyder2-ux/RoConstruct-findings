// roc 2007-08 0062f460  unit: RBX::AdornG3D  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062f460
//
// 0062f460  55                   push ebp
// 0062f461  8bec                 mov ebp, esp
// 0062f463  6aff                 push -1
// 0062f465  6891d77500           push 0x75d791
// 0062f46a  64a100000000         mov eax, dword ptr fs:[0]
// 0062f470  50                   push eax
// 0062f471  64892500000000       mov dword ptr fs:[0], esp
// 0062f478  83ec24               sub esp, 0x24
// 0062f47b  53                   push ebx
// 0062f47c  56                   push esi
// 0062f47d  57                   push edi
// 0062f47e  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0062f481  8965f0               mov dword ptr [ebp - 0x10], esp
// 0062f484  83ec20               sub esp, 0x20
// 0062f487  33db                 xor ebx, ebx
// 0062f489  895dec               mov dword ptr [ebp - 0x14], ebx
// 0062f48c  8bf4                 mov esi, esp
// 0062f48e  8965ec               mov dword ptr [ebp - 0x14], esp
// 0062f491  57                   push edi
// 0062f492  8bce                 mov ecx, esi
// 0062f494  895dfc               mov dword ptr [ebp - 4], ebx
// 0062f497  ff159ce67700         call dword ptr [0x77e69c]
// 0062f49d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0062f4a0  89461c               mov dword ptr [esi + 0x1c], eax
// 0062f4a3  c645fc01             mov byte ptr [ebp - 4], 1
// 0062f4a7  e89492ddff           call 0x408740
// 0062f4ac  8d4dd0               lea ecx, [ebp - 0x30]
// 0062f4af  51                   push ecx
// 0062f4b0  8bc8                 mov ecx, eax
// 0062f4b2  885dfc               mov byte ptr [ebp - 4], bl
// 0062f4b5  e8e698f1ff           call 0x548da0
// 0062f4ba  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0062f4bd  8b11                 mov edx, dword ptr [ecx]
// 0062f4bf  8b7508               mov esi, dword ptr [ebp + 8]
// 0062f4c2  8b5204               mov edx, dword ptr [edx + 4]
// 0062f4c5  8d45d0               lea eax, [ebp - 0x30]
// 0062f4c8  50                   push eax
// 0062f4c9  56                   push esi
// 0062f4ca  c645fc02             mov byte ptr [ebp - 4], 2
// 0062f4ce  ffd2                 call edx
// 0062f4d0  8d4dd0               lea ecx, [ebp - 0x30]
// 0062f4d3  885dfc               mov byte ptr [ebp - 4], bl
// 0062f4d6  ff15ace67700         call dword ptr [0x77e6ac]
// 0062f4dc  8bc6                 mov eax, esi
// 0062f4de  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0062f4e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0062f4e8  5f                   pop edi
// 0062f4e9  5e                   pop esi
// 0062f4ea  5b                   pop ebx
// 0062f4eb  8be5                 mov esp, ebp
// 0062f4ed  5d                   pop ebp
// 0062f4ee  c3                   ret 
// library openrbx-client/Rendering\AppDraw\Textures.cpp (function ?getTextureProxy@Textures@RBX@@SA?AV?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@G3D@@PAVAdorn@2@ABVContentId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/AppDraw/Textures.cpp
