// roc 2009-12 008780a0  unit: CXTPControlGallery  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008780a0
//
// 008780a0  6aff                 push -1
// 008780a2  6886029600           push 0x960286
// 008780a7  64a100000000         mov eax, dword ptr fs:[0]
// 008780ad  50                   push eax
// 008780ae  51                   push ecx
// 008780af  56                   push esi
// 008780b0  57                   push edi
// 008780b1  a10052b600           mov eax, dword ptr [0xb65200]
// 008780b6  33c4                 xor eax, esp
// 008780b8  50                   push eax
// 008780b9  8d442410             lea eax, [esp + 0x10]
// 008780bd  64a300000000         mov dword ptr fs:[0], eax
// 008780c3  8bf1                 mov esi, ecx
// 008780c5  8974240c             mov dword ptr [esp + 0xc], esi
// 008780c9  8dbe84010000         lea edi, [esi + 0x184]
// 008780cf  c706dc19a000         mov dword ptr [esi], 0xa019dc
// 008780d5  c746207c19a000       mov dword ptr [esi + 0x20], 0xa0197c
// 008780dc  c7074c19a000         mov dword ptr [edi], 0xa0194c
// 008780e2  8d8e4c020000         lea ecx, [esi + 0x24c]
// 008780e8  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008780f0  e80bfdffff           call 0x877e00
// 008780f5  8bcf                 mov ecx, edi
// 008780f7  c644241800           mov byte ptr [esp + 0x18], 0
// 008780fc  e8ef2a0700           call 0x8eabf0
// 00878101  8bce                 mov ecx, esi
// 00878103  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0087810b  e8502afcff           call 0x83ab60
// 00878110  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00878114  64890d00000000       mov dword ptr fs:[0], ecx
// 0087811b  59                   pop ecx
// 0087811c  5f                   pop edi
// 0087811d  5e                   pop esi
// 0087811e  83c410               add esp, 0x10
// 00878121  c3                   ret 
// copied from an identical function in another client (function ??1CXTPControlGallery@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp