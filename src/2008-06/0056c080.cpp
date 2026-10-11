// roc 2008-06 0056c080  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056c080
//
// 0056c080  6aff                 push -1
// 0056c082  68f3fb7c00           push 0x7cfbf3
// 0056c087  64a100000000         mov eax, dword ptr fs:[0]
// 0056c08d  50                   push eax
// 0056c08e  64892500000000       mov dword ptr fs:[0], esp
// 0056c095  83ec0c               sub esp, 0xc
// 0056c098  53                   push ebx
// 0056c099  55                   push ebp
// 0056c09a  56                   push esi
// 0056c09b  57                   push edi
// 0056c09c  8bf9                 mov edi, ecx
// 0056c09e  897c2410             mov dword ptr [esp + 0x10], edi
// 0056c0a2  c70748f68200         mov dword ptr [edi], 0x82f648
// 0056c0a8  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0056c0b0  e8dbfeffff           call 0x56bf90
// 0056c0b5  8b5810               mov ebx, dword ptr [eax + 0x10]
// 0056c0b8  39580c               cmp dword ptr [eax + 0xc], ebx
// 0056c0bb  7606                 jbe 0x56c0c3
// 0056c0bd  ff1590288000         call dword ptr [0x802890]
// 0056c0c3  e8c8feffff           call 0x56bf90
// 0056c0c8  8be8                 mov ebp, eax
// 0056c0ca  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0056c0cd  3b7510               cmp esi, dword ptr [ebp + 0x10]
// 0056c0d0  7606                 jbe 0x56c0d8
// 0056c0d2  ff1590288000         call dword ptr [0x802890]
// 0056c0d8  8b6d00               mov ebp, dword ptr [ebp]
// 0056c0db  89742418             mov dword ptr [esp + 0x18], esi
// 0056c0df  8bc6                 mov eax, esi
// 0056c0e1  3bf3                 cmp esi, ebx
// 0056c0e3  740b                 je 0x56c0f0
// 0056c0e5  3938                 cmp dword ptr [eax], edi
// 0056c0e7  7407                 je 0x56c0f0
// 0056c0e9  83c004               add eax, 4
// 0056c0ec  3bc3                 cmp eax, ebx
// 0056c0ee  75f5                 jne 0x56c0e5
// 0056c0f0  50                   push eax
// 0056c0f1  8d442418             lea eax, [esp + 0x18]
// 0056c0f5  55                   push ebp
// 0056c0f6  50                   push eax
// 0056c0f7  e894feffff           call 0x56bf90
// 0056c0fc  8bc8                 mov ecx, eax
// 0056c0fe  e82dd7eeff           call 0x459830
// 0056c103  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0056c106  33f6                 xor esi, esi
// 0056c108  3bc6                 cmp eax, esi
// 0056c10a  7409                 je 0x56c115
// 0056c10c  50                   push eax
// 0056c10d  e868451300           call 0x6a067a
// 0056c112  83c404               add esp, 4
// 0056c115  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0056c118  51                   push ecx
// 0056c119  89771c               mov dword ptr [edi + 0x1c], esi
// 0056c11c  897720               mov dword ptr [edi + 0x20], esi
// 0056c11f  897724               mov dword ptr [edi + 0x24], esi
// 0056c122  e853451300           call 0x6a067a
// 0056c127  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056c12b  83c404               add esp, 4
// 0056c12e  c70730b78000         mov dword ptr [edi], 0x80b730
// 0056c134  5f                   pop edi
// 0056c135  5e                   pop esi
// 0056c136  5d                   pop ebp
// 0056c137  5b                   pop ebx
// 0056c138  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c13f  83c418               add esp, 0x18
// 0056c142  c3                   ret 
// library openrbx-client/App\reflection\reflection_property.cpp (function ??1EnumDescriptor@Reflection@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_property.cpp
