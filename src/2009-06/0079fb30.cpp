// roc 2009-06 0079fb30  unit: CXTPControlGallery  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079fb30
//
// 0079fb30  8b442408             mov eax, dword ptr [esp + 8]
// 0079fb34  83ec20               sub esp, 0x20
// 0079fb37  56                   push esi
// 0079fb38  8bf1                 mov esi, ecx
// 0079fb3a  85c0                 test eax, eax
// 0079fb3c  7c77                 jl 0x79fbb5
// 0079fb3e  3b8654020000         cmp eax, dword ptr [esi + 0x254]
// 0079fb44  7d6f                 jge 0x79fbb5
// 0079fb46  8b8e50020000         mov ecx, dword ptr [esi + 0x250]
// 0079fb4c  8d0440               lea eax, [eax + eax*2]
// 0079fb4f  8d14c1               lea edx, [ecx + eax*8]
// 0079fb52  52                   push edx
// 0079fb53  8d442408             lea eax, [esp + 8]
// 0079fb57  50                   push eax
// 0079fb58  ff1500ee8900         call dword ptr [0x89ee00]
// 0079fb5e  8b8e0c020000         mov ecx, dword ptr [esi + 0x20c]
// 0079fb64  f7d9                 neg ecx
// 0079fb66  51                   push ecx
// 0079fb67  6a00                 push 0
// 0079fb69  8d54240c             lea edx, [esp + 0xc]
// 0079fb6d  52                   push edx
// 0079fb6e  ff15f8ed8900         call dword ptr [0x89edf8]
// 0079fb74  8d442414             lea eax, [esp + 0x14]
// 0079fb78  50                   push eax
// 0079fb79  8bce                 mov ecx, esi
// 0079fb7b  e840d9ffff           call 0x79d4c0
// 0079fb80  50                   push eax
// 0079fb81  8d4c2408             lea ecx, [esp + 8]
// 0079fb85  51                   push ecx
// 0079fb86  8bd1                 mov edx, ecx
// 0079fb88  52                   push edx
// 0079fb89  ff15f0ee8900         call dword ptr [0x89eef0]
// 0079fb8f  8b442428             mov eax, dword ptr [esp + 0x28]
// 0079fb93  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0079fb97  8b542408             mov edx, dword ptr [esp + 8]
// 0079fb9b  8908                 mov dword ptr [eax], ecx
// 0079fb9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079fba1  895004               mov dword ptr [eax + 4], edx
// 0079fba4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079fba8  894808               mov dword ptr [eax + 8], ecx
// 0079fbab  89500c               mov dword ptr [eax + 0xc], edx
// 0079fbae  5e                   pop esi
// 0079fbaf  83c420               add esp, 0x20
// 0079fbb2  c20800               ret 8
// 0079fbb5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0079fbb9  c70000000000         mov dword ptr [eax], 0
// 0079fbbf  c7400400000000       mov dword ptr [eax + 4], 0
// 0079fbc6  c7400800000000       mov dword ptr [eax + 8], 0
// 0079fbcd  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 0079fbd4  5e                   pop esi
// 0079fbd5  83c420               add esp, 0x20
// 0079fbd8  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItemDrawRect@CXTPControlGallery@@QAE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
