// roc 2009-12 008ee900  unit: CXTPRibbonGroups  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ee900
//
// 008ee900  6aff                 push -1
// 008ee902  6888169600           push 0x961688
// 008ee907  64a100000000         mov eax, dword ptr fs:[0]
// 008ee90d  50                   push eax
// 008ee90e  51                   push ecx
// 008ee90f  56                   push esi
// 008ee910  a10052b600           mov eax, dword ptr [0xb65200]
// 008ee915  33c4                 xor eax, esp
// 008ee917  50                   push eax
// 008ee918  8d44240c             lea eax, [esp + 0xc]
// 008ee91c  64a300000000         mov dword ptr fs:[0], eax
// 008ee922  8bf1                 mov esi, ecx
// 008ee924  89742408             mov dword ptr [esp + 8], esi
// 008ee928  e83318faff           call 0x890160
// 008ee92d  6a12                 push 0x12
// 008ee92f  8bce                 mov ecx, esi
// 008ee931  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008ee939  c70624dca000         mov dword ptr [esi], 0xa0dc24
// 008ee93f  c74620c4dba000       mov dword ptr [esi + 0x20], 0xa0dbc4
// 008ee946  e81577f0ff           call 0x7f6060
// 008ee94b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ee94f  898674010000         mov dword ptr [esi + 0x174], eax
// 008ee955  8bc6                 mov eax, esi
// 008ee957  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ee95b  64890d00000000       mov dword ptr fs:[0], ecx
// 008ee962  59                   pop ecx
// 008ee963  5e                   pop esi
// 008ee964  83c410               add esp, 0x10
// 008ee967  c20400               ret 4
// copied from an identical function in another client (function ??0CControlGroupsScroll@CXTPRibbonScrollableBar@@QAE@H@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp