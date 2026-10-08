// from server: 100% by auto
// roc 2009-06 00579bf0  unit: G3D::LineSegment  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579bf0
//
// 00579bf0  6aff                 push -1
// 00579bf2  68fa758600           push 0x8675fa
// 00579bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00579bfd  50                   push eax
// 00579bfe  64892500000000       mov dword ptr fs:[0], esp
// 00579c05  83ec08               sub esp, 8
// 00579c08  53                   push ebx
// 00579c09  56                   push esi
// 00579c0a  33db                 xor ebx, ebx
// 00579c0c  57                   push edi
// 00579c0d  895c2410             mov dword ptr [esp + 0x10], ebx
// 00579c11  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00579c15  8bf1                 mov esi, ecx
// 00579c17  8bcf                 mov ecx, edi
// 00579c19  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00579c1d  ff15c0e48900         call dword ptr [0x89e4c0]
// 00579c23  8d44240f             lea eax, [esp + 0xf]
// 00579c27  83c628               add esi, 0x28
// 00579c2a  50                   push eax
// 00579c2b  8bce                 mov ecx, esi
// 00579c2d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00579c31  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00579c39  885c2413             mov byte ptr [esp + 0x13], bl
// 00579c3d  e8eefdffff           call 0x579a30
// 00579c42  8b06                 mov eax, dword ptr [esi]
// 00579c44  50                   push eax
// 00579c45  8bcf                 mov ecx, edi
// 00579c47  ff15a8e48900         call dword ptr [0x89e4a8]
// 00579c4d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00579c50  49                   dec ecx
// 00579c51  53                   push ebx
// 00579c52  51                   push ecx
// 00579c53  8bce                 mov ecx, esi
// 00579c55  e8d6fcffff           call 0x579930
// 00579c5a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00579c5e  8bc7                 mov eax, edi
// 00579c60  5f                   pop edi
// 00579c61  5e                   pop esi
// 00579c62  5b                   pop ebx
// 00579c63  64890d00000000       mov dword ptr fs:[0], ecx
// 00579c6a  83c414               add esp, 0x14
// 00579c6d  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?commitString@TextOutput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
