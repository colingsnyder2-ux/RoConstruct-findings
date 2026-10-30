// from server: 100% by auto
// roc 2008-06 006b9460  unit: CXTPCommandBar  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9460
//
// 006b9460  83ec2c               sub esp, 0x2c
// 006b9463  6a2c                 push 0x2c
// 006b9465  8d442404             lea eax, [esp + 4]
// 006b9469  6a00                 push 0
// 006b946b  50                   push eax
// 006b946c  e89382feff           call 0x6a1704
// 006b9471  8b542444             mov edx, dword ptr [esp + 0x44]
// 006b9475  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006b9479  83c40c               add esp, 0xc
// 006b947c  6a00                 push 0
// 006b947e  6a00                 push 0
// 006b9480  89542410             mov dword ptr [esp + 0x10], edx
// 006b9484  8d54243c             lea edx, [esp + 0x3c]
// 006b9488  52                   push edx
// 006b9489  894c2410             mov dword ptr [esp + 0x10], ecx
// 006b948d  b801000000           mov eax, 1
// 006b9492  6689442418           mov word ptr [esp + 0x18], ax
// 006b9497  b920000000           mov ecx, 0x20
// 006b949c  6a00                 push 0
// 006b949e  8d442410             lea eax, [esp + 0x10]
// 006b94a2  66894c241e           mov word ptr [esp + 0x1e], cx
// 006b94a7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006b94ab  50                   push eax
// 006b94ac  51                   push ecx
// 006b94ad  c744241828000000     mov dword ptr [esp + 0x18], 0x28
// 006b94b5  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006b94bd  ff154c218000         call dword ptr [0x80214c]
// 006b94c3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006b94c7  85c9                 test ecx, ecx
// 006b94c9  7406                 je 0x6b94d1
// 006b94cb  8b542434             mov edx, dword ptr [esp + 0x34]
// 006b94cf  8911                 mov dword ptr [ecx], edx
// 006b94d1  83c42c               add esp, 0x2c
// 006b94d4  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?Create32BPPDIBSection@CXTPImageManager@@SAPAUHBITMAP__@@PAUHDC__@@HHPAPAE@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
