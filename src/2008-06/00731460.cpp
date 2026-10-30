// from server: 100% by auto
// roc 2008-06 00731460  unit: CXTPControlGallery  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00731460
//
// 00731460  8b442408             mov eax, dword ptr [esp + 8]
// 00731464  83ec20               sub esp, 0x20
// 00731467  56                   push esi
// 00731468  8bf1                 mov esi, ecx
// 0073146a  85c0                 test eax, eax
// 0073146c  7c77                 jl 0x7314e5
// 0073146e  3b8654020000         cmp eax, dword ptr [esi + 0x254]
// 00731474  7d6f                 jge 0x7314e5
// 00731476  8b8e50020000         mov ecx, dword ptr [esi + 0x250]
// 0073147c  8d0440               lea eax, [eax + eax*2]
// 0073147f  8d14c1               lea edx, [ecx + eax*8]
// 00731482  52                   push edx
// 00731483  8d442408             lea eax, [esp + 8]
// 00731487  50                   push eax
// 00731488  ff15702d8000         call dword ptr [0x802d70]
// 0073148e  8b8e0c020000         mov ecx, dword ptr [esi + 0x20c]
// 00731494  f7d9                 neg ecx
// 00731496  51                   push ecx
// 00731497  6a00                 push 0
// 00731499  8d54240c             lea edx, [esp + 0xc]
// 0073149d  52                   push edx
// 0073149e  ff15682d8000         call dword ptr [0x802d68]
// 007314a4  8d442414             lea eax, [esp + 0x14]
// 007314a8  50                   push eax
// 007314a9  8bce                 mov ecx, esi
// 007314ab  e890d9ffff           call 0x72ee40
// 007314b0  50                   push eax
// 007314b1  8d4c2408             lea ecx, [esp + 8]
// 007314b5  51                   push ecx
// 007314b6  8bd1                 mov edx, ecx
// 007314b8  52                   push edx
// 007314b9  ff155c2b8000         call dword ptr [0x802b5c]
// 007314bf  8b442428             mov eax, dword ptr [esp + 0x28]
// 007314c3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007314c7  8b542408             mov edx, dword ptr [esp + 8]
// 007314cb  8908                 mov dword ptr [eax], ecx
// 007314cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007314d1  895004               mov dword ptr [eax + 4], edx
// 007314d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007314d8  894808               mov dword ptr [eax + 8], ecx
// 007314db  89500c               mov dword ptr [eax + 0xc], edx
// 007314de  5e                   pop esi
// 007314df  83c420               add esp, 0x20
// 007314e2  c20800               ret 8
// 007314e5  8b442428             mov eax, dword ptr [esp + 0x28]
// 007314e9  c70000000000         mov dword ptr [eax], 0
// 007314ef  c7400400000000       mov dword ptr [eax + 4], 0
// 007314f6  c7400800000000       mov dword ptr [eax + 8], 0
// 007314fd  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 00731504  5e                   pop esi
// 00731505  83c420               add esp, 0x20
// 00731508  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItemDrawRect@CXTPControlGallery@@QAE?AVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
