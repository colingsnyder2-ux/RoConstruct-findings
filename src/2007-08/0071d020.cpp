// from server: 100% by auto
// roc 2007-08 0071d020  unit: CXTPTabPaintManager::CColorSetWinXP  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071d020
//
// 0071d020  56                   push esi
// 0071d021  8bf1                 mov esi, ecx
// 0071d023  57                   push edi
// 0071d024  8dbe08020000         lea edi, [esi + 0x208]
// 0071d02a  8bcf                 mov ecx, edi
// 0071d02c  e8df1bf8ff           call 0x69ec10
// 0071d031  85c0                 test eax, eax
// 0071d033  7536                 jne 0x71d06b
// 0071d035  8b442420             mov eax, dword ptr [esp + 0x20]
// 0071d039  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071d03d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0071d041  50                   push eax
// 0071d042  83ec10               sub esp, 0x10
// 0071d045  8bc4                 mov eax, esp
// 0071d047  8908                 mov dword ptr [eax], ecx
// 0071d049  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0071d04d  895004               mov dword ptr [eax + 4], edx
// 0071d050  8b542430             mov edx, dword ptr [esp + 0x30]
// 0071d054  894808               mov dword ptr [eax + 8], ecx
// 0071d057  89500c               mov dword ptr [eax + 0xc], edx
// 0071d05a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0071d05e  50                   push eax
// 0071d05f  8bce                 mov ecx, esi
// 0071d061  e84ae8ffff           call 0x71b8b0
// 0071d066  5f                   pop edi
// 0071d067  5e                   pop esi
// 0071d068  c21800               ret 0x18
// 0071d06b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071d06f  8b11                 mov edx, dword ptr [ecx]
// 0071d071  8b4248               mov eax, dword ptr [edx + 0x48]
// 0071d074  ffd0                 call eax
// 0071d076  83e802               sub eax, 2
// 0071d079  740c                 je 0x71d087
// 0071d07b  83e801               sub eax, 1
// 0071d07e  750c                 jne 0x71d08c
// 0071d080  8344241801           add dword ptr [esp + 0x18], 1
// 0071d085  eb05                 jmp 0x71d08c
// 0071d087  8344241c01           add dword ptr [esp + 0x1c], 1
// 0071d08c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071d090  85c0                 test eax, eax
// 0071d092  7403                 je 0x71d097
// 0071d094  8b4004               mov eax, dword ptr [eax + 4]
// 0071d097  6a00                 push 0
// 0071d099  8d4c2414             lea ecx, [esp + 0x14]
// 0071d09d  51                   push ecx
// 0071d09e  6a00                 push 0
// 0071d0a0  6a09                 push 9
// 0071d0a2  50                   push eax
// 0071d0a3  8bcf                 mov ecx, edi
// 0071d0a5  e8e617f8ff           call 0x69e890
// 0071d0aa  5f                   pop edi
// 0071d0ab  33c0                 xor eax, eax
// 0071d0ad  5e                   pop esi
// 0071d0ae  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillClient@CColorSetWinXP@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
