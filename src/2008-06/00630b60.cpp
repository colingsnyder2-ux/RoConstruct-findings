// roc 2008-06 00630b60  unit: RBX::BodyMover  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630b60
//
// 00630b60  6aff                 push -1
// 00630b62  68880d7c00           push 0x7c0d88
// 00630b67  64a100000000         mov eax, dword ptr fs:[0]
// 00630b6d  50                   push eax
// 00630b6e  64892500000000       mov dword ptr fs:[0], esp
// 00630b75  83ec08               sub esp, 8
// 00630b78  8b442424             mov eax, dword ptr [esp + 0x24]
// 00630b7c  56                   push esi
// 00630b7d  57                   push edi
// 00630b7e  8bf1                 mov esi, ecx
// 00630b80  89742408             mov dword ptr [esp + 8], esi
// 00630b84  50                   push eax
// 00630b85  51                   push ecx
// 00630b86  8bc4                 mov eax, esp
// 00630b88  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00630b90  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00630b98  89642414             mov dword ptr [esp + 0x14], esp
// 00630b9c  c70000000000         mov dword ptr [eax], 0
// 00630ba2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00630ba6  8b542428             mov edx, dword ptr [esp + 0x28]
// 00630baa  51                   push ecx
// 00630bab  52                   push edx
// 00630bac  c644242801           mov byte ptr [esp + 0x28], 1
// 00630bb1  e8cafeffff           call 0x630a80
// 00630bb6  50                   push eax
// 00630bb7  8bce                 mov ecx, esi
// 00630bb9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00630bbe  e84d4ae1ff           call 0x445610
// 00630bc3  6a18                 push 0x18
// 00630bc5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00630bca  c70634418200         mov dword ptr [esi], 0x824134
// 00630bd0  e84bfd0600           call 0x6a0920
// 00630bd5  83c404               add esp, 4
// 00630bd8  85c0                 test eax, eax
// 00630bda  741e                 je 0x630bfa
// 00630bdc  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00630be0  33c9                 xor ecx, ecx
// 00630be2  33d2                 xor edx, edx
// 00630be4  897808               mov dword ptr [eax + 8], edi
// 00630be7  c70028738400         mov dword ptr [eax], 0x847328
// 00630bed  897004               mov dword ptr [eax + 4], esi
// 00630bf0  894810               mov dword ptr [eax + 0x10], ecx
// 00630bf3  895014               mov dword ptr [eax + 0x14], edx
// 00630bf6  8bf8                 mov edi, eax
// 00630bf8  eb02                 jmp 0x630bfc
// 00630bfa  33ff                 xor edi, edi
// 00630bfc  8b4618               mov eax, dword ptr [esi + 0x18]
// 00630bff  3bf8                 cmp edi, eax
// 00630c01  740d                 je 0x630c10
// 00630c03  85c0                 test eax, eax
// 00630c05  7409                 je 0x630c10
// 00630c07  50                   push eax
// 00630c08  e86dfa0600           call 0x6a067a
// 00630c0d  83c404               add esp, 4
// 00630c10  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00630c14  897e18               mov dword ptr [esi + 0x18], edi
// 00630c17  5f                   pop edi
// 00630c18  8bc6                 mov eax, esi
// 00630c1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00630c21  5e                   pop esi
// 00630c22  83c414               add esp, 0x14
// 00630c25  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
