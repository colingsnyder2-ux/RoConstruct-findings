// from server: 100% by auto
// roc 2007-08 0064a880  unit: CXTPCommandBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064a880
//
// 0064a880  8b442404             mov eax, dword ptr [esp + 4]
// 0064a884  83ec14               sub esp, 0x14
// 0064a887  56                   push esi
// 0064a888  50                   push eax
// 0064a889  6a00                 push 0
// 0064a88b  8d4c240c             lea ecx, [esp + 0xc]
// 0064a88f  e8dc5e0300           call 0x680770
// 0064a894  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0064a898  8b542420             mov edx, dword ptr [esp + 0x20]
// 0064a89c  8b442408             mov eax, dword ptr [esp + 8]
// 0064a8a0  51                   push ecx
// 0064a8a1  52                   push edx
// 0064a8a2  50                   push eax
// 0064a8a3  ff1534d17700         call dword ptr [0x77d134]
// 0064a8a9  8d4c2404             lea ecx, [esp + 4]
// 0064a8ad  8bf0                 mov esi, eax
// 0064a8af  e8cc5f0300           call 0x680880
// 0064a8b4  8bc6                 mov eax, esi
// 0064a8b6  5e                   pop esi
// 0064a8b7  83c414               add esp, 0x14
// 0064a8ba  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?GetBitmapMaskColor@CXTPImageManager@@SAKAAVCBitmap@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
