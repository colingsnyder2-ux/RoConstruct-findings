// roc 2009-12 008bc740  unit: CXTPDockingPaneContextStickerWnd  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bc740
//
// 008bc740  6aff                 push -1
// 008bc742  68733a9600           push 0x963a73
// 008bc747  64a100000000         mov eax, dword ptr fs:[0]
// 008bc74d  50                   push eax
// 008bc74e  81ec98000000         sub esp, 0x98
// 008bc754  a10052b600           mov eax, dword ptr [0xb65200]
// 008bc759  33c4                 xor eax, esp
// 008bc75b  89842494000000       mov dword ptr [esp + 0x94], eax
// 008bc762  56                   push esi
// 008bc763  57                   push edi
// 008bc764  a10052b600           mov eax, dword ptr [0xb65200]
// 008bc769  33c4                 xor eax, esp
// 008bc76b  50                   push eax
// 008bc76c  8d8424a4000000       lea eax, [esp + 0xa4]
// 008bc773  64a300000000         mov dword ptr fs:[0], eax
// 008bc779  8bf1                 mov esi, ecx
// 008bc77b  56                   push esi
// 008bc77c  8d4c2450             lea ecx, [esp + 0x50]
// 008bc780  e86b7af3ff           call 0x7f41f0
// 008bc785  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 008bc789  56                   push esi
// 008bc78a  8d4c2440             lea ecx, [esp + 0x40]
// 008bc78e  c78424b000000000000000 mov dword ptr [esp + 0xb0], 0
// 008bc799  e832ebf8ff           call 0x84b2d0
// 008bc79e  50                   push eax
// 008bc79f  57                   push edi
// 008bc7a0  8d4c2414             lea ecx, [esp + 0x14]
// 008bc7a4  e887ebf8ff           call 0x84b330
// 008bc7a9  8d44240c             lea eax, [esp + 0xc]
// 008bc7ad  50                   push eax
// 008bc7ae  8bce                 mov ecx, esi
// 008bc7b0  c68424b000000001     mov byte ptr [esp + 0xb0], 1
// 008bc7b8  e813fdffff           call 0x8bc4d0
// 008bc7bd  8d4c240c             lea ecx, [esp + 0xc]
// 008bc7c1  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 008bc7c9  e872edf8ff           call 0x84b540
// 008bc7ce  8d4c244c             lea ecx, [esp + 0x4c]
// 008bc7d2  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 008bc7dd  e8087af3ff           call 0x7f41ea
// 008bc7e2  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 008bc7e9  64890d00000000       mov dword ptr fs:[0], ecx
// 008bc7f0  59                   pop ecx
// 008bc7f1  5f                   pop edi
// 008bc7f2  5e                   pop esi
// 008bc7f3  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008bc7fa  33cc                 xor ecx, esp
// 008bc7fc  e8998bf3ff           call 0x7f539a
// 008bc801  81c4a4000000         add esp, 0xa4
// 008bc807  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneContextStickerWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp