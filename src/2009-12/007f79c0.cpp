// roc 2009-12 007f79c0  unit: IIHH::?$CMap  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f79c0
//
// 007f79c0  56                   push esi
// 007f79c1  8bf1                 mov esi, ecx
// 007f79c3  e87aea1200           call 0x926442
// 007f79c8  8d4e40               lea ecx, [esi + 0x40]
// 007f79cb  c70614189f00         mov dword ptr [esi], 0x9f1814
// 007f79d1  ff1574de9800         call dword ptr [0x98de74]
// 007f79d7  8d4e44               lea ecx, [esi + 0x44]
// 007f79da  ff1574de9800         call dword ptr [0x98de74]
// 007f79e0  8d4e48               lea ecx, [esi + 0x48]
// 007f79e3  ff1574de9800         call dword ptr [0x98de74]
// 007f79e9  8d4e4c               lea ecx, [esi + 0x4c]
// 007f79ec  ff1574de9800         call dword ptr [0x98de74]
// 007f79f2  8d4e50               lea ecx, [esi + 0x50]
// 007f79f5  ff1574de9800         call dword ptr [0x98de74]
// 007f79fb  8d4e54               lea ecx, [esi + 0x54]
// 007f79fe  ff1574de9800         call dword ptr [0x98de74]
// 007f7a04  8d4e58               lea ecx, [esi + 0x58]
// 007f7a07  ff1574de9800         call dword ptr [0x98de74]
// 007f7a0d  8d4e5c               lea ecx, [esi + 0x5c]
// 007f7a10  e86bfeffff           call 0x7f7880
// 007f7a15  33c0                 xor eax, eax
// 007f7a17  894628               mov dword ptr [esi + 0x28], eax
// 007f7a1a  89462c               mov dword ptr [esi + 0x2c], eax
// 007f7a1d  894630               mov dword ptr [esi + 0x30], eax
// 007f7a20  894624               mov dword ptr [esi + 0x24], eax
// 007f7a23  894638               mov dword ptr [esi + 0x38], eax
// 007f7a26  894620               mov dword ptr [esi + 0x20], eax
// 007f7a29  8b442408             mov eax, dword ptr [esp + 8]
// 007f7a2d  b901000000           mov ecx, 1
// 007f7a32  894670               mov dword ptr [esi + 0x70], eax
// 007f7a35  894e3c               mov dword ptr [esi + 0x3c], ecx
// 007f7a38  894e34               mov dword ptr [esi + 0x34], ecx
// 007f7a3b  8bc6                 mov eax, esi
// 007f7a3d  5e                   pop esi
// 007f7a3e  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPControlAction@@IAE@PAVCXTPControlActions@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp