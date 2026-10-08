// roc 2011-06 00884d50  unit: CXTPControlGallery  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00884d50
//
// 00884d50  8b442408             mov eax, dword ptr [esp + 8]
// 00884d54  83ec20               sub esp, 0x20
// 00884d57  56                   push esi
// 00884d58  8bf1                 mov esi, ecx
// 00884d5a  85c0                 test eax, eax
// 00884d5c  7c77                 jl 0x884dd5
// 00884d5e  3b8654020000         cmp eax, dword ptr [esi + 0x254]
// 00884d64  7d6f                 jge 0x884dd5
// 00884d66  8b8e50020000         mov ecx, dword ptr [esi + 0x250]
// 00884d6c  8d0440               lea eax, [eax + eax*2]
// 00884d6f  8d14c1               lea edx, [ecx + eax*8]
// 00884d72  52                   push edx
// 00884d73  8d442408             lea eax, [esp + 8]
// 00884d77  50                   push eax
// 00884d78  ff15681ca400         call dword ptr [0xa41c68]
// 00884d7e  8b8e0c020000         mov ecx, dword ptr [esi + 0x20c]
// 00884d84  f7d9                 neg ecx
// 00884d86  51                   push ecx
// 00884d87  6a00                 push 0
// 00884d89  8d54240c             lea edx, [esp + 0xc]
// 00884d8d  52                   push edx
// 00884d8e  ff15601ca400         call dword ptr [0xa41c60]
// 00884d94  8d442414             lea eax, [esp + 0x14]
// 00884d98  50                   push eax
// 00884d99  8bce                 mov ecx, esi
// 00884d9b  e840d9ffff           call 0x8826e0
// 00884da0  50                   push eax
// 00884da1  8d4c2408             lea ecx, [esp + 8]
// 00884da5  51                   push ecx
// 00884da6  8bd1                 mov edx, ecx
// 00884da8  52                   push edx
// 00884da9  ff15fc1ba400         call dword ptr [0xa41bfc]
// 00884daf  8b442428             mov eax, dword ptr [esp + 0x28]
// 00884db3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00884db7  8b542408             mov edx, dword ptr [esp + 8]
// 00884dbb  8908                 mov dword ptr [eax], ecx
// 00884dbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00884dc1  895004               mov dword ptr [eax + 4], edx
// 00884dc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00884dc8  894808               mov dword ptr [eax + 8], ecx
// 00884dcb  89500c               mov dword ptr [eax + 0xc], edx
// 00884dce  5e                   pop esi
// 00884dcf  83c420               add esp, 0x20
// 00884dd2  c20800               ret 8
// 00884dd5  8b442428             mov eax, dword ptr [esp + 0x28]
// 00884dd9  c70000000000         mov dword ptr [eax], 0
// 00884ddf  c7400400000000       mov dword ptr [eax + 4], 0
// 00884de6  c7400800000000       mov dword ptr [eax + 8], 0
// 00884ded  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 00884df4  5e                   pop esi
// 00884df5  83c420               add esp, 0x20
// 00884df8  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItemDrawRect@CXTPControlGallery@@QAE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
