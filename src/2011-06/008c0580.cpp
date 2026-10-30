// roc 2011-06 008c0580  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c0580
//
// 008c0580  83ec48               sub esp, 0x48
// 008c0583  53                   push ebx
// 008c0584  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 008c0588  56                   push esi
// 008c0589  53                   push ebx
// 008c058a  8bf1                 mov esi, ecx
// 008c058c  e8fbc71000           call 0x9ccd8c
// 008c0591  83be3001000000       cmp dword ptr [esi + 0x130], 0
// 008c0598  0f84c4000000         je 0x8c0662
// 008c059e  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008c05a5  740d                 je 0x8c05b4
// 008c05a7  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 008c05ae  0f84ae000000         je 0x8c0662
// 008c05b4  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008c05bb  0f85a1000000         jne 0x8c0662
// 008c05c1  55                   push ebp
// 008c05c2  57                   push edi
// 008c05c3  56                   push esi
// 008c05c4  8d4c2424             lea ecx, [esp + 0x24]
// 008c05c8  e863c7f9ff           call 0x85cd30
// 008c05cd  56                   push esi
// 008c05ce  8d4c2414             lea ecx, [esp + 0x14]
// 008c05d2  e8b9c7f9ff           call 0x85cd90
// 008c05d7  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008c05db  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008c05df  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 008c05e3  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 008c05e7  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c05eb  8b442428             mov eax, dword ptr [esp + 0x28]
// 008c05ef  2b442420             sub eax, dword ptr [esp + 0x20]
// 008c05f3  2b542410             sub edx, dword ptr [esp + 0x10]
// 008c05f7  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 008c05fd  2bc2                 sub eax, edx
// 008c05ff  2bcf                 sub ecx, edi
// 008c0601  8bf9                 mov edi, ecx
// 008c0603  8be8                 mov ebp, eax
// 008c0605  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c0608  8b4010               mov eax, dword ptr [eax + 0x10]
// 008c060b  8d4e20               lea ecx, [esi + 0x20]
// 008c060e  8d542430             lea edx, [esp + 0x30]
// 008c0612  52                   push edx
// 008c0613  ffd0                 call eax
// 008c0615  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008c0619  8d0429               lea eax, [ecx + ebp]
// 008c061c  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 008c061f  3bc8                 cmp ecx, eax
// 008c0621  7e02                 jle 0x8c0625
// 008c0623  8bc1                 mov eax, ecx
// 008c0625  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008c0629  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008c062c  894318               mov dword ptr [ebx + 0x18], eax
// 008c062f  8d0417               lea eax, [edi + edx]
// 008c0632  3bc8                 cmp ecx, eax
// 008c0634  7e02                 jle 0x8c0638
// 008c0636  8bc1                 mov eax, ecx
// 008c0638  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008c063b  89431c               mov dword ptr [ebx + 0x1c], eax
// 008c063e  8b442450             mov eax, dword ptr [esp + 0x50]
// 008c0642  03c5                 add eax, ebp
// 008c0644  3bc8                 cmp ecx, eax
// 008c0646  7d02                 jge 0x8c064a
// 008c0648  8bc1                 mov eax, ecx
// 008c064a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008c064e  894320               mov dword ptr [ebx + 0x20], eax
// 008c0651  8d0439               lea eax, [ecx + edi]
// 008c0654  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 008c0657  3bc8                 cmp ecx, eax
// 008c0659  5f                   pop edi
// 008c065a  5d                   pop ebp
// 008c065b  7d02                 jge 0x8c065f
// 008c065d  8bc1                 mov eax, ecx
// 008c065f  894324               mov dword ptr [ebx + 0x24], eax
// 008c0662  5e                   pop esi
// 008c0663  5b                   pop ebx
// 008c0664  83c448               add esp, 0x48
// 008c0667  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnGetMinMaxInfo@CXTPDockingPaneMiniWnd@@IAEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
