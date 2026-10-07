// roc 2008-06 00594b40  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594b40
//
// 00594b40  6aff                 push -1
// 00594b42  68c81f7d00           push 0x7d1fc8
// 00594b47  64a100000000         mov eax, dword ptr fs:[0]
// 00594b4d  50                   push eax
// 00594b4e  64892500000000       mov dword ptr fs:[0], esp
// 00594b55  83ec10               sub esp, 0x10
// 00594b58  8b442420             mov eax, dword ptr [esp + 0x20]
// 00594b5c  53                   push ebx
// 00594b5d  56                   push esi
// 00594b5e  8bf1                 mov esi, ecx
// 00594b60  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00594b64  89442408             mov dword ptr [esp + 8], eax
// 00594b68  8b442430             mov eax, dword ptr [esp + 0x30]
// 00594b6c  8b10                 mov edx, dword ptr [eax]
// 00594b6e  894c240c             mov dword ptr [esp + 0xc], ecx
// 00594b72  8b4804               mov ecx, dword ptr [eax + 4]
// 00594b75  57                   push edi
// 00594b76  89542414             mov dword ptr [esp + 0x14], edx
// 00594b7a  85c9                 test ecx, ecx
// 00594b7c  7409                 je 0x594b87
// 00594b7e  8b01                 mov eax, dword ptr [ecx]
// 00594b80  8b5008               mov edx, dword ptr [eax + 8]
// 00594b83  ffd2                 call edx
// 00594b85  eb02                 jmp 0x594b89
// 00594b87  33c0                 xor eax, eax
// 00594b89  89442418             mov dword ptr [esp + 0x18], eax
// 00594b8d  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00594b90  8b4f04               mov ecx, dword ptr [edi + 4]
// 00594b93  83c604               add esi, 4
// 00594b96  8d44240c             lea eax, [esp + 0xc]
// 00594b9a  50                   push eax
// 00594b9b  51                   push ecx
// 00594b9c  57                   push edi
// 00594b9d  8bce                 mov ecx, esi
// 00594b9f  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00594ba7  e85433e8ff           call 0x417f00
// 00594bac  6a01                 push 1
// 00594bae  8bce                 mov ecx, esi
// 00594bb0  8bd8                 mov ebx, eax
// 00594bb2  e809e10e00           call 0x682cc0
// 00594bb7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00594bbb  895f04               mov dword ptr [edi + 4], ebx
// 00594bbe  8b4304               mov eax, dword ptr [ebx + 4]
// 00594bc1  5f                   pop edi
// 00594bc2  5e                   pop esi
// 00594bc3  8918                 mov dword ptr [eax], ebx
// 00594bc5  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00594bcd  5b                   pop ebx
// 00594bce  85c9                 test ecx, ecx
// 00594bd0  7408                 je 0x594bda
// 00594bd2  8b11                 mov edx, dword ptr [ecx]
// 00594bd4  8b02                 mov eax, dword ptr [edx]
// 00594bd6  6a01                 push 1
// 00594bd8  ffd0                 call eax
// 00594bda  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00594bde  64890d00000000       mov dword ptr fs:[0], ecx
// 00594be5  83c41c               add esp, 0x1c
// 00594be8  c20c00               ret 0xc
// library rbxgs/reflection\type.cpp (function ?addArgument@SignatureDescriptor@Reflection@RBX@@QAEXABVName@3@ABVType@23@ABVValue@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
