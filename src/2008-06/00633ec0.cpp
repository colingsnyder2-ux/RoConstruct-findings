// roc 2008-06 00633ec0  unit: RBX::VBrickColor::V?$Value::?$DescribedCreatable  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633ec0
//
// 00633ec0  6aff                 push -1
// 00633ec2  68e89f7d00           push 0x7d9fe8
// 00633ec7  64a100000000         mov eax, dword ptr fs:[0]
// 00633ecd  50                   push eax
// 00633ece  64892500000000       mov dword ptr fs:[0], esp
// 00633ed5  51                   push ecx
// 00633ed6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00633eda  56                   push esi
// 00633edb  8bf1                 mov esi, ecx
// 00633edd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00633ee1  89742404             mov dword ptr [esp + 4], esi
// 00633ee5  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 00633eeb  894604               mov dword ptr [esi + 4], eax
// 00633eee  894e08               mov dword ptr [esi + 8], ecx
// 00633ef1  8d542418             lea edx, [esp + 0x18]
// 00633ef5  52                   push edx
// 00633ef6  8d44241c             lea eax, [esp + 0x1c]
// 00633efa  50                   push eax
// 00633efb  8d4e10               lea ecx, [esi + 0x10]
// 00633efe  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00633f06  e8f55ce6ff           call 0x499c00
// 00633f0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633f0f  c706c0838400         mov dword ptr [esi], 0x8483c0
// 00633f15  8bc6                 mov eax, esi
// 00633f17  5e                   pop esi
// 00633f18  64890d00000000       mov dword ptr fs:[0], ecx
// 00633f1f  83c410               add esp, 0x10
// 00633f22  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
