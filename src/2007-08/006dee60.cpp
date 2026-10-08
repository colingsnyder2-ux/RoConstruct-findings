// from server: 100% by auto
// roc 2007-08 006dee60  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dee60
//
// 006dee60  83ec48               sub esp, 0x48
// 006dee63  53                   push ebx
// 006dee64  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 006dee68  56                   push esi
// 006dee69  53                   push ebx
// 006dee6a  8bf1                 mov esi, ecx
// 006dee6c  e8e19d0500           call 0x738c52
// 006dee71  83be1c01000000       cmp dword ptr [esi + 0x11c], 0
// 006dee78  0f84c4000000         je 0x6def42
// 006dee7e  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 006dee85  740d                 je 0x6dee94
// 006dee87  83be3801000000       cmp dword ptr [esi + 0x138], 0
// 006dee8e  0f84ae000000         je 0x6def42
// 006dee94  83be3c01000000       cmp dword ptr [esi + 0x13c], 0
// 006dee9b  0f85a1000000         jne 0x6def42
// 006deea1  55                   push ebp
// 006deea2  57                   push edi
// 006deea3  56                   push esi
// 006deea4  8d4c2424             lea ecx, [esp + 0x24]
// 006deea8  e8f310faff           call 0x67ffa0
// 006deead  56                   push esi
// 006deeae  8d4c2414             lea ecx, [esp + 0x14]
// 006deeb2  e84911faff           call 0x680000
// 006deeb7  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006deebb  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006deebf  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 006deec3  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 006deec7  8b542418             mov edx, dword ptr [esp + 0x18]
// 006deecb  8b442428             mov eax, dword ptr [esp + 0x28]
// 006deecf  2b442420             sub eax, dword ptr [esp + 0x20]
// 006deed3  2b542410             sub edx, dword ptr [esp + 0x10]
// 006deed7  8bb61c010000         mov esi, dword ptr [esi + 0x11c]
// 006deedd  2bc2                 sub eax, edx
// 006deedf  2bcf                 sub ecx, edi
// 006deee1  8bf9                 mov edi, ecx
// 006deee3  8be8                 mov ebp, eax
// 006deee5  8b4620               mov eax, dword ptr [esi + 0x20]
// 006deee8  8b4010               mov eax, dword ptr [eax + 0x10]
// 006deeeb  8d4e20               lea ecx, [esi + 0x20]
// 006deeee  8d542430             lea edx, [esp + 0x30]
// 006deef2  52                   push edx
// 006deef3  ffd0                 call eax
// 006deef5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006deef9  8d0429               lea eax, [ecx + ebp]
// 006deefc  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 006deeff  3bc8                 cmp ecx, eax
// 006def01  7e02                 jle 0x6def05
// 006def03  8bc1                 mov eax, ecx
// 006def05  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 006def09  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 006def0c  894318               mov dword ptr [ebx + 0x18], eax
// 006def0f  8d0417               lea eax, [edi + edx]
// 006def12  3bc8                 cmp ecx, eax
// 006def14  7e02                 jle 0x6def18
// 006def16  8bc1                 mov eax, ecx
// 006def18  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006def1b  89431c               mov dword ptr [ebx + 0x1c], eax
// 006def1e  8b442450             mov eax, dword ptr [esp + 0x50]
// 006def22  03c5                 add eax, ebp
// 006def24  3bc8                 cmp ecx, eax
// 006def26  7d02                 jge 0x6def2a
// 006def28  8bc1                 mov eax, ecx
// 006def2a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 006def2e  894320               mov dword ptr [ebx + 0x20], eax
// 006def31  8d0439               lea eax, [ecx + edi]
// 006def34  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 006def37  3bc8                 cmp ecx, eax
// 006def39  5f                   pop edi
// 006def3a  5d                   pop ebp
// 006def3b  7d02                 jge 0x6def3f
// 006def3d  8bc1                 mov eax, ecx
// 006def3f  894324               mov dword ptr [ebx + 0x24], eax
// 006def42  5e                   pop esi
// 006def43  5b                   pop ebx
// 006def44  83c448               add esp, 0x48
// 006def47  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnGetMinMaxInfo@CXTPDockingPaneMiniWnd@@IAEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
