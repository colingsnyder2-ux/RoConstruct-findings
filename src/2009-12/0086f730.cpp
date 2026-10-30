// roc 2009-12 0086f730  unit: PAVCXTPCommandBar::?$CArray  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f730
//
// 0086f730  6aff                 push -1
// 0086f732  681bfb9500           push 0x95fb1b
// 0086f737  64a100000000         mov eax, dword ptr fs:[0]
// 0086f73d  50                   push eax
// 0086f73e  51                   push ecx
// 0086f73f  56                   push esi
// 0086f740  a10052b600           mov eax, dword ptr [0xb65200]
// 0086f745  33c4                 xor eax, esp
// 0086f747  50                   push eax
// 0086f748  8d44240c             lea eax, [esp + 0xc]
// 0086f74c  64a300000000         mov dword ptr fs:[0], eax
// 0086f752  8bf1                 mov esi, ecx
// 0086f754  89742408             mov dword ptr [esp + 8], esi
// 0086f758  c706a80ba000         mov dword ptr [esi], 0xa00ba8
// 0086f75e  6a00                 push 0
// 0086f760  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0086f768  e883feffff           call 0x86f5f0
// 0086f76d  8d4e2c               lea ecx, [esi + 0x2c]
// 0086f770  e88bf8ffff           call 0x86f000
// 0086f775  8d4e08               lea ecx, [esi + 8]
// 0086f778  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0086f780  e80b6bf9ff           call 0x806290
// 0086f785  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086f789  64890d00000000       mov dword ptr fs:[0], ecx
// 0086f790  59                   pop ecx
// 0086f791  5e                   pop esi
// 0086f792  83c410               add esp, 0x10
// 0086f795  c3                   ret 
// copied from an identical function in another client (function ??1CXTPMouseManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp