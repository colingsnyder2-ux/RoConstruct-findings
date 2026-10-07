// roc 2008-06 007a3260  unit: CXTButtonThemeOffice2003  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a3260
//
// 007a3260  56                   push esi
// 007a3261  8bf1                 mov esi, ecx
// 007a3263  8b4604               mov eax, dword ptr [esi + 4]
// 007a3266  85c0                 test eax, eax
// 007a3268  7414                 je 0x7a327e
// 007a326a  50                   push eax
// 007a326b  ff15d42c8000         call dword ptr [0x802cd4]
// 007a3271  8b442408             mov eax, dword ptr [esp + 8]
// 007a3275  894604               mov dword ptr [esi + 4], eax
// 007a3278  8bc6                 mov eax, esi
// 007a327a  5e                   pop esi
// 007a327b  c20400               ret 4
// 007a327e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007a3282  894e04               mov dword ptr [esi + 4], ecx
// 007a3285  8bc6                 mov eax, esi
// 007a3287  5e                   pop esi
// 007a3288  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTUtil.cpp (function ??4CXTIconHandle@@QAEAAV0@PAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTUtil.cpp
