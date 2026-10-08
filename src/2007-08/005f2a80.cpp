// roc 2007-08 005f2a80  unit: RBX::$$A6AXVBrickColor::V?$function::?$holder  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2a80
//
// 005f2a80  6aff                 push -1
// 005f2a82  6878837500           push 0x758378
// 005f2a87  64a100000000         mov eax, dword ptr fs:[0]
// 005f2a8d  50                   push eax
// 005f2a8e  64892500000000       mov dword ptr fs:[0], esp
// 005f2a95  51                   push ecx
// 005f2a96  8b442414             mov eax, dword ptr [esp + 0x14]
// 005f2a9a  56                   push esi
// 005f2a9b  8bf1                 mov esi, ecx
// 005f2a9d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f2aa1  89742404             mov dword ptr [esp + 4], esi
// 005f2aa5  c706c4737800         mov dword ptr [esi], 0x7873c4
// 005f2aab  894604               mov dword ptr [esi + 4], eax
// 005f2aae  894e08               mov dword ptr [esi + 8], ecx
// 005f2ab1  8d542418             lea edx, [esp + 0x18]
// 005f2ab5  52                   push edx
// 005f2ab6  8d44241c             lea eax, [esp + 0x1c]
// 005f2aba  50                   push eax
// 005f2abb  8d4e10               lea ecx, [esi + 0x10]
// 005f2abe  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005f2ac6  e855f0ffff           call 0x5f1b20
// 005f2acb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f2acf  c70634087c00         mov dword ptr [esi], 0x7c0834
// 005f2ad5  8bc6                 mov eax, esi
// 005f2ad7  5e                   pop esi
// 005f2ad8  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2adf  83c410               add esp, 0x10
// 005f2ae2  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
