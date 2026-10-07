// roc 2009-06 006773a0  unit: RBX::Assembly  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006773a0
//
// 006773a0  6aff                 push -1
// 006773a2  6853d18600           push 0x86d153
// 006773a7  64a100000000         mov eax, dword ptr fs:[0]
// 006773ad  50                   push eax
// 006773ae  64892500000000       mov dword ptr fs:[0], esp
// 006773b5  51                   push ecx
// 006773b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006773ba  56                   push esi
// 006773bb  57                   push edi
// 006773bc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006773c0  68b8468e00           push 0x8e46b8
// 006773c5  50                   push eax
// 006773c6  8bf1                 mov esi, ecx
// 006773c8  57                   push edi
// 006773c9  89742414             mov dword ptr [esp + 0x14], esi
// 006773cd  e83e0bf8ff           call 0x5f7f10
// 006773d2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006773d6  894e10               mov dword ptr [esi + 0x10], ecx
// 006773d9  8d4e14               lea ecx, [esi + 0x14]
// 006773dc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006773e4  e8e750fcff           call 0x63c4d0
// 006773e9  56                   push esi
// 006773ea  8d4f70               lea ecx, [edi + 0x70]
// 006773ed  c644241801           mov byte ptr [esp + 0x18], 1
// 006773f2  e8b91bf8ff           call 0x5f8fb0
// 006773f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006773fb  5f                   pop edi
// 006773fc  8bc6                 mov eax, esi
// 006773fe  5e                   pop esi
// 006773ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00677406  83c410               add esp, 0x10
// 00677409  c20c00               ret 0xc
// library rbxgs/reflection\reflection_function.cpp (function ??0FunctionDescriptor@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBDW4Security@012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
