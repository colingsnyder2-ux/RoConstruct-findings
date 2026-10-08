// from server: 100% by auto
// roc 2010-06 00557d20  unit: seg_00550000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557d20
//
// 00557d20  6aff                 push -1
// 00557d22  688af49900           push 0x99f48a
// 00557d27  64a100000000         mov eax, dword ptr fs:[0]
// 00557d2d  50                   push eax
// 00557d2e  64892500000000       mov dword ptr fs:[0], esp
// 00557d35  83ec08               sub esp, 8
// 00557d38  53                   push ebx
// 00557d39  56                   push esi
// 00557d3a  33db                 xor ebx, ebx
// 00557d3c  57                   push edi
// 00557d3d  895c2410             mov dword ptr [esp + 0x10], ebx
// 00557d41  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00557d45  8bf1                 mov esi, ecx
// 00557d47  8bcf                 mov ecx, edi
// 00557d49  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00557d4d  ff1504a49e00         call dword ptr [0x9ea404]
// 00557d53  8d44240f             lea eax, [esp + 0xf]
// 00557d57  83c628               add esi, 0x28
// 00557d5a  50                   push eax
// 00557d5b  8bce                 mov ecx, esi
// 00557d5d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00557d61  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00557d69  885c2413             mov byte ptr [esp + 0x13], bl
// 00557d6d  e8eefdffff           call 0x557b60
// 00557d72  8b06                 mov eax, dword ptr [esi]
// 00557d74  50                   push eax
// 00557d75  8bcf                 mov ecx, edi
// 00557d77  ff151ca49e00         call dword ptr [0x9ea41c]
// 00557d7d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00557d80  49                   dec ecx
// 00557d81  53                   push ebx
// 00557d82  51                   push ecx
// 00557d83  8bce                 mov ecx, esi
// 00557d85  e8e6fcffff           call 0x557a70
// 00557d8a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00557d8e  8bc7                 mov eax, edi
// 00557d90  5f                   pop edi
// 00557d91  5e                   pop esi
// 00557d92  5b                   pop ebx
// 00557d93  64890d00000000       mov dword ptr fs:[0], ecx
// 00557d9a  83c414               add esp, 0x14
// 00557d9d  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?commitString@TextOutput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
