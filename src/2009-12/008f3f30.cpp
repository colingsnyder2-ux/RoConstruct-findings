// roc 2009-12 008f3f30  unit: CXTButtonThemeFactory  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3f30
//
// 008f3f30  6aff                 push -1
// 008f3f32  68786c9600           push 0x966c78
// 008f3f37  64a100000000         mov eax, dword ptr fs:[0]
// 008f3f3d  50                   push eax
// 008f3f3e  51                   push ecx
// 008f3f3f  56                   push esi
// 008f3f40  a10052b600           mov eax, dword ptr [0xb65200]
// 008f3f45  33c4                 xor eax, esp
// 008f3f47  50                   push eax
// 008f3f48  8d44240c             lea eax, [esp + 0xc]
// 008f3f4c  64a300000000         mov dword ptr fs:[0], eax
// 008f3f52  8bf1                 mov esi, ecx
// 008f3f54  89742408             mov dword ptr [esp + 8], esi
// 008f3f58  c70664fba000         mov dword ptr [esi], 0xa0fb64
// 008f3f5e  8d4e74               lea ecx, [esi + 0x74]
// 008f3f61  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008f3f69  e8a281f7ff           call 0x86c110
// 008f3f6e  8bce                 mov ecx, esi
// 008f3f70  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008f3f78  e8c35ff6ff           call 0x859f40
// 008f3f7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f3f81  64890d00000000       mov dword ptr fs:[0], ecx
// 008f3f88  59                   pop ecx
// 008f3f89  5e                   pop esi
// 008f3f8a  83c410               add esp, 0x10
// 008f3f8d  c3                   ret 
// copied from an identical function in another client (function ??1CXTButtonTheme@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Controls/XTButtonTheme.cpp