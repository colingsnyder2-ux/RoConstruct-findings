// roc 2009-12 008043c0  unit: CXTPCommandBar  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008043c0
//
// 008043c0  6aff                 push -1
// 008043c2  6848a49500           push 0x95a448
// 008043c7  64a100000000         mov eax, dword ptr fs:[0]
// 008043cd  50                   push eax
// 008043ce  83ec58               sub esp, 0x58
// 008043d1  a10052b600           mov eax, dword ptr [0xb65200]
// 008043d6  33c4                 xor eax, esp
// 008043d8  89442454             mov dword ptr [esp + 0x54], eax
// 008043dc  56                   push esi
// 008043dd  a10052b600           mov eax, dword ptr [0xb65200]
// 008043e2  33c4                 xor eax, esp
// 008043e4  50                   push eax
// 008043e5  8d442460             lea eax, [esp + 0x60]
// 008043e9  64a300000000         mov dword ptr fs:[0], eax
// 008043ef  8bf1                 mov esi, ecx
// 008043f1  56                   push esi
// 008043f2  8d4c240c             lea ecx, [esp + 0xc]
// 008043f6  e8f5fdfeff           call 0x7f41f0
// 008043fb  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00804401  8d442408             lea eax, [esp + 8]
// 00804405  50                   push eax
// 00804406  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 0080440e  e83d9a0800           call 0x88de50
// 00804413  8d4c2408             lea ecx, [esp + 8]
// 00804417  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0080441f  e8c6fdfeff           call 0x7f41ea
// 00804424  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00804428  64890d00000000       mov dword ptr fs:[0], ecx
// 0080442f  59                   pop ecx
// 00804430  5e                   pop esi
// 00804431  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00804435  33cc                 xor ecx, esp
// 00804437  e85e0fffff           call 0x7f539a
// 0080443c  83c464               add esp, 0x64
// 0080443f  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPCommandBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp