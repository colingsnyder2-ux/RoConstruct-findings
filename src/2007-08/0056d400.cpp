// roc 2007-08 0056d400  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d400
//
// 0056d400  6aff                 push -1
// 0056d402  6868497500           push 0x754968
// 0056d407  64a100000000         mov eax, dword ptr fs:[0]
// 0056d40d  50                   push eax
// 0056d40e  64892500000000       mov dword ptr fs:[0], esp
// 0056d415  83ec10               sub esp, 0x10
// 0056d418  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056d41c  53                   push ebx
// 0056d41d  56                   push esi
// 0056d41e  8bf1                 mov esi, ecx
// 0056d420  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0056d424  89442408             mov dword ptr [esp + 8], eax
// 0056d428  8b442430             mov eax, dword ptr [esp + 0x30]
// 0056d42c  8b10                 mov edx, dword ptr [eax]
// 0056d42e  894c240c             mov dword ptr [esp + 0xc], ecx
// 0056d432  8b4804               mov ecx, dword ptr [eax + 4]
// 0056d435  85c9                 test ecx, ecx
// 0056d437  57                   push edi
// 0056d438  89542414             mov dword ptr [esp + 0x14], edx
// 0056d43c  7409                 je 0x56d447
// 0056d43e  8b01                 mov eax, dword ptr [ecx]
// 0056d440  8b5008               mov edx, dword ptr [eax + 8]
// 0056d443  ffd2                 call edx
// 0056d445  eb02                 jmp 0x56d449
// 0056d447  33c0                 xor eax, eax
// 0056d449  89442418             mov dword ptr [esp + 0x18], eax
// 0056d44d  8b7e08               mov edi, dword ptr [esi + 8]
// 0056d450  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056d453  83c604               add esi, 4
// 0056d456  8d44240c             lea eax, [esp + 0xc]
// 0056d45a  50                   push eax
// 0056d45b  51                   push ecx
// 0056d45c  57                   push edi
// 0056d45d  8bce                 mov ecx, esi
// 0056d45f  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0056d467  e8d47deaff           call 0x415240
// 0056d46c  6a01                 push 1
// 0056d46e  8bce                 mov ecx, esi
// 0056d470  8bd8                 mov ebx, eax
// 0056d472  e8f971eaff           call 0x414670
// 0056d477  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056d47b  85c9                 test ecx, ecx
// 0056d47d  895f04               mov dword ptr [edi + 4], ebx
// 0056d480  8b4304               mov eax, dword ptr [ebx + 4]
// 0056d483  5f                   pop edi
// 0056d484  5e                   pop esi
// 0056d485  8918                 mov dword ptr [eax], ebx
// 0056d487  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0056d48f  5b                   pop ebx
// 0056d490  7408                 je 0x56d49a
// 0056d492  8b11                 mov edx, dword ptr [ecx]
// 0056d494  8b02                 mov eax, dword ptr [edx]
// 0056d496  6a01                 push 1
// 0056d498  ffd0                 call eax
// 0056d49a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056d49e  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d4a5  83c41c               add esp, 0x1c
// 0056d4a8  c20c00               ret 0xc
// library rbxgs/reflection\type.cpp (function ?addArgument@SignatureDescriptor@Reflection@RBX@@QAEXABVName@3@ABVType@23@ABVValue@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
