// roc 2009-12 008af060  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008af060
//
// 008af060  83ec48               sub esp, 0x48
// 008af063  53                   push ebx
// 008af064  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 008af068  56                   push esi
// 008af069  53                   push ebx
// 008af06a  8bf1                 mov esi, ecx
// 008af06c  e8957c0700           call 0x926d06
// 008af071  83be3001000000       cmp dword ptr [esi + 0x130], 0
// 008af078  0f84c4000000         je 0x8af142
// 008af07e  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008af085  740d                 je 0x8af094
// 008af087  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 008af08e  0f84ae000000         je 0x8af142
// 008af094  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008af09b  0f85a1000000         jne 0x8af142
// 008af0a1  55                   push ebp
// 008af0a2  57                   push edi
// 008af0a3  56                   push esi
// 008af0a4  8d4c2424             lea ecx, [esp + 0x24]
// 008af0a8  e8c3c1f9ff           call 0x84b270
// 008af0ad  56                   push esi
// 008af0ae  8d4c2414             lea ecx, [esp + 0x14]
// 008af0b2  e819c2f9ff           call 0x84b2d0
// 008af0b7  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008af0bb  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008af0bf  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 008af0c3  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 008af0c7  8b542418             mov edx, dword ptr [esp + 0x18]
// 008af0cb  8b442428             mov eax, dword ptr [esp + 0x28]
// 008af0cf  2b442420             sub eax, dword ptr [esp + 0x20]
// 008af0d3  2b542410             sub edx, dword ptr [esp + 0x10]
// 008af0d7  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 008af0dd  2bc2                 sub eax, edx
// 008af0df  2bcf                 sub ecx, edi
// 008af0e1  8bf9                 mov edi, ecx
// 008af0e3  8be8                 mov ebp, eax
// 008af0e5  8b4620               mov eax, dword ptr [esi + 0x20]
// 008af0e8  8b4010               mov eax, dword ptr [eax + 0x10]
// 008af0eb  8d4e20               lea ecx, [esi + 0x20]
// 008af0ee  8d542430             lea edx, [esp + 0x30]
// 008af0f2  52                   push edx
// 008af0f3  ffd0                 call eax
// 008af0f5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008af0f9  8d0429               lea eax, [ecx + ebp]
// 008af0fc  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 008af0ff  3bc8                 cmp ecx, eax
// 008af101  7e02                 jle 0x8af105
// 008af103  8bc1                 mov eax, ecx
// 008af105  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008af109  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008af10c  894318               mov dword ptr [ebx + 0x18], eax
// 008af10f  8d0417               lea eax, [edi + edx]
// 008af112  3bc8                 cmp ecx, eax
// 008af114  7e02                 jle 0x8af118
// 008af116  8bc1                 mov eax, ecx
// 008af118  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008af11b  89431c               mov dword ptr [ebx + 0x1c], eax
// 008af11e  8b442450             mov eax, dword ptr [esp + 0x50]
// 008af122  03c5                 add eax, ebp
// 008af124  3bc8                 cmp ecx, eax
// 008af126  7d02                 jge 0x8af12a
// 008af128  8bc1                 mov eax, ecx
// 008af12a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008af12e  894320               mov dword ptr [ebx + 0x20], eax
// 008af131  8d0439               lea eax, [ecx + edi]
// 008af134  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008af137  3bc8                 cmp ecx, eax
// 008af139  5f                   pop edi
// 008af13a  5d                   pop ebp
// 008af13b  7d02                 jge 0x8af13f
// 008af13d  8bc1                 mov eax, ecx
// 008af13f  894324               mov dword ptr [ebx + 0x24], eax
// 008af142  5e                   pop esi
// 008af143  5b                   pop ebx
// 008af144  83c448               add esp, 0x48
// 008af147  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnGetMinMaxInfo@CXTPDockingPaneMiniWnd@@IAEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
