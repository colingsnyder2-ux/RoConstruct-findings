// roc 2010-06 00827cc0  unit: CXTPControlGallery  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00827cc0
//
// 00827cc0  8b442408             mov eax, dword ptr [esp + 8]
// 00827cc4  83ec20               sub esp, 0x20
// 00827cc7  56                   push esi
// 00827cc8  8bf1                 mov esi, ecx
// 00827cca  85c0                 test eax, eax
// 00827ccc  7c77                 jl 0x827d45
// 00827cce  3b8654020000         cmp eax, dword ptr [esi + 0x254]
// 00827cd4  7d6f                 jge 0x827d45
// 00827cd6  8b8e50020000         mov ecx, dword ptr [esi + 0x250]
// 00827cdc  8d0440               lea eax, [eax + eax*2]
// 00827cdf  8d14c1               lea edx, [ecx + eax*8]
// 00827ce2  52                   push edx
// 00827ce3  8d442408             lea eax, [esp + 8]
// 00827ce7  50                   push eax
// 00827ce8  ff1548bc9e00         call dword ptr [0x9ebc48]
// 00827cee  8b8e0c020000         mov ecx, dword ptr [esi + 0x20c]
// 00827cf4  f7d9                 neg ecx
// 00827cf6  51                   push ecx
// 00827cf7  6a00                 push 0
// 00827cf9  8d54240c             lea edx, [esp + 0xc]
// 00827cfd  52                   push edx
// 00827cfe  ff1540bc9e00         call dword ptr [0x9ebc40]
// 00827d04  8d442414             lea eax, [esp + 0x14]
// 00827d08  50                   push eax
// 00827d09  8bce                 mov ecx, esi
// 00827d0b  e840d9ffff           call 0x825650
// 00827d10  50                   push eax
// 00827d11  8d4c2408             lea ecx, [esp + 8]
// 00827d15  51                   push ecx
// 00827d16  8bd1                 mov edx, ecx
// 00827d18  52                   push edx
// 00827d19  ff15a4ba9e00         call dword ptr [0x9ebaa4]
// 00827d1f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00827d23  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00827d27  8b542408             mov edx, dword ptr [esp + 8]
// 00827d2b  8908                 mov dword ptr [eax], ecx
// 00827d2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00827d31  895004               mov dword ptr [eax + 4], edx
// 00827d34  8b542410             mov edx, dword ptr [esp + 0x10]
// 00827d38  894808               mov dword ptr [eax + 8], ecx
// 00827d3b  89500c               mov dword ptr [eax + 0xc], edx
// 00827d3e  5e                   pop esi
// 00827d3f  83c420               add esp, 0x20
// 00827d42  c20800               ret 8
// 00827d45  8b442428             mov eax, dword ptr [esp + 0x28]
// 00827d49  c70000000000         mov dword ptr [eax], 0
// 00827d4f  c7400400000000       mov dword ptr [eax + 4], 0
// 00827d56  c7400800000000       mov dword ptr [eax + 8], 0
// 00827d5d  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 00827d64  5e                   pop esi
// 00827d65  83c420               add esp, 0x20
// 00827d68  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItemDrawRect@CXTPControlGallery@@QAE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
