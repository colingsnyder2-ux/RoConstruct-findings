// roc 2009-06 0080c400  unit: CXTPTabPaintManager::CColorSetWinXP  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080c400
//
// 0080c400  83ec10               sub esp, 0x10
// 0080c403  56                   push esi
// 0080c404  8bf1                 mov esi, ecx
// 0080c406  57                   push edi
// 0080c407  8d8e08020000         lea ecx, [esi + 0x208]
// 0080c40d  e88e47f8ff           call 0x790ba0
// 0080c412  85c0                 test eax, eax
// 0080c414  0f84b9000000         je 0x80c4d3
// 0080c41a  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 0080c420  8b742430             mov esi, dword ptr [esp + 0x30]
// 0080c424  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0080c42a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0080c42e  8b11                 mov edx, dword ptr [ecx]
// 0080c430  8b520c               mov edx, dword ptr [edx + 0xc]
// 0080c433  56                   push esi
// 0080c434  83ec10               sub esp, 0x10
// 0080c437  8bc4                 mov eax, esp
// 0080c439  8938                 mov dword ptr [eax], edi
// 0080c43b  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0080c43f  897804               mov dword ptr [eax + 4], edi
// 0080c442  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0080c446  897808               mov dword ptr [eax + 8], edi
// 0080c449  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0080c44d  89780c               mov dword ptr [eax + 0xc], edi
// 0080c450  8d44241c             lea eax, [esp + 0x1c]
// 0080c454  50                   push eax
// 0080c455  ffd2                 call edx
// 0080c457  8b06                 mov eax, dword ptr [esi]
// 0080c459  8b5048               mov edx, dword ptr [eax + 0x48]
// 0080c45c  8bce                 mov ecx, esi
// 0080c45e  ffd2                 call edx
// 0080c460  83f803               cmp eax, 3
// 0080c463  776e                 ja 0x80c4d3
// 0080c465  ff2485dcc48000       jmp dword ptr [eax*4 + 0x80c4dc]
// 0080c46c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080c470  8d48ff               lea ecx, [eax - 1]
// 0080c473  51                   push ecx
// 0080c474  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080c478  8d5101               lea edx, [ecx + 1]
// 0080c47b  52                   push edx
// 0080c47c  83c0fe               add eax, -2
// 0080c47f  50                   push eax
// 0080c480  51                   push ecx
// 0080c481  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080c485  e85cff0300           call 0x84c3e6
// 0080c48a  5f                   pop edi
// 0080c48b  5e                   pop esi
// 0080c48c  83c410               add esp, 0x10
// 0080c48f  c21800               ret 0x18
// 0080c492  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080c496  8d4801               lea ecx, [eax + 1]
// 0080c499  51                   push ecx
// 0080c49a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080c49e  8d5101               lea edx, [ecx + 1]
// 0080c4a1  52                   push edx
// 0080c4a2  50                   push eax
// 0080c4a3  51                   push ecx
// 0080c4a4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080c4a8  e839ff0300           call 0x84c3e6
// 0080c4ad  5f                   pop edi
// 0080c4ae  5e                   pop esi
// 0080c4af  83c410               add esp, 0x10
// 0080c4b2  c21800               ret 0x18
// 0080c4b5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080c4b9  8d4801               lea ecx, [eax + 1]
// 0080c4bc  51                   push ecx
// 0080c4bd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080c4c1  8d51ff               lea edx, [ecx - 1]
// 0080c4c4  52                   push edx
// 0080c4c5  83c1fe               add ecx, -2
// 0080c4c8  50                   push eax
// 0080c4c9  51                   push ecx
// 0080c4ca  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080c4ce  e813ff0300           call 0x84c3e6
// 0080c4d3  5f                   pop edi
// 0080c4d4  5e                   pop esi
// 0080c4d5  83c410               add esp, 0x10
// 0080c4d8  c21800               ret 0x18
// 0080c4db  90                   nop 
// 0080c4dc  92                   xchg edx, eax
// 0080c4dd  c4800092c480         les eax, ptr [eax - 0x7f3b6e00]
// 0080c4e3  006cc480             add byte ptr [esp + eax*8 - 0x80], ch
// copied from an identical function in another client (function ?SelectClipRgn@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp