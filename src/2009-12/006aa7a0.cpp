// roc 2009-12 006aa7a0  unit: RBX::ScriptContext  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006aa7a0
//
// 006aa7a0  6aff                 push -1
// 006aa7a2  6868809400           push 0x948068
// 006aa7a7  64a100000000         mov eax, dword ptr fs:[0]
// 006aa7ad  50                   push eax
// 006aa7ae  64892500000000       mov dword ptr fs:[0], esp
// 006aa7b5  83ec10               sub esp, 0x10
// 006aa7b8  8b442420             mov eax, dword ptr [esp + 0x20]
// 006aa7bc  53                   push ebx
// 006aa7bd  56                   push esi
// 006aa7be  8bf1                 mov esi, ecx
// 006aa7c0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006aa7c4  89442408             mov dword ptr [esp + 8], eax
// 006aa7c8  8b442430             mov eax, dword ptr [esp + 0x30]
// 006aa7cc  8b10                 mov edx, dword ptr [eax]
// 006aa7ce  894c240c             mov dword ptr [esp + 0xc], ecx
// 006aa7d2  8b4804               mov ecx, dword ptr [eax + 4]
// 006aa7d5  57                   push edi
// 006aa7d6  89542414             mov dword ptr [esp + 0x14], edx
// 006aa7da  85c9                 test ecx, ecx
// 006aa7dc  7409                 je 0x6aa7e7
// 006aa7de  8b01                 mov eax, dword ptr [ecx]
// 006aa7e0  8b5008               mov edx, dword ptr [eax + 8]
// 006aa7e3  ffd2                 call edx
// 006aa7e5  eb02                 jmp 0x6aa7e9
// 006aa7e7  33c0                 xor eax, eax
// 006aa7e9  89442418             mov dword ptr [esp + 0x18], eax
// 006aa7ed  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006aa7f0  8b4f04               mov ecx, dword ptr [edi + 4]
// 006aa7f3  83c604               add esi, 4
// 006aa7f6  8d44240c             lea eax, [esp + 0xc]
// 006aa7fa  50                   push eax
// 006aa7fb  51                   push ecx
// 006aa7fc  57                   push edi
// 006aa7fd  8bce                 mov ecx, esi
// 006aa7ff  c744243000000000     mov dword ptr [esp + 0x30], 0
// 006aa807  e884e4e4ff           call 0x4f8c90
// 006aa80c  6a01                 push 1
// 006aa80e  8bce                 mov ecx, esi
// 006aa810  8bd8                 mov ebx, eax
// 006aa812  e8b9cbe4ff           call 0x4f73d0
// 006aa817  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006aa81b  895f04               mov dword ptr [edi + 4], ebx
// 006aa81e  8b4304               mov eax, dword ptr [ebx + 4]
// 006aa821  5f                   pop edi
// 006aa822  5e                   pop esi
// 006aa823  8918                 mov dword ptr [eax], ebx
// 006aa825  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006aa82d  5b                   pop ebx
// 006aa82e  85c9                 test ecx, ecx
// 006aa830  7408                 je 0x6aa83a
// 006aa832  8b11                 mov edx, dword ptr [ecx]
// 006aa834  8b02                 mov eax, dword ptr [edx]
// 006aa836  6a01                 push 1
// 006aa838  ffd0                 call eax
// 006aa83a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006aa83e  64890d00000000       mov dword ptr fs:[0], ecx
// 006aa845  83c41c               add esp, 0x1c
// 006aa848  c20c00               ret 0xc
// library rbxgs/reflection\type.cpp (function ?addArgument@SignatureDescriptor@Reflection@RBX@@QAEXABVName@3@ABVType@23@ABVValue@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
