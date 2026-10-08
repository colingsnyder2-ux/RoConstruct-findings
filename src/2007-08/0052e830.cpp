// roc 2007-08 0052e830  unit: std::X::ZV?$allocator::$$A6AXMM::V?$function::?$holder  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052e830
//
// 0052e830  6aff                 push -1
// 0052e832  6878837500           push 0x758378
// 0052e837  64a100000000         mov eax, dword ptr fs:[0]
// 0052e83d  50                   push eax
// 0052e83e  64892500000000       mov dword ptr fs:[0], esp
// 0052e845  51                   push ecx
// 0052e846  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052e84a  56                   push esi
// 0052e84b  8bf1                 mov esi, ecx
// 0052e84d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052e851  89742404             mov dword ptr [esp + 4], esi
// 0052e855  c706c4737800         mov dword ptr [esi], 0x7873c4
// 0052e85b  894604               mov dword ptr [esi + 4], eax
// 0052e85e  894e08               mov dword ptr [esi + 8], ecx
// 0052e861  8d542418             lea edx, [esp + 0x18]
// 0052e865  52                   push edx
// 0052e866  8d44241c             lea eax, [esp + 0x1c]
// 0052e86a  50                   push eax
// 0052e86b  8d4e10               lea ecx, [esi + 0x10]
// 0052e86e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0052e876  e8a5320c00           call 0x5f1b20
// 0052e87b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052e87f  c706844a7a00         mov dword ptr [esi], 0x7a4a84
// 0052e885  8bc6                 mov eax, esi
// 0052e887  5e                   pop esi
// 0052e888  64890d00000000       mov dword ptr fs:[0], ecx
// 0052e88f  83c410               add esp, 0x10
// 0052e892  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
