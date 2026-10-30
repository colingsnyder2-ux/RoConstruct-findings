// roc 2007-03 00624960  unit: seg_00620000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624960
//
// 00624960  83ec2c               sub esp, 0x2c
// 00624963  6a2c                 push 0x2c
// 00624965  8d442404             lea eax, [esp + 4]
// 00624969  6a00                 push 0
// 0062496b  50                   push eax
// 0062496c  e8aba6ffff           call 0x61f01c
// 00624971  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00624975  8b542444             mov edx, dword ptr [esp + 0x44]
// 00624979  83c40c               add esp, 0xc
// 0062497c  6a00                 push 0
// 0062497e  6a00                 push 0
// 00624980  8d44243c             lea eax, [esp + 0x3c]
// 00624984  50                   push eax
// 00624985  894c2410             mov dword ptr [esp + 0x10], ecx
// 00624989  6a00                 push 0
// 0062498b  8d4c2410             lea ecx, [esp + 0x10]
// 0062498f  89542418             mov dword ptr [esp + 0x18], edx
// 00624993  8b542440             mov edx, dword ptr [esp + 0x40]
// 00624997  51                   push ecx
// 00624998  52                   push edx
// 00624999  c744241828000000     mov dword ptr [esp + 0x18], 0x28
// 006249a1  66c74424240100       mov word ptr [esp + 0x24], 1
// 006249a8  66c74424262000       mov word ptr [esp + 0x26], 0x20
// 006249af  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006249b7  ff15c8d07700         call dword ptr [0x77d0c8]
// 006249bd  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006249c1  85c9                 test ecx, ecx
// 006249c3  7406                 je 0x6249cb
// 006249c5  8b542434             mov edx, dword ptr [esp + 0x34]
// 006249c9  8911                 mov dword ptr [ecx], edx
// 006249cb  83c42c               add esp, 0x2c
// 006249ce  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?Create32BPPDIBSection@CXTPImageManager@@SAPAUHBITMAP__@@PAUHDC__@@HHPAPAE@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
