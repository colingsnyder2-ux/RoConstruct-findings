// roc 2009-12 0083fde0  unit: CXTPCustomizeSheet  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083fde0
//
// 0083fde0  6aff                 push -1
// 0083fde2  68a4cc9500           push 0x95cca4
// 0083fde7  64a100000000         mov eax, dword ptr fs:[0]
// 0083fded  50                   push eax
// 0083fdee  51                   push ecx
// 0083fdef  56                   push esi
// 0083fdf0  a10052b600           mov eax, dword ptr [0xb65200]
// 0083fdf5  33c4                 xor eax, esp
// 0083fdf7  50                   push eax
// 0083fdf8  8d44240c             lea eax, [esp + 0xc]
// 0083fdfc  64a300000000         mov dword ptr fs:[0], eax
// 0083fe02  8bf1                 mov esi, ecx
// 0083fe04  89742408             mov dword ptr [esp + 8], esi
// 0083fe08  c706f4919f00         mov dword ptr [esi], 0x9f91f4
// 0083fe0e  8d8e54010000         lea ecx, [esi + 0x154]
// 0083fe14  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0083fe1c  e85fffffff           call 0x83fd80
// 0083fe21  8d8ef4000000         lea ecx, [esi + 0xf4]
// 0083fe27  c644241401           mov byte ptr [esp + 0x14], 1
// 0083fe2c  e84fffffff           call 0x83fd80
// 0083fe31  8d8e9c000000         lea ecx, [esi + 0x9c]
// 0083fe37  c644241400           mov byte ptr [esp + 0x14], 0
// 0083fe3c  e8216a0e00           call 0x926862
// 0083fe41  8bce                 mov ecx, esi
// 0083fe43  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0083fe4b  e80c6a0e00           call 0x92685c
// 0083fe50  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083fe54  64890d00000000       mov dword ptr fs:[0], ecx
// 0083fe5b  59                   pop ecx
// 0083fe5c  5e                   pop esi
// 0083fe5d  83c410               add esp, 0x10
// 0083fe60  c3                   ret 
// copied from an identical function in another client (function ??1CXTPCustomizeOptionsPage@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeOptionsPage.cpp