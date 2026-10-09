// roc 2009-12 00702890  unit: RBX::Assembly  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00702890
//
// 00702890  6aff                 push -1
// 00702892  68a3c99400           push 0x94c9a3
// 00702897  64a100000000         mov eax, dword ptr fs:[0]
// 0070289d  50                   push eax
// 0070289e  64892500000000       mov dword ptr fs:[0], esp
// 007028a5  51                   push ecx
// 007028a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 007028aa  56                   push esi
// 007028ab  57                   push edi
// 007028ac  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007028b0  6868df9d00           push 0x9ddf68
// 007028b5  50                   push eax
// 007028b6  8bf1                 mov esi, ecx
// 007028b8  57                   push edi
// 007028b9  89742414             mov dword ptr [esp + 0x14], esi
// 007028bd  e89ef1f5ff           call 0x661a60
// 007028c2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007028c6  894e10               mov dword ptr [esi + 0x10], ecx
// 007028c9  8d4e14               lea ecx, [esi + 0x14]
// 007028cc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007028d4  e8777ffaff           call 0x6aa850
// 007028d9  56                   push esi
// 007028da  8d4f70               lea ecx, [edi + 0x70]
// 007028dd  c644241801           mov byte ptr [esp + 0x18], 1
// 007028e2  e8090af6ff           call 0x6632f0
// 007028e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007028eb  5f                   pop edi
// 007028ec  8bc6                 mov eax, esi
// 007028ee  5e                   pop esi
// 007028ef  64890d00000000       mov dword ptr fs:[0], ecx
// 007028f6  83c410               add esp, 0x10
// 007028f9  c20c00               ret 0xc
// library rbxgs/reflection\reflection_function.cpp (function ??0FunctionDescriptor@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBDW4Security@012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
