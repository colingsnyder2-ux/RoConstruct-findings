// roc 2009-12 00868340  unit: CXTPPropertyGridView  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868340
//
// 00868340  6aff                 push -1
// 00868342  68a35d9600           push 0x965da3
// 00868347  64a100000000         mov eax, dword ptr fs:[0]
// 0086834d  50                   push eax
// 0086834e  81ec98000000         sub esp, 0x98
// 00868354  a10052b600           mov eax, dword ptr [0xb65200]
// 00868359  33c4                 xor eax, esp
// 0086835b  89842494000000       mov dword ptr [esp + 0x94], eax
// 00868362  56                   push esi
// 00868363  a10052b600           mov eax, dword ptr [0xb65200]
// 00868368  33c4                 xor eax, esp
// 0086836a  50                   push eax
// 0086836b  8d8424a0000000       lea eax, [esp + 0xa0]
// 00868372  64a300000000         mov dword ptr fs:[0], eax
// 00868378  8bf1                 mov esi, ecx
// 0086837a  56                   push esi
// 0086837b  8d4c244c             lea ecx, [esp + 0x4c]
// 0086837f  e86cbef8ff           call 0x7f41f0
// 00868384  56                   push esi
// 00868385  8d4c240c             lea ecx, [esp + 0xc]
// 00868389  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 00868394  e8372ffeff           call 0x84b2d0
// 00868399  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0086839d  8d442408             lea eax, [esp + 8]
// 008683a1  50                   push eax
// 008683a2  51                   push ecx
// 008683a3  8d4c2420             lea ecx, [esp + 0x20]
// 008683a7  e8842ffeff           call 0x84b330
// 008683ac  8bce                 mov ecx, esi
// 008683ae  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 008683b6  e895f5ffff           call 0x867950
// 008683bb  8b10                 mov edx, dword ptr [eax]
// 008683bd  8b5214               mov edx, dword ptr [edx + 0x14]
// 008683c0  8d4c2418             lea ecx, [esp + 0x18]
// 008683c4  51                   push ecx
// 008683c5  8bc8                 mov ecx, eax
// 008683c7  ffd2                 call edx
// 008683c9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008683cd  6a00                 push 0
// 008683cf  50                   push eax
// 008683d0  6a0f                 push 0xf
// 008683d2  8bce                 mov ecx, esi
// 008683d4  e807b6f8ff           call 0x7f39e0
// 008683d9  8d4c2418             lea ecx, [esp + 0x18]
// 008683dd  c68424a800000000     mov byte ptr [esp + 0xa8], 0
// 008683e5  e85631feff           call 0x84b540
// 008683ea  8d4c2448             lea ecx, [esp + 0x48]
// 008683ee  c78424a8000000ffffffff mov dword ptr [esp + 0xa8], 0xffffffff
// 008683f9  e8ecbdf8ff           call 0x7f41ea
// 008683fe  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00868405  64890d00000000       mov dword ptr fs:[0], ecx
// 0086840c  59                   pop ecx
// 0086840d  5e                   pop esi
// 0086840e  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00868415  33cc                 xor ecx, esp
// 00868417  e87ecff8ff           call 0x7f539a
// 0086841c  81c4a4000000         add esp, 0xa4
// 00868422  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPPropertyGridView@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp