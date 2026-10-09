// roc 2009-12 0087aa70  unit: CXTPControlGallery  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087aa70
//
// 0087aa70  8b442408             mov eax, dword ptr [esp + 8]
// 0087aa74  83ec20               sub esp, 0x20
// 0087aa77  56                   push esi
// 0087aa78  8bf1                 mov esi, ecx
// 0087aa7a  85c0                 test eax, eax
// 0087aa7c  7c77                 jl 0x87aaf5
// 0087aa7e  3b8654020000         cmp eax, dword ptr [esi + 0x254]
// 0087aa84  7d6f                 jge 0x87aaf5
// 0087aa86  8b8e50020000         mov ecx, dword ptr [esi + 0x250]
// 0087aa8c  8d0440               lea eax, [eax + eax*2]
// 0087aa8f  8d14c1               lea edx, [ecx + eax*8]
// 0087aa92  52                   push edx
// 0087aa93  8d442408             lea eax, [esp + 8]
// 0087aa97  50                   push eax
// 0087aa98  ff1564cc9800         call dword ptr [0x98cc64]
// 0087aa9e  8b8e0c020000         mov ecx, dword ptr [esi + 0x20c]
// 0087aaa4  f7d9                 neg ecx
// 0087aaa6  51                   push ecx
// 0087aaa7  6a00                 push 0
// 0087aaa9  8d54240c             lea edx, [esp + 0xc]
// 0087aaad  52                   push edx
// 0087aaae  ff156ccc9800         call dword ptr [0x98cc6c]
// 0087aab4  8d442414             lea eax, [esp + 0x14]
// 0087aab8  50                   push eax
// 0087aab9  8bce                 mov ecx, esi
// 0087aabb  e890d9ffff           call 0x878450
// 0087aac0  50                   push eax
// 0087aac1  8d4c2408             lea ecx, [esp + 8]
// 0087aac5  51                   push ecx
// 0087aac6  8bd1                 mov edx, ecx
// 0087aac8  52                   push edx
// 0087aac9  ff15dcca9800         call dword ptr [0x98cadc]
// 0087aacf  8b442428             mov eax, dword ptr [esp + 0x28]
// 0087aad3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0087aad7  8b542408             mov edx, dword ptr [esp + 8]
// 0087aadb  8908                 mov dword ptr [eax], ecx
// 0087aadd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087aae1  895004               mov dword ptr [eax + 4], edx
// 0087aae4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087aae8  894808               mov dword ptr [eax + 8], ecx
// 0087aaeb  89500c               mov dword ptr [eax + 0xc], edx
// 0087aaee  5e                   pop esi
// 0087aaef  83c420               add esp, 0x20
// 0087aaf2  c20800               ret 8
// 0087aaf5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0087aaf9  c70000000000         mov dword ptr [eax], 0
// 0087aaff  c7400400000000       mov dword ptr [eax + 4], 0
// 0087ab06  c7400800000000       mov dword ptr [eax + 8], 0
// 0087ab0d  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 0087ab14  5e                   pop esi
// 0087ab15  83c420               add esp, 0x20
// 0087ab18  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItemDrawRect@CXTPControlGallery@@QAE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
