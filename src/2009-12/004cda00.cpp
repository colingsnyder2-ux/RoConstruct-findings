// roc 2009-12 004cda00  unit: G3D::PBVTextureFormat::?$Table  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cda00
//
// 004cda00  64a100000000         mov eax, dword ptr fs:[0]
// 004cda06  6aff                 push -1
// 004cda08  68b12f9300           push 0x932fb1
// 004cda0d  50                   push eax
// 004cda0e  64892500000000       mov dword ptr fs:[0], esp
// 004cda15  83ec20               sub esp, 0x20
// 004cda18  56                   push esi
// 004cda19  8bf1                 mov esi, ecx
// 004cda1b  8b4638               mov eax, dword ptr [esi + 0x38]
// 004cda1e  897024               mov dword ptr [eax + 0x24], esi
// 004cda21  833d28d0b70001       cmp dword ptr [0xb7d028], 1
// 004cda28  0f8481000000         je 0x4cdaaf
// 004cda2e  57                   push edi
// 004cda2f  689c5a9b00           push 0x9b5a9c
// 004cda34  8d4c2410             lea ecx, [esp + 0x10]
// 004cda38  ff15f4b69800         call dword ptr [0x98b6f4]
// 004cda3e  8d44240c             lea eax, [esp + 0xc]
// 004cda42  50                   push eax
// 004cda43  8d4c240c             lea ecx, [esp + 0xc]
// 004cda47  51                   push ecx
// 004cda48  8bce                 mov ecx, esi
// 004cda4a  c744243800000000     mov dword ptr [esp + 0x38], 0
// 004cda52  e8e9faffff           call 0x4cd540
// 004cda57  8d4c240c             lea ecx, [esp + 0xc]
// 004cda5b  c644243002           mov byte ptr [esp + 0x30], 2
// 004cda60  ff15e4b69800         call dword ptr [0x98b6e4]
// 004cda66  8b7c2408             mov edi, dword ptr [esp + 8]
// 004cda6a  ff4678               inc dword ptr [esi + 0x78]
// 004cda6d  ff4670               inc dword ptr [esi + 0x70]
// 004cda70  8bcf                 mov ecx, edi
// 004cda72  e809e20000           call 0x4dbc80
// 004cda77  8b7638               mov esi, dword ptr [esi + 0x38]
// 004cda7a  8d4e0c               lea ecx, [esi + 0xc]
// 004cda7d  57                   push edi
// 004cda7e  e8ede0f7ff           call 0x44bb70
// 004cda83  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 004cda8b  85ff                 test edi, edi
// 004cda8d  741f                 je 0x4cdaae
// 004cda8f  8d5704               lea edx, [edi + 4]
// 004cda92  52                   push edx
// 004cda93  ff1508b29800         call dword ptr [0x98b208]
// 004cda99  85c0                 test eax, eax
// 004cda9b  7511                 jne 0x4cdaae
// 004cda9d  8bcf                 mov ecx, edi
// 004cda9f  e87cd5f7ff           call 0x44b020
// 004cdaa4  8b07                 mov eax, dword ptr [edi]
// 004cdaa6  8b10                 mov edx, dword ptr [eax]
// 004cdaa8  6a01                 push 1
// 004cdaaa  8bcf                 mov ecx, edi
// 004cdaac  ffd2                 call edx
// 004cdaae  5f                   pop edi
// 004cdaaf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004cdab3  5e                   pop esi
// 004cdab4  64890d00000000       mov dword ptr fs:[0], ecx
// 004cdabb  83c42c               add esp, 0x2c
// 004cdabe  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setVARAreaMilestone@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
