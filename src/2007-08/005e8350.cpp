// roc 2007-08 005e8350  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e8350
//
// 005e8350  6aff                 push -1
// 005e8352  6878837500           push 0x758378
// 005e8357  64a100000000         mov eax, dword ptr fs:[0]
// 005e835d  50                   push eax
// 005e835e  64892500000000       mov dword ptr fs:[0], esp
// 005e8365  51                   push ecx
// 005e8366  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e836a  56                   push esi
// 005e836b  8bf1                 mov esi, ecx
// 005e836d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e8371  89742404             mov dword ptr [esp + 4], esi
// 005e8375  c706c4737800         mov dword ptr [esi], 0x7873c4
// 005e837b  894604               mov dword ptr [esi + 4], eax
// 005e837e  894e08               mov dword ptr [esi + 8], ecx
// 005e8381  8d542418             lea edx, [esp + 0x18]
// 005e8385  52                   push edx
// 005e8386  8d44241c             lea eax, [esp + 0x1c]
// 005e838a  50                   push eax
// 005e838b  8d4e10               lea ecx, [esi + 0x10]
// 005e838e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005e8396  e885970000           call 0x5f1b20
// 005e839b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e839f  c70678d97b00         mov dword ptr [esi], 0x7bd978
// 005e83a5  8bc6                 mov eax, esi
// 005e83a7  5e                   pop esi
// 005e83a8  64890d00000000       mov dword ptr fs:[0], ecx
// 005e83af  83c410               add esp, 0x10
// 005e83b2  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
