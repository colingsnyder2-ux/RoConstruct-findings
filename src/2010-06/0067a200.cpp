// roc 2010-06 0067a200  unit: RBX::PrismPoly  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067a200
//
// 0067a200  6aff                 push -1
// 0067a202  6823ff9900           push 0x99ff23
// 0067a207  64a100000000         mov eax, dword ptr fs:[0]
// 0067a20d  50                   push eax
// 0067a20e  64892500000000       mov dword ptr fs:[0], esp
// 0067a215  51                   push ecx
// 0067a216  8b442418             mov eax, dword ptr [esp + 0x18]
// 0067a21a  56                   push esi
// 0067a21b  57                   push edi
// 0067a21c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0067a220  6868d5a300           push 0xa3d568
// 0067a225  50                   push eax
// 0067a226  8bf1                 mov esi, ecx
// 0067a228  57                   push edi
// 0067a229  89742414             mov dword ptr [esp + 0x14], esi
// 0067a22d  e8aee8f4ff           call 0x5c8ae0
// 0067a232  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0067a236  894e10               mov dword ptr [esi + 0x10], ecx
// 0067a239  8d4e14               lea ecx, [esi + 0x14]
// 0067a23c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0067a244  e807e6f9ff           call 0x618850
// 0067a249  56                   push esi
// 0067a24a  8d4f70               lea ecx, [edi + 0x70]
// 0067a24d  c644241801           mov byte ptr [esp + 0x18], 1
// 0067a252  e8b9fdf4ff           call 0x5ca010
// 0067a257  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067a25b  5f                   pop edi
// 0067a25c  8bc6                 mov eax, esi
// 0067a25e  5e                   pop esi
// 0067a25f  64890d00000000       mov dword ptr fs:[0], ecx
// 0067a266  83c410               add esp, 0x10
// 0067a269  c20c00               ret 0xc
// library rbxgs/reflection\reflection_function.cpp (function ??0FunctionDescriptor@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBDW4Security@012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
