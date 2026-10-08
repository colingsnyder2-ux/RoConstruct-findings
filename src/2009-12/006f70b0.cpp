// roc 2009-12 006f70b0  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f70b0
//
// 006f70b0  55                   push ebp
// 006f70b1  8bec                 mov ebp, esp
// 006f70b3  6aff                 push -1
// 006f70b5  6848be9400           push 0x94be48
// 006f70ba  64a100000000         mov eax, dword ptr fs:[0]
// 006f70c0  50                   push eax
// 006f70c1  64892500000000       mov dword ptr fs:[0], esp
// 006f70c8  83ec08               sub esp, 8
// 006f70cb  53                   push ebx
// 006f70cc  56                   push esi
// 006f70cd  57                   push edi
// 006f70ce  8965f0               mov dword ptr [ebp - 0x10], esp
// 006f70d1  8bf1                 mov esi, ecx
// 006f70d3  6a04                 push 4
// 006f70d5  8975ec               mov dword ptr [ebp - 0x14], esi
// 006f70d8  e883c70f00           call 0x7f3860
// 006f70dd  83c404               add esp, 4
// 006f70e0  85c0                 test eax, eax
// 006f70e2  7404                 je 0x6f70e8
// 006f70e4  8930                 mov dword ptr [eax], esi
// 006f70e6  eb02                 jmp 0x6f70ea
// 006f70e8  33c0                 xor eax, eax
// 006f70ea  8906                 mov dword ptr [esi], eax
// 006f70ec  8bce                 mov ecx, esi
// 006f70ee  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006f70f5  e8f6d5d4ff           call 0x4446f0
// 006f70fa  894618               mov dword ptr [esi + 0x18], eax
// 006f70fd  b101                 mov cl, 1
// 006f70ff  884815               mov byte ptr [eax + 0x15], cl
// 006f7102  8b4618               mov eax, dword ptr [esi + 0x18]
// 006f7105  894004               mov dword ptr [eax + 4], eax
// 006f7108  8b4618               mov eax, dword ptr [esi + 0x18]
// 006f710b  8900                 mov dword ptr [eax], eax
// 006f710d  8b4618               mov eax, dword ptr [esi + 0x18]
// 006f7110  894008               mov dword ptr [eax + 8], eax
// 006f7113  8b4508               mov eax, dword ptr [ebp + 8]
// 006f7116  884dfc               mov byte ptr [ebp - 4], cl
// 006f7119  50                   push eax
// 006f711a  8bce                 mov ecx, esi
// 006f711c  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 006f7123  e828f5ffff           call 0x6f6650
// 006f7128  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006f712b  5f                   pop edi
// 006f712c  8bc6                 mov eax, esi
// 006f712e  5e                   pop esi
// 006f712f  64890d00000000       mov dword ptr fs:[0], ecx
// 006f7136  5b                   pop ebx
// 006f7137  8be5                 mov esp, ebp
// 006f7139  5d                   pop ebp
// 006f713a  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??0?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
