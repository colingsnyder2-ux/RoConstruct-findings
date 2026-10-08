// roc 2009-12 005fa180  unit: G3D::LineSegment  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa180
//
// 005fa180  6aff                 push -1
// 005fa182  687a8e9200           push 0x928e7a
// 005fa187  64a100000000         mov eax, dword ptr fs:[0]
// 005fa18d  50                   push eax
// 005fa18e  64892500000000       mov dword ptr fs:[0], esp
// 005fa195  83ec08               sub esp, 8
// 005fa198  53                   push ebx
// 005fa199  56                   push esi
// 005fa19a  33db                 xor ebx, ebx
// 005fa19c  57                   push edi
// 005fa19d  895c2410             mov dword ptr [esp + 0x10], ebx
// 005fa1a1  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005fa1a5  8bf1                 mov esi, ecx
// 005fa1a7  8bcf                 mov ecx, edi
// 005fa1a9  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005fa1ad  ff15e8b69800         call dword ptr [0x98b6e8]
// 005fa1b3  8d44240f             lea eax, [esp + 0xf]
// 005fa1b7  83c628               add esi, 0x28
// 005fa1ba  50                   push eax
// 005fa1bb  8bce                 mov ecx, esi
// 005fa1bd  895c2420             mov dword ptr [esp + 0x20], ebx
// 005fa1c1  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005fa1c9  885c2413             mov byte ptr [esp + 0x13], bl
// 005fa1cd  e8eefdffff           call 0x5f9fc0
// 005fa1d2  8b06                 mov eax, dword ptr [esi]
// 005fa1d4  50                   push eax
// 005fa1d5  8bcf                 mov ecx, edi
// 005fa1d7  ff1500b79800         call dword ptr [0x98b700]
// 005fa1dd  8b4e04               mov ecx, dword ptr [esi + 4]
// 005fa1e0  49                   dec ecx
// 005fa1e1  53                   push ebx
// 005fa1e2  51                   push ecx
// 005fa1e3  8bce                 mov ecx, esi
// 005fa1e5  e8e6fcffff           call 0x5f9ed0
// 005fa1ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fa1ee  8bc7                 mov eax, edi
// 005fa1f0  5f                   pop edi
// 005fa1f1  5e                   pop esi
// 005fa1f2  5b                   pop ebx
// 005fa1f3  64890d00000000       mov dword ptr fs:[0], ecx
// 005fa1fa  83c414               add esp, 0x14
// 005fa1fd  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?commitString@TextOutput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
