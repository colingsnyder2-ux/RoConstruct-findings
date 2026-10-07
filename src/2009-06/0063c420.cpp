// roc 2009-06 0063c420  unit: RBX::ScriptContext  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063c420
//
// 0063c420  6aff                 push -1
// 0063c422  68c8a38600           push 0x86a3c8
// 0063c427  64a100000000         mov eax, dword ptr fs:[0]
// 0063c42d  50                   push eax
// 0063c42e  64892500000000       mov dword ptr fs:[0], esp
// 0063c435  83ec10               sub esp, 0x10
// 0063c438  8b442420             mov eax, dword ptr [esp + 0x20]
// 0063c43c  53                   push ebx
// 0063c43d  56                   push esi
// 0063c43e  8bf1                 mov esi, ecx
// 0063c440  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0063c444  89442408             mov dword ptr [esp + 8], eax
// 0063c448  8b442430             mov eax, dword ptr [esp + 0x30]
// 0063c44c  8b10                 mov edx, dword ptr [eax]
// 0063c44e  894c240c             mov dword ptr [esp + 0xc], ecx
// 0063c452  8b4804               mov ecx, dword ptr [eax + 4]
// 0063c455  57                   push edi
// 0063c456  89542414             mov dword ptr [esp + 0x14], edx
// 0063c45a  85c9                 test ecx, ecx
// 0063c45c  7409                 je 0x63c467
// 0063c45e  8b01                 mov eax, dword ptr [ecx]
// 0063c460  8b5008               mov edx, dword ptr [eax + 8]
// 0063c463  ffd2                 call edx
// 0063c465  eb02                 jmp 0x63c469
// 0063c467  33c0                 xor eax, eax
// 0063c469  89442418             mov dword ptr [esp + 0x18], eax
// 0063c46d  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0063c470  8b4f04               mov ecx, dword ptr [edi + 4]
// 0063c473  83c604               add esi, 4
// 0063c476  8d44240c             lea eax, [esp + 0xc]
// 0063c47a  50                   push eax
// 0063c47b  51                   push ecx
// 0063c47c  57                   push edi
// 0063c47d  8bce                 mov ecx, esi
// 0063c47f  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0063c487  e864a0e7ff           call 0x4b64f0
// 0063c48c  6a01                 push 1
// 0063c48e  8bce                 mov ecx, esi
// 0063c490  8bd8                 mov ebx, eax
// 0063c492  e8598ce7ff           call 0x4b50f0
// 0063c497  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0063c49b  895f04               mov dword ptr [edi + 4], ebx
// 0063c49e  8b4304               mov eax, dword ptr [ebx + 4]
// 0063c4a1  5f                   pop edi
// 0063c4a2  5e                   pop esi
// 0063c4a3  8918                 mov dword ptr [eax], ebx
// 0063c4a5  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0063c4ad  5b                   pop ebx
// 0063c4ae  85c9                 test ecx, ecx
// 0063c4b0  7408                 je 0x63c4ba
// 0063c4b2  8b11                 mov edx, dword ptr [ecx]
// 0063c4b4  8b02                 mov eax, dword ptr [edx]
// 0063c4b6  6a01                 push 1
// 0063c4b8  ffd0                 call eax
// 0063c4ba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063c4be  64890d00000000       mov dword ptr fs:[0], ecx
// 0063c4c5  83c41c               add esp, 0x1c
// 0063c4c8  c20c00               ret 0xc
// library rbxgs/reflection\type.cpp (function ?addArgument@SignatureDescriptor@Reflection@RBX@@QAEXABVName@3@ABVType@23@ABVValue@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
