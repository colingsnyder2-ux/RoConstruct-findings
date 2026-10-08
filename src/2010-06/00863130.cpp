// roc 2010-06 00863130  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00863130
//
// 00863130  83ec48               sub esp, 0x48
// 00863133  53                   push ebx
// 00863134  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00863138  56                   push esi
// 00863139  53                   push ebx
// 0086313a  8bf1                 mov esi, ecx
// 0086313c  e807a51100           call 0x97d648
// 00863141  83be3001000000       cmp dword ptr [esi + 0x130], 0
// 00863148  0f84c4000000         je 0x863212
// 0086314e  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 00863155  740d                 je 0x863164
// 00863157  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 0086315e  0f84ae000000         je 0x863212
// 00863164  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0086316b  0f85a1000000         jne 0x863212
// 00863171  55                   push ebp
// 00863172  57                   push edi
// 00863173  56                   push esi
// 00863174  8d4c2424             lea ecx, [esp + 0x24]
// 00863178  e833c1f9ff           call 0x7ff2b0
// 0086317d  56                   push esi
// 0086317e  8d4c2414             lea ecx, [esp + 0x14]
// 00863182  e889c1f9ff           call 0x7ff310
// 00863187  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0086318b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0086318f  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 00863193  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 00863197  8b542418             mov edx, dword ptr [esp + 0x18]
// 0086319b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0086319f  2b442420             sub eax, dword ptr [esp + 0x20]
// 008631a3  2b542410             sub edx, dword ptr [esp + 0x10]
// 008631a7  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 008631ad  2bc2                 sub eax, edx
// 008631af  2bcf                 sub ecx, edi
// 008631b1  8bf9                 mov edi, ecx
// 008631b3  8be8                 mov ebp, eax
// 008631b5  8b4620               mov eax, dword ptr [esi + 0x20]
// 008631b8  8b4010               mov eax, dword ptr [eax + 0x10]
// 008631bb  8d4e20               lea ecx, [esi + 0x20]
// 008631be  8d542430             lea edx, [esp + 0x30]
// 008631c2  52                   push edx
// 008631c3  ffd0                 call eax
// 008631c5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008631c9  8d0429               lea eax, [ecx + ebp]
// 008631cc  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 008631cf  3bc8                 cmp ecx, eax
// 008631d1  7e02                 jle 0x8631d5
// 008631d3  8bc1                 mov eax, ecx
// 008631d5  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008631d9  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008631dc  894318               mov dword ptr [ebx + 0x18], eax
// 008631df  8d0417               lea eax, [edi + edx]
// 008631e2  3bc8                 cmp ecx, eax
// 008631e4  7e02                 jle 0x8631e8
// 008631e6  8bc1                 mov eax, ecx
// 008631e8  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008631eb  89431c               mov dword ptr [ebx + 0x1c], eax
// 008631ee  8b442450             mov eax, dword ptr [esp + 0x50]
// 008631f2  03c5                 add eax, ebp
// 008631f4  3bc8                 cmp ecx, eax
// 008631f6  7d02                 jge 0x8631fa
// 008631f8  8bc1                 mov eax, ecx
// 008631fa  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008631fe  894320               mov dword ptr [ebx + 0x20], eax
// 00863201  8d0439               lea eax, [ecx + edi]
// 00863204  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00863207  3bc8                 cmp ecx, eax
// 00863209  5f                   pop edi
// 0086320a  5d                   pop ebp
// 0086320b  7d02                 jge 0x86320f
// 0086320d  8bc1                 mov eax, ecx
// 0086320f  894324               mov dword ptr [ebx + 0x24], eax
// 00863212  5e                   pop esi
// 00863213  5b                   pop ebx
// 00863214  83c448               add esp, 0x48
// 00863217  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnGetMinMaxInfo@CXTPDockingPaneMiniWnd@@IAEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
