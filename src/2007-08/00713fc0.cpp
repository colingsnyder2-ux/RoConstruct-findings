// from server: 100% by auto
// roc 2007-08 00713fc0  unit: CXTCaptionThemeOffice2003  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713fc0
//
// 00713fc0  56                   push esi
// 00713fc1  8b742408             mov esi, dword ptr [esp + 8]
// 00713fc5  57                   push edi
// 00713fc6  6a01                 push 1
// 00713fc8  8bce                 mov ecx, esi
// 00713fca  e819440200           call 0x7383e8
// 00713fcf  8b442410             mov eax, dword ptr [esp + 0x10]
// 00713fd3  80b88100000000       cmp byte ptr [eax + 0x81], 0
// 00713fda  744e                 je 0x71402a
// 00713fdc  53                   push ebx
// 00713fdd  e88e4ff5ff           call 0x668f70
// 00713fe2  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00713fe6  6a00                 push 0
// 00713fe8  6a00                 push 0
// 00713fea  83c020               add eax, 0x20
// 00713fed  50                   push eax
// 00713fee  57                   push edi
// 00713fef  56                   push esi
// 00713ff0  e84be2f6ff           call 0x682240
// 00713ff5  8bc8                 mov ecx, eax
// 00713ff7  e864e5f6ff           call 0x682560
// 00713ffc  e86f4ff5ff           call 0x668f70
// 00714001  6a36                 push 0x36
// 00714003  8bc8                 mov ecx, eax
// 00714005  e86647f5ff           call 0x668770
// 0071400a  8bd8                 mov ebx, eax
// 0071400c  e85f4ff5ff           call 0x668f70
// 00714011  6a36                 push 0x36
// 00714013  8bc8                 mov ecx, eax
// 00714015  e85647f5ff           call 0x668770
// 0071401a  53                   push ebx
// 0071401b  50                   push eax
// 0071401c  57                   push edi
// 0071401d  8bce                 mov ecx, esi
// 0071401f  e886c8f1ff           call 0x6308aa
// 00714024  5b                   pop ebx
// 00714025  5f                   pop edi
// 00714026  5e                   pop esi
// 00714027  c20c00               ret 0xc
// 0071402a  e8414ff5ff           call 0x668f70
// 0071402f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00714033  6a00                 push 0
// 00714035  6a00                 push 0
// 00714037  0580000000           add eax, 0x80
// 0071403c  50                   push eax
// 0071403d  57                   push edi
// 0071403e  56                   push esi
// 0071403f  e8fce1f6ff           call 0x682240
// 00714044  8bc8                 mov ecx, eax
// 00714046  e815e5f6ff           call 0x682560
// 0071404b  e8204ff5ff           call 0x668f70
// 00714050  6a36                 push 0x36
// 00714052  8bc8                 mov ecx, eax
// 00714054  e81747f5ff           call 0x668770
// 00714059  8b0f                 mov ecx, dword ptr [edi]
// 0071405b  8b5708               mov edx, dword ptr [edi + 8]
// 0071405e  50                   push eax
// 0071405f  8b470c               mov eax, dword ptr [edi + 0xc]
// 00714062  6a01                 push 1
// 00714064  2bd1                 sub edx, ecx
// 00714066  52                   push edx
// 00714067  83e801               sub eax, 1
// 0071406a  50                   push eax
// 0071406b  51                   push ecx
// 0071406c  8bce                 mov ecx, esi
// 0071406e  e857430200           call 0x7383ca
// 00714073  5f                   pop edi
// 00714074  5e                   pop esi
// 00714075  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionBack@CXTCaptionThemeOffice2003@@MAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp
