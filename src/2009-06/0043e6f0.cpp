// roc 2009-06 0043e6f0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043e6f0
//
// 0043e6f0  6aff                 push -1
// 0043e6f2  6868eb8600           push 0x86eb68
// 0043e6f7  64a100000000         mov eax, dword ptr fs:[0]
// 0043e6fd  50                   push eax
// 0043e6fe  64892500000000       mov dword ptr fs:[0], esp
// 0043e705  83ec08               sub esp, 8
// 0043e708  8b442424             mov eax, dword ptr [esp + 0x24]
// 0043e70c  56                   push esi
// 0043e70d  57                   push edi
// 0043e70e  8bf1                 mov esi, ecx
// 0043e710  89742408             mov dword ptr [esp + 8], esi
// 0043e714  50                   push eax
// 0043e715  51                   push ecx
// 0043e716  8bc4                 mov eax, esp
// 0043e718  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0043e720  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0043e728  89642414             mov dword ptr [esp + 0x14], esp
// 0043e72c  c70000000000         mov dword ptr [eax], 0
// 0043e732  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0043e736  8b542428             mov edx, dword ptr [esp + 0x28]
// 0043e73a  51                   push ecx
// 0043e73b  52                   push edx
// 0043e73c  c644242801           mov byte ptr [esp + 0x28], 1
// 0043e741  e82ac8fcff           call 0x40af70
// 0043e746  50                   push eax
// 0043e747  8bce                 mov ecx, esi
// 0043e749  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0043e74e  e8edaffcff           call 0x409740
// 0043e753  6a00                 push 0
// 0043e755  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0043e75a  e8d3a22d00           call 0x718a32
// 0043e75f  6a18                 push 0x18
// 0043e761  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 0043e767  e8cca22d00           call 0x718a38
// 0043e76c  83c408               add esp, 8
// 0043e76f  85c0                 test eax, eax
// 0043e771  741e                 je 0x43e791
// 0043e773  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0043e777  33c9                 xor ecx, ecx
// 0043e779  33d2                 xor edx, edx
// 0043e77b  897808               mov dword ptr [eax + 8], edi
// 0043e77e  c700645e8b00         mov dword ptr [eax], 0x8b5e64
// 0043e784  897004               mov dword ptr [eax + 4], esi
// 0043e787  894810               mov dword ptr [eax + 0x10], ecx
// 0043e78a  895014               mov dword ptr [eax + 0x14], edx
// 0043e78d  8bf8                 mov edi, eax
// 0043e78f  eb02                 jmp 0x43e793
// 0043e791  33ff                 xor edi, edi
// 0043e793  8b4618               mov eax, dword ptr [esi + 0x18]
// 0043e796  3bf8                 cmp edi, eax
// 0043e798  7409                 je 0x43e7a3
// 0043e79a  50                   push eax
// 0043e79b  e892a22d00           call 0x718a32
// 0043e7a0  83c404               add esp, 4
// 0043e7a3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0043e7a7  897e18               mov dword ptr [esi + 0x18], edi
// 0043e7aa  5f                   pop edi
// 0043e7ab  8bc6                 mov eax, esi
// 0043e7ad  64890d00000000       mov dword ptr fs:[0], ecx
// 0043e7b4  5e                   pop esi
// 0043e7b5  83c414               add esp, 0x14
// 0043e7b8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
