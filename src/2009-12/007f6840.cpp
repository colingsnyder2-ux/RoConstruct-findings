// roc 2009-12 007f6840  unit: CXTPControl  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6840
//
// 007f6840  83ec08               sub esp, 8
// 007f6843  53                   push ebx
// 007f6844  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007f6848  57                   push edi
// 007f6849  8bf9                 mov edi, ecx
// 007f684b  85db                 test ebx, ebx
// 007f684d  751b                 jne 0x7f686a
// 007f684f  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 007f6855  85c9                 test ecx, ecx
// 007f6857  750a                 jne 0x7f6863
// 007f6859  5f                   pop edi
// 007f685a  33c0                 xor eax, eax
// 007f685c  5b                   pop ebx
// 007f685d  83c408               add esp, 8
// 007f6860  c20c00               ret 0xc
// 007f6863  e888080100           call 0x8070f0
// 007f6868  8bd8                 mov ebx, eax
// 007f686a  55                   push ebp
// 007f686b  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007f686f  56                   push esi
// 007f6870  8b742424             mov esi, dword ptr [esp + 0x24]
// 007f6874  896e08               mov dword ptr [esi + 8], ebp
// 007f6877  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 007f687d  894604               mov dword ptr [esi + 4], eax
// 007f6880  c70600000000         mov dword ptr [esi], 0
// 007f6886  897e0c               mov dword ptr [esi + 0xc], edi
// 007f6889  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 007f688f  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007f6892  56                   push esi
// 007f6893  50                   push eax
// 007f6894  6862280000           push 0x2862
// 007f6899  51                   push ecx
// 007f689a  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007f68a0  8944241c             mov dword ptr [esp + 0x1c], eax
// 007f68a4  85c0                 test eax, eax
// 007f68a6  753d                 jne 0x7f68e5
// 007f68a8  398700010000         cmp dword ptr [edi + 0x100], eax
// 007f68ae  7435                 je 0x7f68e5
// 007f68b0  8bbf84000000         mov edi, dword ptr [edi + 0x84]
// 007f68b6  8d54241c             lea edx, [esp + 0x1c]
// 007f68ba  89542410             mov dword ptr [esp + 0x10], edx
// 007f68be  6a00                 push 0
// 007f68c0  0fb7d5               movzx edx, bp
// 007f68c3  8d4c2414             lea ecx, [esp + 0x14]
// 007f68c7  51                   push ecx
// 007f68c8  81ca00004e00         or edx, 0x4e0000
// 007f68ce  8974241c             mov dword ptr [esp + 0x1c], esi
// 007f68d2  8b03                 mov eax, dword ptr [ebx]
// 007f68d4  8b4014               mov eax, dword ptr [eax + 0x14]
// 007f68d7  52                   push edx
// 007f68d8  57                   push edi
// 007f68d9  8bcb                 mov ecx, ebx
// 007f68db  ffd0                 call eax
// 007f68dd  f7d8                 neg eax
// 007f68df  1bc0                 sbb eax, eax
// 007f68e1  2344241c             and eax, dword ptr [esp + 0x1c]
// 007f68e5  5e                   pop esi
// 007f68e6  5d                   pop ebp
// 007f68e7  5f                   pop edi
// 007f68e8  5b                   pop ebx
// 007f68e9  83c408               add esp, 8
// 007f68ec  c20c00               ret 0xc
// copied from an identical function in another client (function ?NotifySite@CXTPControl@@QAEJPAVCWnd@@IPAUNMXTPCONTROL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp