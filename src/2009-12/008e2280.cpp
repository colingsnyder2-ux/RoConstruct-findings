// roc 2009-12 008e2280  unit: CXTColorSelectorCtrl  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e2280
//
// 008e2280  6aff                 push -1
// 008e2282  68a35d9600           push 0x965da3
// 008e2287  64a100000000         mov eax, dword ptr fs:[0]
// 008e228d  50                   push eax
// 008e228e  81ec98000000         sub esp, 0x98
// 008e2294  a10052b600           mov eax, dword ptr [0xb65200]
// 008e2299  33c4                 xor eax, esp
// 008e229b  89842494000000       mov dword ptr [esp + 0x94], eax
// 008e22a2  56                   push esi
// 008e22a3  a10052b600           mov eax, dword ptr [0xb65200]
// 008e22a8  33c4                 xor eax, esp
// 008e22aa  50                   push eax
// 008e22ab  8d8424a0000000       lea eax, [esp + 0xa0]
// 008e22b2  64a300000000         mov dword ptr fs:[0], eax
// 008e22b8  8bf1                 mov esi, ecx
// 008e22ba  56                   push esi
// 008e22bb  8d4c244c             lea ecx, [esp + 0x4c]
// 008e22bf  e82c1ff1ff           call 0x7f41f0
// 008e22c4  56                   push esi
// 008e22c5  8d4c240c             lea ecx, [esp + 0xc]
// 008e22c9  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 008e22d4  e8f78ff6ff           call 0x84b2d0
// 008e22d9  8d442448             lea eax, [esp + 0x48]
// 008e22dd  50                   push eax
// 008e22de  8d4c241c             lea ecx, [esp + 0x1c]
// 008e22e2  e81991f6ff           call 0x84b400
// 008e22e7  8bce                 mov ecx, esi
// 008e22e9  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 008e22f1  e87af5ffff           call 0x8e1870
// 008e22f6  8b10                 mov edx, dword ptr [eax]
// 008e22f8  8b5210               mov edx, dword ptr [edx + 0x10]
// 008e22fb  56                   push esi
// 008e22fc  8d4c240c             lea ecx, [esp + 0xc]
// 008e2300  51                   push ecx
// 008e2301  8d4c2420             lea ecx, [esp + 0x20]
// 008e2305  51                   push ecx
// 008e2306  8bc8                 mov ecx, eax
// 008e2308  ffd2                 call edx
// 008e230a  8d442418             lea eax, [esp + 0x18]
// 008e230e  50                   push eax
// 008e230f  8bce                 mov ecx, esi
// 008e2311  e8eaf5ffff           call 0x8e1900
// 008e2316  8d4c2418             lea ecx, [esp + 0x18]
// 008e231a  c68424a800000000     mov byte ptr [esp + 0xa8], 0
// 008e2322  e81992f6ff           call 0x84b540
// 008e2327  8d4c2448             lea ecx, [esp + 0x48]
// 008e232b  c78424a8000000ffffffff mov dword ptr [esp + 0xa8], 0xffffffff
// 008e2336  e8af1ef1ff           call 0x7f41ea
// 008e233b  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008e2342  64890d00000000       mov dword ptr fs:[0], ecx
// 008e2349  59                   pop ecx
// 008e234a  5e                   pop esi
// 008e234b  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008e2352  33cc                 xor ecx, esp
// 008e2354  e84130f1ff           call 0x7f539a
// 008e2359  81c4a4000000         add esp, 0xa4
// 008e235f  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTColorSelectorCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp