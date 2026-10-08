// roc 2012-06 00a38990  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a38990
//
// 00a38990  83ec48               sub esp, 0x48
// 00a38993  53                   push ebx
// 00a38994  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00a38998  56                   push esi
// 00a38999  53                   push ebx
// 00a3899a  8bf1                 mov esi, ecx
// 00a3899c  e899130600           call 0xa99d3a
// 00a389a1  83be3001000000       cmp dword ptr [esi + 0x130], 0
// 00a389a8  0f84c4000000         je 0xa38a72
// 00a389ae  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 00a389b5  740d                 je 0xa389c4
// 00a389b7  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 00a389be  0f84ae000000         je 0xa38a72
// 00a389c4  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00a389cb  0f85a1000000         jne 0xa38a72
// 00a389d1  55                   push ebp
// 00a389d2  57                   push edi
// 00a389d3  56                   push esi
// 00a389d4  8d4c2424             lea ecx, [esp + 0x24]
// 00a389d8  e863c7f9ff           call 0x9d5140
// 00a389dd  56                   push esi
// 00a389de  8d4c2414             lea ecx, [esp + 0x14]
// 00a389e2  e8b9c7f9ff           call 0x9d51a0
// 00a389e7  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a389eb  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a389ef  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 00a389f3  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 00a389f7  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a389fb  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a389ff  2b442420             sub eax, dword ptr [esp + 0x20]
// 00a38a03  2b542410             sub edx, dword ptr [esp + 0x10]
// 00a38a07  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 00a38a0d  2bc2                 sub eax, edx
// 00a38a0f  2bcf                 sub ecx, edi
// 00a38a11  8bf9                 mov edi, ecx
// 00a38a13  8be8                 mov ebp, eax
// 00a38a15  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a38a18  8b4010               mov eax, dword ptr [eax + 0x10]
// 00a38a1b  8d4e20               lea ecx, [esi + 0x20]
// 00a38a1e  8d542430             lea edx, [esp + 0x30]
// 00a38a22  52                   push edx
// 00a38a23  ffd0                 call eax
// 00a38a25  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a38a29  8d0429               lea eax, [ecx + ebp]
// 00a38a2c  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 00a38a2f  3bc8                 cmp ecx, eax
// 00a38a31  7e02                 jle 0xa38a35
// 00a38a33  8bc1                 mov eax, ecx
// 00a38a35  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a38a39  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00a38a3c  894318               mov dword ptr [ebx + 0x18], eax
// 00a38a3f  8d0417               lea eax, [edi + edx]
// 00a38a42  3bc8                 cmp ecx, eax
// 00a38a44  7e02                 jle 0xa38a48
// 00a38a46  8bc1                 mov eax, ecx
// 00a38a48  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00a38a4b  89431c               mov dword ptr [ebx + 0x1c], eax
// 00a38a4e  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a38a52  03c5                 add eax, ebp
// 00a38a54  3bc8                 cmp ecx, eax
// 00a38a56  7d02                 jge 0xa38a5a
// 00a38a58  8bc1                 mov eax, ecx
// 00a38a5a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a38a5e  894320               mov dword ptr [ebx + 0x20], eax
// 00a38a61  8d0439               lea eax, [ecx + edi]
// 00a38a64  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00a38a67  3bc8                 cmp ecx, eax
// 00a38a69  5f                   pop edi
// 00a38a6a  5d                   pop ebp
// 00a38a6b  7d02                 jge 0xa38a6f
// 00a38a6d  8bc1                 mov eax, ecx
// 00a38a6f  894324               mov dword ptr [ebx + 0x24], eax
// 00a38a72  5e                   pop esi
// 00a38a73  5b                   pop ebx
// 00a38a74  83c448               add esp, 0x48
// 00a38a77  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnGetMinMaxInfo@CXTPDockingPaneMiniWnd@@IAEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
