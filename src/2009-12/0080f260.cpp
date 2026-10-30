// roc 2009-12 0080f260  unit: CXTPImageManagerIcon  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080f260
//
// 0080f260  6aff                 push -1
// 0080f262  68199e9500           push 0x959e19
// 0080f267  64a100000000         mov eax, dword ptr fs:[0]
// 0080f26d  50                   push eax
// 0080f26e  51                   push ecx
// 0080f26f  56                   push esi
// 0080f270  a10052b600           mov eax, dword ptr [0xb65200]
// 0080f275  33c4                 xor eax, esp
// 0080f277  50                   push eax
// 0080f278  8d44240c             lea eax, [esp + 0xc]
// 0080f27c  64a300000000         mov dword ptr fs:[0], eax
// 0080f282  8bf1                 mov esi, ecx
// 0080f284  89742408             mov dword ptr [esp + 8], esi
// 0080f288  c706b4319f00         mov dword ptr [esi], 0x9f31b4
// 0080f28e  c744241403000000     mov dword ptr [esp + 0x14], 3
// 0080f296  e8f5e5ffff           call 0x80d890
// 0080f29b  8d4e58               lea ecx, [esi + 0x58]
// 0080f29e  c644241402           mov byte ptr [esp + 0x14], 2
// 0080f2a3  e858c5ffff           call 0x80b800
// 0080f2a8  8d4e44               lea ecx, [esi + 0x44]
// 0080f2ab  c644241401           mov byte ptr [esp + 0x14], 1
// 0080f2b0  e8fbc4ffff           call 0x80b7b0
// 0080f2b5  8d4e28               lea ecx, [esi + 0x28]
// 0080f2b8  c644241400           mov byte ptr [esp + 0x14], 0
// 0080f2bd  e8bec4ffff           call 0x80b780
// 0080f2c2  8bce                 mov ecx, esi
// 0080f2c4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0080f2cc  e81151feff           call 0x7f43e2
// 0080f2d1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080f2d5  64890d00000000       mov dword ptr fs:[0], ecx
// 0080f2dc  59                   pop ecx
// 0080f2dd  5e                   pop esi
// 0080f2de  83c410               add esp, 0x10
// 0080f2e1  c3                   ret 
// copied from an identical function in another client (function ??1CXTPImageManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp