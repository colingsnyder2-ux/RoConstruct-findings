// roc 2009-12 008cef40  unit: PAVCXTPTabManagerNavigateButton::?$CArray  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cef40
//
// 008cef40  6aff                 push -1
// 008cef42  689b4e9600           push 0x964e9b
// 008cef47  64a100000000         mov eax, dword ptr fs:[0]
// 008cef4d  50                   push eax
// 008cef4e  51                   push ecx
// 008cef4f  56                   push esi
// 008cef50  57                   push edi
// 008cef51  a10052b600           mov eax, dword ptr [0xb65200]
// 008cef56  33c4                 xor eax, esp
// 008cef58  50                   push eax
// 008cef59  8d442410             lea eax, [esp + 0x10]
// 008cef5d  64a300000000         mov dword ptr fs:[0], eax
// 008cef63  8bf1                 mov esi, ecx
// 008cef65  8974240c             mov dword ptr [esp + 0xc], esi
// 008cef69  e8d4740500           call 0x926442
// 008cef6e  33ff                 xor edi, edi
// 008cef70  8d4e54               lea ecx, [esi + 0x54]
// 008cef73  897c2418             mov dword ptr [esp + 0x18], edi
// 008cef77  c7065ca7a000         mov dword ptr [esi], 0xa0a75c
// 008cef7d  ff1574de9800         call dword ptr [0x98de74]
// 008cef83  8d4e58               lea ecx, [esi + 0x58]
// 008cef86  ff1574de9800         call dword ptr [0x98de74]
// 008cef8c  8d4e6c               lea ecx, [esi + 0x6c]
// 008cef8f  e84cffffff           call 0x8ceee0
// 008cef94  8bce                 mov ecx, esi
// 008cef96  c644241803           mov byte ptr [esp + 0x18], 3
// 008cef9b  e8a8740500           call 0x926448
// 008cefa0  83c8ff               or eax, 0xffffffff
// 008cefa3  89462c               mov dword ptr [esi + 0x2c], eax
// 008cefa6  894628               mov dword ptr [esi + 0x28], eax
// 008cefa9  8d4644               lea eax, [esi + 0x44]
// 008cefac  50                   push eax
// 008cefad  c7463401000000       mov dword ptr [esi + 0x34], 1
// 008cefb4  c7463001000000       mov dword ptr [esi + 0x30], 1
// 008cefbb  897e3c               mov dword ptr [esi + 0x3c], edi
// 008cefbe  897e38               mov dword ptr [esi + 0x38], edi
// 008cefc1  897e5c               mov dword ptr [esi + 0x5c], edi
// 008cefc4  897e40               mov dword ptr [esi + 0x40], edi
// 008cefc7  ff159cca9800         call dword ptr [0x98ca9c]
// 008cefcd  897e64               mov dword ptr [esi + 0x64], edi
// 008cefd0  897e24               mov dword ptr [esi + 0x24], edi
// 008cefd3  897e20               mov dword ptr [esi + 0x20], edi
// 008cefd6  c7466801000000       mov dword ptr [esi + 0x68], 1
// 008cefdd  897e60               mov dword ptr [esi + 0x60], edi
// 008cefe0  89be80000000         mov dword ptr [esi + 0x80], edi
// 008cefe6  8bc6                 mov eax, esi
// 008cefe8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008cefec  64890d00000000       mov dword ptr fs:[0], ecx
// 008ceff3  59                   pop ecx
// 008ceff4  5f                   pop edi
// 008ceff5  5e                   pop esi
// 008ceff6  83c410               add esp, 0x10
// 008ceff9  c3                   ret 
// copied from an identical function in another client (function ??0CXTPTabManagerItem@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp