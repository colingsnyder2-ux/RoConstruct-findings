// from server: 100% by auto
// roc 2007-08 00647fc0  unit: CXTPCommandBar  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00647fc0
//
// 00647fc0  83ec2c               sub esp, 0x2c
// 00647fc3  6a2c                 push 0x2c
// 00647fc5  8d442404             lea eax, [esp + 4]
// 00647fc9  6a00                 push 0
// 00647fcb  50                   push eax
// 00647fcc  e8bb8bfeff           call 0x630b8c
// 00647fd1  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00647fd5  8b542444             mov edx, dword ptr [esp + 0x44]
// 00647fd9  83c40c               add esp, 0xc
// 00647fdc  6a00                 push 0
// 00647fde  6a00                 push 0
// 00647fe0  8d44243c             lea eax, [esp + 0x3c]
// 00647fe4  50                   push eax
// 00647fe5  894c2410             mov dword ptr [esp + 0x10], ecx
// 00647fe9  6a00                 push 0
// 00647feb  8d4c2410             lea ecx, [esp + 0x10]
// 00647fef  89542418             mov dword ptr [esp + 0x18], edx
// 00647ff3  8b542440             mov edx, dword ptr [esp + 0x40]
// 00647ff7  51                   push ecx
// 00647ff8  52                   push edx
// 00647ff9  c744241828000000     mov dword ptr [esp + 0x18], 0x28
// 00648001  66c74424240100       mov word ptr [esp + 0x24], 1
// 00648008  66c74424262000       mov word ptr [esp + 0x26], 0x20
// 0064800f  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00648017  ff15c4d07700         call dword ptr [0x77d0c4]
// 0064801d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00648021  85c9                 test ecx, ecx
// 00648023  7406                 je 0x64802b
// 00648025  8b542434             mov edx, dword ptr [esp + 0x34]
// 00648029  8911                 mov dword ptr [ecx], edx
// 0064802b  83c42c               add esp, 0x2c
// 0064802e  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?Create32BPPDIBSection@CXTPImageManager@@SAPAUHBITMAP__@@PAUHDC__@@HHPAPAE@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
