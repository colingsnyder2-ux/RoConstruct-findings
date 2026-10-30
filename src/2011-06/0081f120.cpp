// from server: 100% by auto
// roc 2011-06 0081f120  unit: CXTPCommandBar  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081f120
//
// 0081f120  83ec2c               sub esp, 0x2c
// 0081f123  6a2c                 push 0x2c
// 0081f125  8d442404             lea eax, [esp + 4]
// 0081f129  6a00                 push 0
// 0081f12b  50                   push eax
// 0081f12c  e8b3c1feff           call 0x80b2e4
// 0081f131  8b542444             mov edx, dword ptr [esp + 0x44]
// 0081f135  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0081f139  83c40c               add esp, 0xc
// 0081f13c  6a00                 push 0
// 0081f13e  6a00                 push 0
// 0081f140  89542410             mov dword ptr [esp + 0x10], edx
// 0081f144  8d54243c             lea edx, [esp + 0x3c]
// 0081f148  52                   push edx
// 0081f149  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081f14d  b801000000           mov eax, 1
// 0081f152  6689442418           mov word ptr [esp + 0x18], ax
// 0081f157  b920000000           mov ecx, 0x20
// 0081f15c  6a00                 push 0
// 0081f15e  8d442410             lea eax, [esp + 0x10]
// 0081f162  66894c241e           mov word ptr [esp + 0x1e], cx
// 0081f167  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0081f16b  50                   push eax
// 0081f16c  51                   push ecx
// 0081f16d  c744241828000000     mov dword ptr [esp + 0x18], 0x28
// 0081f175  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0081f17d  ff157801a400         call dword ptr [0xa40178]
// 0081f183  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0081f187  85c9                 test ecx, ecx
// 0081f189  7406                 je 0x81f191
// 0081f18b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0081f18f  8911                 mov dword ptr [ecx], edx
// 0081f191  83c42c               add esp, 0x2c
// 0081f194  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?Create32BPPDIBSection@CXTPImageManager@@SAPAUHBITMAP__@@PAUHDC__@@HHPAPAE@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
