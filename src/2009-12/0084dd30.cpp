// roc 2009-12 0084dd30  unit: CXTPPropertyGridToolBar  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084dd30
//
// 0084dd30  6aff                 push -1
// 0084dd32  68a35d9600           push 0x965da3
// 0084dd37  64a100000000         mov eax, dword ptr fs:[0]
// 0084dd3d  50                   push eax
// 0084dd3e  81ec98000000         sub esp, 0x98
// 0084dd44  a10052b600           mov eax, dword ptr [0xb65200]
// 0084dd49  33c4                 xor eax, esp
// 0084dd4b  89842494000000       mov dword ptr [esp + 0x94], eax
// 0084dd52  56                   push esi
// 0084dd53  a10052b600           mov eax, dword ptr [0xb65200]
// 0084dd58  33c4                 xor eax, esp
// 0084dd5a  50                   push eax
// 0084dd5b  8d8424a0000000       lea eax, [esp + 0xa0]
// 0084dd62  64a300000000         mov dword ptr fs:[0], eax
// 0084dd68  8bf1                 mov esi, ecx
// 0084dd6a  56                   push esi
// 0084dd6b  8d4c244c             lea ecx, [esp + 0x4c]
// 0084dd6f  e87c64faff           call 0x7f41f0
// 0084dd74  56                   push esi
// 0084dd75  8d4c240c             lea ecx, [esp + 0xc]
// 0084dd79  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 0084dd84  e847d5ffff           call 0x84b2d0
// 0084dd89  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0084dd8d  8d442408             lea eax, [esp + 8]
// 0084dd91  50                   push eax
// 0084dd92  51                   push ecx
// 0084dd93  8d4c2420             lea ecx, [esp + 0x20]
// 0084dd97  e894d5ffff           call 0x84b330
// 0084dd9c  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 0084dda4  e8271cfeff           call 0x82f9d0
// 0084dda9  6a0f                 push 0xf
// 0084ddab  8bc8                 mov ecx, eax
// 0084ddad  e84e13feff           call 0x82f100
// 0084ddb2  50                   push eax
// 0084ddb3  8d54240c             lea edx, [esp + 0xc]
// 0084ddb7  52                   push edx
// 0084ddb8  8d4c2420             lea ecx, [esp + 0x20]
// 0084ddbc  e83d68faff           call 0x7f45fe
// 0084ddc1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0084ddc5  6a00                 push 0
// 0084ddc7  50                   push eax
// 0084ddc8  6a0f                 push 0xf
// 0084ddca  8bce                 mov ecx, esi
// 0084ddcc  e80f5cfaff           call 0x7f39e0
// 0084ddd1  8d4c2418             lea ecx, [esp + 0x18]
// 0084ddd5  c68424a800000000     mov byte ptr [esp + 0xa8], 0
// 0084dddd  e85ed7ffff           call 0x84b540
// 0084dde2  8d4c2448             lea ecx, [esp + 0x48]
// 0084dde6  c78424a8000000ffffffff mov dword ptr [esp + 0xa8], 0xffffffff
// 0084ddf1  e8f463faff           call 0x7f41ea
// 0084ddf6  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0084ddfd  64890d00000000       mov dword ptr fs:[0], ecx
// 0084de04  59                   pop ecx
// 0084de05  5e                   pop esi
// 0084de06  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0084de0d  33cc                 xor ecx, esp
// 0084de0f  e88675faff           call 0x7f539a
// 0084de14  81c4a4000000         add esp, 0xa4
// 0084de1a  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPPropertyGridToolBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp