// roc 2008-06 0040ae60  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ae60
//
// 0040ae60  6aff                 push -1
// 0040ae62  68880d7c00           push 0x7c0d88
// 0040ae67  64a100000000         mov eax, dword ptr fs:[0]
// 0040ae6d  50                   push eax
// 0040ae6e  64892500000000       mov dword ptr fs:[0], esp
// 0040ae75  83ec08               sub esp, 8
// 0040ae78  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040ae7c  56                   push esi
// 0040ae7d  57                   push edi
// 0040ae7e  8bf1                 mov esi, ecx
// 0040ae80  89742408             mov dword ptr [esp + 8], esi
// 0040ae84  50                   push eax
// 0040ae85  51                   push ecx
// 0040ae86  8bc4                 mov eax, esp
// 0040ae88  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0040ae90  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0040ae98  89642414             mov dword ptr [esp + 0x14], esp
// 0040ae9c  c70000000000         mov dword ptr [eax], 0
// 0040aea2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0040aea6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0040aeaa  51                   push ecx
// 0040aeab  52                   push edx
// 0040aeac  c644242801           mov byte ptr [esp + 0x28], 1
// 0040aeb1  e83affffff           call 0x40adf0
// 0040aeb6  50                   push eax
// 0040aeb7  8bce                 mov ecx, esi
// 0040aeb9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0040aebe  e8cdf3ffff           call 0x40a290
// 0040aec3  6a18                 push 0x18
// 0040aec5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0040aeca  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 0040aed0  e84b5a2900           call 0x6a0920
// 0040aed5  83c404               add esp, 4
// 0040aed8  85c0                 test eax, eax
// 0040aeda  741e                 je 0x40aefa
// 0040aedc  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0040aee0  33c9                 xor ecx, ecx
// 0040aee2  33d2                 xor edx, edx
// 0040aee4  897808               mov dword ptr [eax + 8], edi
// 0040aee7  c700c8b88000         mov dword ptr [eax], 0x80b8c8
// 0040aeed  897004               mov dword ptr [eax + 4], esi
// 0040aef0  894810               mov dword ptr [eax + 0x10], ecx
// 0040aef3  895014               mov dword ptr [eax + 0x14], edx
// 0040aef6  8bf8                 mov edi, eax
// 0040aef8  eb02                 jmp 0x40aefc
// 0040aefa  33ff                 xor edi, edi
// 0040aefc  8b4618               mov eax, dword ptr [esi + 0x18]
// 0040aeff  3bf8                 cmp edi, eax
// 0040af01  740d                 je 0x40af10
// 0040af03  85c0                 test eax, eax
// 0040af05  7409                 je 0x40af10
// 0040af07  50                   push eax
// 0040af08  e86d572900           call 0x6a067a
// 0040af0d  83c404               add esp, 4
// 0040af10  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040af14  897e18               mov dword ptr [esi + 0x18], edi
// 0040af17  5f                   pop edi
// 0040af18  8bc6                 mov eax, esi
// 0040af1a  64890d00000000       mov dword ptr fs:[0], ecx
// 0040af21  5e                   pop esi
// 0040af22  83c414               add esp, 0x14
// 0040af25  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
