// roc 2009-12 0084f0d0  unit: CXTPPropertyGrid  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f0d0
//
// 0084f0d0  6aff                 push -1
// 0084f0d2  6819ba9500           push 0x95ba19
// 0084f0d7  64a100000000         mov eax, dword ptr fs:[0]
// 0084f0dd  50                   push eax
// 0084f0de  51                   push ecx
// 0084f0df  56                   push esi
// 0084f0e0  57                   push edi
// 0084f0e1  a10052b600           mov eax, dword ptr [0xb65200]
// 0084f0e6  33c4                 xor eax, esp
// 0084f0e8  50                   push eax
// 0084f0e9  8d442410             lea eax, [esp + 0x10]
// 0084f0ed  64a300000000         mov dword ptr fs:[0], eax
// 0084f0f3  8d4c240c             lea ecx, [esp + 0xc]
// 0084f0f7  ff1574de9800         call dword ptr [0x98de74]
// 0084f0fd  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0084f105  e896f70100           call 0x86e8a0
// 0084f10a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0084f10e  8b4f04               mov ecx, dword ptr [edi + 4]
// 0084f111  8b10                 mov edx, dword ptr [eax]
// 0084f113  8b5208               mov edx, dword ptr [edx + 8]
// 0084f116  51                   push ecx
// 0084f117  8d4c2410             lea ecx, [esp + 0x10]
// 0084f11b  51                   push ecx
// 0084f11c  8bc8                 mov ecx, eax
// 0084f11e  ffd2                 call edx
// 0084f120  8d4c240c             lea ecx, [esp + 0xc]
// 0084f124  85c0                 test eax, eax
// 0084f126  751c                 jne 0x84f144
// 0084f128  ff15c0de9800         call dword ptr [0x98dec0]
// 0084f12e  33c0                 xor eax, eax
// 0084f130  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084f134  64890d00000000       mov dword ptr fs:[0], ecx
// 0084f13b  59                   pop ecx
// 0084f13c  5f                   pop edi
// 0084f13d  5e                   pop esi
// 0084f13e  83c410               add esp, 0x10
// 0084f141  c20c00               ret 0xc
// 0084f144  817f08f8fdffff       cmp dword ptr [edi + 8], 0xfffffdf8
// 0084f14b  7515                 jne 0x84f162
// 0084f14d  6a50                 push 0x50
// 0084f14f  ff1580de9800         call dword ptr [0x98de80]
// 0084f155  50                   push eax
// 0084f156  8d4710               lea eax, [edi + 0x10]
// 0084f159  50                   push eax
// 0084f15a  ff1528b39800         call dword ptr [0x98b328]
// 0084f160  eb3b                 jmp 0x84f19d
// 0084f162  ff1580de9800         call dword ptr [0x98de80]
// 0084f168  6a50                 push 0x50
// 0084f16a  8d7710               lea esi, [edi + 0x10]
// 0084f16d  56                   push esi
// 0084f16e  6aff                 push -1
// 0084f170  50                   push eax
// 0084f171  6a00                 push 0
// 0084f173  6a03                 push 3
// 0084f175  ff1540b29800         call dword ptr [0x98b240]
// 0084f17b  85f6                 test esi, esi
// 0084f17d  740f                 je 0x84f18e
// 0084f17f  83f850               cmp eax, 0x50
// 0084f182  7e0a                 jle 0x84f18e
// 0084f184  6805400080           push 0x80004005
// 0084f189  e8f239bbff           call 0x402b80
// 0084f18e  85c0                 test eax, eax
// 0084f190  7e0b                 jle 0x84f19d
// 0084f192  85f6                 test esi, esi
// 0084f194  7407                 je 0x84f19d
// 0084f196  33c9                 xor ecx, ecx
// 0084f198  66894c46fe           mov word ptr [esi + eax*2 - 2], cx
// 0084f19d  8b542428             mov edx, dword ptr [esp + 0x28]
// 0084f1a1  6813020000           push 0x213
// 0084f1a6  6a00                 push 0
// 0084f1a8  6a00                 push 0
// 0084f1aa  6a00                 push 0
// 0084f1ac  6a00                 push 0
// 0084f1ae  c70200000000         mov dword ptr [edx], 0
// 0084f1b4  8b07                 mov eax, dword ptr [edi]
// 0084f1b6  6a00                 push 0
// 0084f1b8  50                   push eax
// 0084f1b9  ff15e0c99800         call dword ptr [0x98c9e0]
// 0084f1bf  8d4c240c             lea ecx, [esp + 0xc]
// 0084f1c3  ff15c0de9800         call dword ptr [0x98dec0]
// 0084f1c9  b801000000           mov eax, 1
// 0084f1ce  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084f1d2  64890d00000000       mov dword ptr fs:[0], ecx
// 0084f1d9  59                   pop ecx
// 0084f1da  5f                   pop edi
// 0084f1db  5e                   pop esi
// 0084f1dc  83c410               add esp, 0x10
// 0084f1df  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolTipText@CXTPPropertyGrid@@IAEHIPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGrid.cpp