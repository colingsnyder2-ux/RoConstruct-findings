// roc 2008-06 0041b3f0  unit: Marshaller  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b3f0
//
// 0041b3f0  6aff                 push -1
// 0041b3f2  68e89f7d00           push 0x7d9fe8
// 0041b3f7  64a100000000         mov eax, dword ptr fs:[0]
// 0041b3fd  50                   push eax
// 0041b3fe  64892500000000       mov dword ptr fs:[0], esp
// 0041b405  51                   push ecx
// 0041b406  8b442414             mov eax, dword ptr [esp + 0x14]
// 0041b40a  56                   push esi
// 0041b40b  8bf1                 mov esi, ecx
// 0041b40d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041b411  89742404             mov dword ptr [esp + 4], esi
// 0041b415  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 0041b41b  894604               mov dword ptr [esi + 4], eax
// 0041b41e  894e08               mov dword ptr [esi + 8], ecx
// 0041b421  8d542418             lea edx, [esp + 0x18]
// 0041b425  52                   push edx
// 0041b426  8d44241c             lea eax, [esp + 0x1c]
// 0041b42a  50                   push eax
// 0041b42b  8d4e10               lea ecx, [esi + 0x10]
// 0041b42e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041b436  e8c5e70700           call 0x499c00
// 0041b43b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041b43f  c70640ed8000         mov dword ptr [esi], 0x80ed40
// 0041b445  8bc6                 mov eax, esi
// 0041b447  5e                   pop esi
// 0041b448  64890d00000000       mov dword ptr fs:[0], ecx
// 0041b44f  83c410               add esp, 0x10
// 0041b452  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
