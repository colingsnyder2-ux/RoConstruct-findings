// roc 2008-06 0049f960  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$TSignalDesc::TSignalInstance  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f960
//
// 0049f960  6aff                 push -1
// 0049f962  68e89f7d00           push 0x7d9fe8
// 0049f967  64a100000000         mov eax, dword ptr fs:[0]
// 0049f96d  50                   push eax
// 0049f96e  64892500000000       mov dword ptr fs:[0], esp
// 0049f975  51                   push ecx
// 0049f976  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049f97a  56                   push esi
// 0049f97b  8bf1                 mov esi, ecx
// 0049f97d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049f981  89742404             mov dword ptr [esp + 4], esi
// 0049f985  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 0049f98b  894604               mov dword ptr [esi + 4], eax
// 0049f98e  894e08               mov dword ptr [esi + 8], ecx
// 0049f991  8d542418             lea edx, [esp + 0x18]
// 0049f995  52                   push edx
// 0049f996  8d44241c             lea eax, [esp + 0x1c]
// 0049f99a  50                   push eax
// 0049f99b  8d4e10               lea ecx, [esi + 0x10]
// 0049f99e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049f9a6  e855a2ffff           call 0x499c00
// 0049f9ab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049f9af  c706a02f8200         mov dword ptr [esi], 0x822fa0
// 0049f9b5  8bc6                 mov eax, esi
// 0049f9b7  5e                   pop esi
// 0049f9b8  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f9bf  83c410               add esp, 0x10
// 0049f9c2  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
