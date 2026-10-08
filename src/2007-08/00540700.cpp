// roc 2007-08 00540700  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540700
//
// 00540700  6aff                 push -1
// 00540702  6878837500           push 0x758378
// 00540707  64a100000000         mov eax, dword ptr fs:[0]
// 0054070d  50                   push eax
// 0054070e  64892500000000       mov dword ptr fs:[0], esp
// 00540715  51                   push ecx
// 00540716  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054071a  56                   push esi
// 0054071b  8bf1                 mov esi, ecx
// 0054071d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00540721  89742404             mov dword ptr [esp + 4], esi
// 00540725  c706c4737800         mov dword ptr [esi], 0x7873c4
// 0054072b  894604               mov dword ptr [esi + 4], eax
// 0054072e  894e08               mov dword ptr [esi + 8], ecx
// 00540731  8d542418             lea edx, [esp + 0x18]
// 00540735  52                   push edx
// 00540736  8d44241c             lea eax, [esp + 0x1c]
// 0054073a  50                   push eax
// 0054073b  8d4e10               lea ecx, [esi + 0x10]
// 0054073e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00540746  e8d5130b00           call 0x5f1b20
// 0054074b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054074f  c706ec657a00         mov dword ptr [esi], 0x7a65ec
// 00540755  8bc6                 mov eax, esi
// 00540757  5e                   pop esi
// 00540758  64890d00000000       mov dword ptr fs:[0], ecx
// 0054075f  83c410               add esp, 0x10
// 00540762  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
