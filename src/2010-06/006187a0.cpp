// roc 2010-06 006187a0  unit: RBX::Reflection::Descriptor  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006187a0
//
// 006187a0  6aff                 push -1
// 006187a2  6818aa9900           push 0x99aa18
// 006187a7  64a100000000         mov eax, dword ptr fs:[0]
// 006187ad  50                   push eax
// 006187ae  64892500000000       mov dword ptr fs:[0], esp
// 006187b5  83ec10               sub esp, 0x10
// 006187b8  8b442420             mov eax, dword ptr [esp + 0x20]
// 006187bc  53                   push ebx
// 006187bd  56                   push esi
// 006187be  8bf1                 mov esi, ecx
// 006187c0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006187c4  89442408             mov dword ptr [esp + 8], eax
// 006187c8  8b442430             mov eax, dword ptr [esp + 0x30]
// 006187cc  8b10                 mov edx, dword ptr [eax]
// 006187ce  894c240c             mov dword ptr [esp + 0xc], ecx
// 006187d2  8b4804               mov ecx, dword ptr [eax + 4]
// 006187d5  57                   push edi
// 006187d6  89542414             mov dword ptr [esp + 0x14], edx
// 006187da  85c9                 test ecx, ecx
// 006187dc  7409                 je 0x6187e7
// 006187de  8b01                 mov eax, dword ptr [ecx]
// 006187e0  8b5008               mov edx, dword ptr [eax + 8]
// 006187e3  ffd2                 call edx
// 006187e5  eb02                 jmp 0x6187e9
// 006187e7  33c0                 xor eax, eax
// 006187e9  89442418             mov dword ptr [esp + 0x18], eax
// 006187ed  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006187f0  8b4f04               mov ecx, dword ptr [edi + 4]
// 006187f3  83c604               add esi, 4
// 006187f6  8d44240c             lea eax, [esp + 0xc]
// 006187fa  50                   push eax
// 006187fb  51                   push ecx
// 006187fc  57                   push edi
// 006187fd  8bce                 mov ecx, esi
// 006187ff  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00618807  e844e3e8ff           call 0x4a6b50
// 0061880c  6a01                 push 1
// 0061880e  8bce                 mov ecx, esi
// 00618810  8bd8                 mov ebx, eax
// 00618812  e899cce8ff           call 0x4a54b0
// 00618817  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061881b  895f04               mov dword ptr [edi + 4], ebx
// 0061881e  8b4304               mov eax, dword ptr [ebx + 4]
// 00618821  5f                   pop edi
// 00618822  5e                   pop esi
// 00618823  8918                 mov dword ptr [eax], ebx
// 00618825  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0061882d  5b                   pop ebx
// 0061882e  85c9                 test ecx, ecx
// 00618830  7408                 je 0x61883a
// 00618832  8b11                 mov edx, dword ptr [ecx]
// 00618834  8b02                 mov eax, dword ptr [edx]
// 00618836  6a01                 push 1
// 00618838  ffd0                 call eax
// 0061883a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061883e  64890d00000000       mov dword ptr fs:[0], ecx
// 00618845  83c41c               add esp, 0x1c
// 00618848  c20c00               ret 0xc
// library rbxgs/reflection\type.cpp (function ?addArgument@SignatureDescriptor@Reflection@RBX@@QAEXABVName@3@ABVType@23@ABVValue@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
