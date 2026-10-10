// roc 2008-06 006aba50  unit: CXTPControl  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aba50
//
// 006aba50  83ec08               sub esp, 8
// 006aba53  53                   push ebx
// 006aba54  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006aba58  57                   push edi
// 006aba59  8bf9                 mov edi, ecx
// 006aba5b  85db                 test ebx, ebx
// 006aba5d  751b                 jne 0x6aba7a
// 006aba5f  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 006aba65  85c9                 test ecx, ecx
// 006aba67  750a                 jne 0x6aba73
// 006aba69  5f                   pop edi
// 006aba6a  33c0                 xor eax, eax
// 006aba6c  5b                   pop ebx
// 006aba6d  83c408               add esp, 8
// 006aba70  c20c00               ret 0xc
// 006aba73  e8a8bf0000           call 0x6b7a20
// 006aba78  8bd8                 mov ebx, eax
// 006aba7a  55                   push ebp
// 006aba7b  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006aba7f  56                   push esi
// 006aba80  8b742424             mov esi, dword ptr [esp + 0x24]
// 006aba84  896e08               mov dword ptr [esi + 8], ebp
// 006aba87  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 006aba8d  894604               mov dword ptr [esi + 4], eax
// 006aba90  c70600000000         mov dword ptr [esi], 0
// 006aba96  897e0c               mov dword ptr [esi + 0xc], edi
// 006aba99  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 006aba9f  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006abaa2  56                   push esi
// 006abaa3  50                   push eax
// 006abaa4  6862280000           push 0x2862
// 006abaa9  51                   push ecx
// 006abaaa  ff15142e8000         call dword ptr [0x802e14]
// 006abab0  8944241c             mov dword ptr [esp + 0x1c], eax
// 006abab4  85c0                 test eax, eax
// 006abab6  753d                 jne 0x6abaf5
// 006abab8  398700010000         cmp dword ptr [edi + 0x100], eax
// 006ababe  7435                 je 0x6abaf5
// 006abac0  8bbf84000000         mov edi, dword ptr [edi + 0x84]
// 006abac6  8d54241c             lea edx, [esp + 0x1c]
// 006abaca  89542410             mov dword ptr [esp + 0x10], edx
// 006abace  6a00                 push 0
// 006abad0  0fb7d5               movzx edx, bp
// 006abad3  8d4c2414             lea ecx, [esp + 0x14]
// 006abad7  51                   push ecx
// 006abad8  81ca00004e00         or edx, 0x4e0000
// 006abade  8974241c             mov dword ptr [esp + 0x1c], esi
// 006abae2  8b03                 mov eax, dword ptr [ebx]
// 006abae4  8b4014               mov eax, dword ptr [eax + 0x14]
// 006abae7  52                   push edx
// 006abae8  57                   push edi
// 006abae9  8bcb                 mov ecx, ebx
// 006abaeb  ffd0                 call eax
// 006abaed  f7d8                 neg eax
// 006abaef  1bc0                 sbb eax, eax
// 006abaf1  2344241c             and eax, dword ptr [esp + 0x1c]
// 006abaf5  5e                   pop esi
// 006abaf6  5d                   pop ebp
// 006abaf7  5f                   pop edi
// 006abaf8  5b                   pop ebx
// 006abaf9  83c408               add esp, 8
// 006abafc  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJPAVCWnd@@IPAUNMXTPCONTROL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
