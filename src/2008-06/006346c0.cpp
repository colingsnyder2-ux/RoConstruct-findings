// roc 2008-06 006346c0  unit: RBX::VBrickColor::V?$Value::?$DescribedCreatable  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006346c0
//
// 006346c0  6aff                 push -1
// 006346c2  68e89f7d00           push 0x7d9fe8
// 006346c7  64a100000000         mov eax, dword ptr fs:[0]
// 006346cd  50                   push eax
// 006346ce  64892500000000       mov dword ptr fs:[0], esp
// 006346d5  51                   push ecx
// 006346d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 006346da  56                   push esi
// 006346db  8bf1                 mov esi, ecx
// 006346dd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006346e1  89742404             mov dword ptr [esp + 4], esi
// 006346e5  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 006346eb  894604               mov dword ptr [esi + 4], eax
// 006346ee  894e08               mov dword ptr [esi + 8], ecx
// 006346f1  8d542418             lea edx, [esp + 0x18]
// 006346f5  52                   push edx
// 006346f6  8d44241c             lea eax, [esp + 0x1c]
// 006346fa  50                   push eax
// 006346fb  8d4e10               lea ecx, [esi + 0x10]
// 006346fe  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00634706  e8f554e6ff           call 0x499c00
// 0063470b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063470f  c706f0838400         mov dword ptr [esi], 0x8483f0
// 00634715  8bc6                 mov eax, esi
// 00634717  5e                   pop esi
// 00634718  64890d00000000       mov dword ptr fs:[0], ecx
// 0063471f  83c410               add esp, 0x10
// 00634722  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
