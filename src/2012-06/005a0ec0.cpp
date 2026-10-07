// roc 2012-06 005a0ec0  unit: seg_005a0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a0ec0
//
// 005a0ec0  56                   push esi
// 005a0ec1  8bf1                 mov esi, ecx
// 005a0ec3  e8f8e4ffff           call 0x59f3c0
// 005a0ec8  807c240800           cmp byte ptr [esp + 8], 0
// 005a0ecd  7421                 je 0x5a0ef0
// 005a0ecf  8bce                 mov ecx, esi
// 005a0ed1  e8eabbffff           call 0x59cac0
// 005a0ed6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a0eda  83c0e4               add eax, -0x1c
// 005a0edd  50                   push eax
// 005a0ede  e8dd7a0100           call 0x5b89c0
// 005a0ee3  52                   push edx
// 005a0ee4  50                   push eax
// 005a0ee5  8d8ea00e0000         lea ecx, [esi + 0xea0]
// 005a0eeb  e810740200           call 0x5c8300
// 005a0ef0  5e                   pop esi
// 005a0ef1  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Reset@ReliabilityLayer@RakNet@@QAEX_NH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
