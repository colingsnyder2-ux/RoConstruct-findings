// roc 2009-12 0086f480  unit: PAVCXTPCommandBar::?$CArray  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f480
//
// 0086f480  6aff                 push -1
// 0086f482  68e8fa9500           push 0x95fae8
// 0086f487  64a100000000         mov eax, dword ptr fs:[0]
// 0086f48d  50                   push eax
// 0086f48e  83ec10               sub esp, 0x10
// 0086f491  53                   push ebx
// 0086f492  55                   push ebp
// 0086f493  56                   push esi
// 0086f494  57                   push edi
// 0086f495  a10052b600           mov eax, dword ptr [0xb65200]
// 0086f49a  33c4                 xor eax, esp
// 0086f49c  50                   push eax
// 0086f49d  8d442424             lea eax, [esp + 0x24]
// 0086f4a1  64a300000000         mov dword ptr fs:[0], eax
// 0086f4a7  68b0647f00           push 0x7f64b0
// 0086f4ac  b9d0bab900           mov ecx, 0xb9bad0
// 0086f4b1  e8866f0b00           call 0x92643c
// 0086f4b6  8bf0                 mov esi, eax
// 0086f4b8  33c0                 xor eax, eax
// 0086f4ba  33c9                 xor ecx, ecx
// 0086f4bc  3bf1                 cmp esi, ecx
// 0086f4be  0f95c0               setne al
// 0086f4c1  3bc1                 cmp eax, ecx
// 0086f4c3  7505                 jne 0x86f4ca
// 0086f4c5  e84246f8ff           call 0x7f3b0c
// 0086f4ca  8b442434             mov eax, dword ptr [esp + 0x34]
// 0086f4ce  3bc1                 cmp eax, ecx
// 0086f4d0  741a                 je 0x86f4ec
// 0086f4d2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0086f4d6  8b542438             mov edx, dword ptr [esp + 0x38]
// 0086f4da  51                   push ecx
// 0086f4db  52                   push edx
// 0086f4dc  50                   push eax
// 0086f4dd  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0086f4e0  50                   push eax
// 0086f4e1  ff15c4ca9800         call dword ptr [0x98cac4]
// 0086f4e7  e9e9000000           jmp 0x86f5d5
// 0086f4ec  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0086f4f0  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0086f4f4  8b18                 mov ebx, dword ptr [eax]
// 0086f4f6  8b6804               mov ebp, dword ptr [eax + 4]
// 0086f4f9  81ff01020000         cmp edi, 0x201
// 0086f4ff  7408                 je 0x86f509
// 0086f501  81ff04020000         cmp edi, 0x204
// 0086f507  7503                 jne 0x86f50c
// 0086f509  894e40               mov dword ptr [esi + 0x40], ecx
// 0086f50c  81ff02020000         cmp edi, 0x202
// 0086f512  7408                 je 0x86f51c
// 0086f514  81ffa2000000         cmp edi, 0xa2
// 0086f51a  7512                 jne 0x86f52e
// 0086f51c  394e40               cmp dword ptr [esi + 0x40], ecx
// 0086f51f  740d                 je 0x86f52e
// 0086f521  894e40               mov dword ptr [esi + 0x40], ecx
// 0086f524  b801000000           mov eax, 1
// 0086f529  e9a7000000           jmp 0x86f5d5
// 0086f52e  394e10               cmp dword ptr [esi + 0x10], ecx
// 0086f531  7420                 je 0x86f553
// 0086f533  81ff00020000         cmp edi, 0x200
// 0086f539  7408                 je 0x86f543
// 0086f53b  81ffa0000000         cmp edi, 0xa0
// 0086f541  7510                 jne 0x86f553
// 0086f543  391dd4bab900         cmp dword ptr [0xb9bad4], ebx
// 0086f549  7508                 jne 0x86f553
// 0086f54b  392dd8bab900         cmp dword ptr [0xb9bad8], ebp
// 0086f551  74d1                 je 0x86f524
// 0086f553  891dd4bab900         mov dword ptr [0xb9bad4], ebx
// 0086f559  892dd8bab900         mov dword ptr [0xb9bad8], ebp
// 0086f55f  394e10               cmp dword ptr [esi + 0x10], ecx
// 0086f562  750f                 jne 0x86f573
// 0086f564  50                   push eax
// 0086f565  57                   push edi
// 0086f566  51                   push ecx
// 0086f567  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0086f56a  51                   push ecx
// 0086f56b  ff15c4ca9800         call dword ptr [0x98cac4]
// 0086f571  eb62                 jmp 0x86f5d5
// 0086f573  8b5644               mov edx, dword ptr [esi + 0x44]
// 0086f576  52                   push edx
// 0086f577  8d4c2418             lea ecx, [esp + 0x18]
// 0086f57b  e8b045f8ff           call 0x7f3b30
// 0086f580  55                   push ebp
// 0086f581  53                   push ebx
// 0086f582  57                   push edi
// 0086f583  8bce                 mov ecx, esi
// 0086f585  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0086f58d  e83efdffff           call 0x86f2d0
// 0086f592  85c0                 test eax, eax
// 0086f594  7418                 je 0x86f5ae
// 0086f596  8d4c2414             lea ecx, [esp + 0x14]
// 0086f59a  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0086f5a2  e8f936b9ff           call 0x402ca0
// 0086f5a7  b801000000           mov eax, 1
// 0086f5ac  eb27                 jmp 0x86f5d5
// 0086f5ae  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0086f5b2  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0086f5b5  50                   push eax
// 0086f5b6  57                   push edi
// 0086f5b7  6a00                 push 0
// 0086f5b9  51                   push ecx
// 0086f5ba  ff15c4ca9800         call dword ptr [0x98cac4]
// 0086f5c0  8d4c2414             lea ecx, [esp + 0x14]
// 0086f5c4  8bf0                 mov esi, eax
// 0086f5c6  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0086f5ce  e8cd36b9ff           call 0x402ca0
// 0086f5d3  8bc6                 mov eax, esi
// 0086f5d5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086f5d9  64890d00000000       mov dword ptr fs:[0], ecx
// 0086f5e0  59                   pop ecx
// 0086f5e1  5f                   pop edi
// 0086f5e2  5e                   pop esi
// 0086f5e3  5d                   pop ebp
// 0086f5e4  5b                   pop ebx
// 0086f5e5  83c41c               add esp, 0x1c
// 0086f5e8  c20c00               ret 0xc
// copied from an identical function in another client (function ?MouseProc@CXTPMouseManager@@CGJHIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp