// roc 2007-03 005e0db0  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e0db0
//
// 005e0db0  6aff                 push -1
// 005e0db2  68f8bc7500           push 0x75bcf8
// 005e0db7  64a100000000         mov eax, dword ptr fs:[0]
// 005e0dbd  50                   push eax
// 005e0dbe  64892500000000       mov dword ptr fs:[0], esp
// 005e0dc5  51                   push ecx
// 005e0dc6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e0dca  56                   push esi
// 005e0dcb  8bf1                 mov esi, ecx
// 005e0dcd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e0dd1  89742404             mov dword ptr [esp + 4], esi
// 005e0dd5  c7067c647800         mov dword ptr [esi], 0x78647c
// 005e0ddb  894604               mov dword ptr [esi + 4], eax
// 005e0dde  894e08               mov dword ptr [esi + 8], ecx
// 005e0de1  8d542418             lea edx, [esp + 0x18]
// 005e0de5  52                   push edx
// 005e0de6  8d44241c             lea eax, [esp + 0x1c]
// 005e0dea  50                   push eax
// 005e0deb  8d4e10               lea ecx, [esi + 0x10]
// 005e0dee  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005e0df6  e845f1ffff           call 0x5dff40
// 005e0dfb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e0dff  c70610e57b00         mov dword ptr [esi], 0x7be510
// 005e0e05  8bc6                 mov eax, esi
// 005e0e07  5e                   pop esi
// 005e0e08  64890d00000000       mov dword ptr fs:[0], ecx
// 005e0e0f  83c410               add esp, 0x10
// 005e0e12  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
