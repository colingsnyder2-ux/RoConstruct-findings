// roc 2009-06 0040a5d0  unit: RBX::Reflection::ClassDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040a5d0
//
// 0040a5d0  6aff                 push -1
// 0040a5d2  6868eb8600           push 0x86eb68
// 0040a5d7  64a100000000         mov eax, dword ptr fs:[0]
// 0040a5dd  50                   push eax
// 0040a5de  64892500000000       mov dword ptr fs:[0], esp
// 0040a5e5  83ec08               sub esp, 8
// 0040a5e8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a5ec  56                   push esi
// 0040a5ed  57                   push edi
// 0040a5ee  8bf1                 mov esi, ecx
// 0040a5f0  89742408             mov dword ptr [esp + 8], esi
// 0040a5f4  50                   push eax
// 0040a5f5  51                   push ecx
// 0040a5f6  8bc4                 mov eax, esp
// 0040a5f8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0040a600  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0040a608  89642414             mov dword ptr [esp + 0x14], esp
// 0040a60c  c70000000000         mov dword ptr [eax], 0
// 0040a612  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0040a616  8b542428             mov edx, dword ptr [esp + 0x28]
// 0040a61a  51                   push ecx
// 0040a61b  52                   push edx
// 0040a61c  c644242801           mov byte ptr [esp + 0x28], 1
// 0040a621  e83affffff           call 0x40a560
// 0040a626  50                   push eax
// 0040a627  8bce                 mov ecx, esi
// 0040a629  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0040a62e  e80df1ffff           call 0x409740
// 0040a633  6a00                 push 0
// 0040a635  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0040a63a  e8f3e33000           call 0x718a32
// 0040a63f  6a18                 push 0x18
// 0040a641  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 0040a647  e8ece33000           call 0x718a38
// 0040a64c  83c408               add esp, 8
// 0040a64f  85c0                 test eax, eax
// 0040a651  741e                 je 0x40a671
// 0040a653  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0040a657  33c9                 xor ecx, ecx
// 0040a659  33d2                 xor edx, edx
// 0040a65b  897808               mov dword ptr [eax + 8], edi
// 0040a65e  c70038d28a00         mov dword ptr [eax], 0x8ad238
// 0040a664  897004               mov dword ptr [eax + 4], esi
// 0040a667  894810               mov dword ptr [eax + 0x10], ecx
// 0040a66a  895014               mov dword ptr [eax + 0x14], edx
// 0040a66d  8bf8                 mov edi, eax
// 0040a66f  eb02                 jmp 0x40a673
// 0040a671  33ff                 xor edi, edi
// 0040a673  8b4618               mov eax, dword ptr [esi + 0x18]
// 0040a676  3bf8                 cmp edi, eax
// 0040a678  7409                 je 0x40a683
// 0040a67a  50                   push eax
// 0040a67b  e8b2e33000           call 0x718a32
// 0040a680  83c404               add esp, 4
// 0040a683  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040a687  897e18               mov dword ptr [esi + 0x18], edi
// 0040a68a  5f                   pop edi
// 0040a68b  8bc6                 mov eax, esi
// 0040a68d  64890d00000000       mov dword ptr fs:[0], ecx
// 0040a694  5e                   pop esi
// 0040a695  83c414               add esp, 0x14
// 0040a698  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
