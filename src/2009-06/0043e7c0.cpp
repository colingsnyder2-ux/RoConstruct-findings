// roc 2009-06 0043e7c0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043e7c0
//
// 0043e7c0  6aff                 push -1
// 0043e7c2  6868eb8600           push 0x86eb68
// 0043e7c7  64a100000000         mov eax, dword ptr fs:[0]
// 0043e7cd  50                   push eax
// 0043e7ce  64892500000000       mov dword ptr fs:[0], esp
// 0043e7d5  83ec08               sub esp, 8
// 0043e7d8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0043e7dc  56                   push esi
// 0043e7dd  57                   push edi
// 0043e7de  8bf1                 mov esi, ecx
// 0043e7e0  89742408             mov dword ptr [esp + 8], esi
// 0043e7e4  50                   push eax
// 0043e7e5  51                   push ecx
// 0043e7e6  8bc4                 mov eax, esp
// 0043e7e8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0043e7f0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0043e7f8  89642414             mov dword ptr [esp + 0x14], esp
// 0043e7fc  c70000000000         mov dword ptr [eax], 0
// 0043e802  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0043e806  8b542428             mov edx, dword ptr [esp + 0x28]
// 0043e80a  51                   push ecx
// 0043e80b  52                   push edx
// 0043e80c  c644242801           mov byte ptr [esp + 0x28], 1
// 0043e811  e85ac7fcff           call 0x40af70
// 0043e816  50                   push eax
// 0043e817  8bce                 mov ecx, esi
// 0043e819  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0043e81e  e84df4ffff           call 0x43dc70
// 0043e823  6a00                 push 0
// 0043e825  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0043e82a  e803a22d00           call 0x718a32
// 0043e82f  6a18                 push 0x18
// 0043e831  c706085f8b00         mov dword ptr [esi], 0x8b5f08
// 0043e837  e8fca12d00           call 0x718a38
// 0043e83c  83c408               add esp, 8
// 0043e83f  85c0                 test eax, eax
// 0043e841  741e                 je 0x43e861
// 0043e843  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0043e847  33c9                 xor ecx, ecx
// 0043e849  33d2                 xor edx, edx
// 0043e84b  897808               mov dword ptr [eax + 8], edi
// 0043e84e  c700785e8b00         mov dword ptr [eax], 0x8b5e78
// 0043e854  897004               mov dword ptr [eax + 4], esi
// 0043e857  894810               mov dword ptr [eax + 0x10], ecx
// 0043e85a  895014               mov dword ptr [eax + 0x14], edx
// 0043e85d  8bf8                 mov edi, eax
// 0043e85f  eb02                 jmp 0x43e863
// 0043e861  33ff                 xor edi, edi
// 0043e863  8b4618               mov eax, dword ptr [esi + 0x18]
// 0043e866  3bf8                 cmp edi, eax
// 0043e868  7409                 je 0x43e873
// 0043e86a  50                   push eax
// 0043e86b  e8c2a12d00           call 0x718a32
// 0043e870  83c404               add esp, 4
// 0043e873  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0043e877  897e18               mov dword ptr [esi + 0x18], edi
// 0043e87a  5f                   pop edi
// 0043e87b  8bc6                 mov eax, esi
// 0043e87d  64890d00000000       mov dword ptr fs:[0], ecx
// 0043e884  5e                   pop esi
// 0043e885  83c414               add esp, 0x14
// 0043e888  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
