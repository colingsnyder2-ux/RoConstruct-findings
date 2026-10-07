// roc 2008-06 0079bd70  unit: CXTPTabPaintManager::CColorSetWinXP  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079bd70
//
// 0079bd70  83ec10               sub esp, 0x10
// 0079bd73  56                   push esi
// 0079bd74  8bf1                 mov esi, ecx
// 0079bd76  57                   push edi
// 0079bd77  8d8e08020000         lea ecx, [esi + 0x208]
// 0079bd7d  e8aec6f7ff           call 0x718430
// 0079bd82  85c0                 test eax, eax
// 0079bd84  0f84b9000000         je 0x79be43
// 0079bd8a  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 0079bd90  8b742430             mov esi, dword ptr [esp + 0x30]
// 0079bd94  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0079bd9a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0079bd9e  8b11                 mov edx, dword ptr [ecx]
// 0079bda0  8b520c               mov edx, dword ptr [edx + 0xc]
// 0079bda3  56                   push esi
// 0079bda4  83ec10               sub esp, 0x10
// 0079bda7  8bc4                 mov eax, esp
// 0079bda9  8938                 mov dword ptr [eax], edi
// 0079bdab  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0079bdaf  897804               mov dword ptr [eax + 4], edi
// 0079bdb2  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0079bdb6  897808               mov dword ptr [eax + 8], edi
// 0079bdb9  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0079bdbd  89780c               mov dword ptr [eax + 0xc], edi
// 0079bdc0  8d44241c             lea eax, [esp + 0x1c]
// 0079bdc4  50                   push eax
// 0079bdc5  ffd2                 call edx
// 0079bdc7  8b06                 mov eax, dword ptr [esi]
// 0079bdc9  8b5048               mov edx, dword ptr [eax + 0x48]
// 0079bdcc  8bce                 mov ecx, esi
// 0079bdce  ffd2                 call edx
// 0079bdd0  83f803               cmp eax, 3
// 0079bdd3  776e                 ja 0x79be43
// 0079bdd5  ff24854cbe7900       jmp dword ptr [eax*4 + 0x79be4c]
// 0079bddc  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079bde0  8d48ff               lea ecx, [eax - 1]
// 0079bde3  51                   push ecx
// 0079bde4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079bde8  8d5101               lea edx, [ecx + 1]
// 0079bdeb  52                   push edx
// 0079bdec  83c0fe               add eax, -2
// 0079bdef  50                   push eax
// 0079bdf0  51                   push ecx
// 0079bdf1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0079bdf5  e83e070200           call 0x7bc538
// 0079bdfa  5f                   pop edi
// 0079bdfb  5e                   pop esi
// 0079bdfc  83c410               add esp, 0x10
// 0079bdff  c21800               ret 0x18
// 0079be02  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0079be06  8d4801               lea ecx, [eax + 1]
// 0079be09  51                   push ecx
// 0079be0a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079be0e  8d5101               lea edx, [ecx + 1]
// 0079be11  52                   push edx
// 0079be12  50                   push eax
// 0079be13  51                   push ecx
// 0079be14  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0079be18  e81b070200           call 0x7bc538
// 0079be1d  5f                   pop edi
// 0079be1e  5e                   pop esi
// 0079be1f  83c410               add esp, 0x10
// 0079be22  c21800               ret 0x18
// 0079be25  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0079be29  8d4801               lea ecx, [eax + 1]
// 0079be2c  51                   push ecx
// 0079be2d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079be31  8d51ff               lea edx, [ecx - 1]
// 0079be34  52                   push edx
// 0079be35  83c1fe               add ecx, -2
// 0079be38  50                   push eax
// 0079be39  51                   push ecx
// 0079be3a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0079be3e  e8f5060200           call 0x7bc538
// 0079be43  5f                   pop edi
// 0079be44  5e                   pop esi
// 0079be45  83c410               add esp, 0x10
// 0079be48  c21800               ret 0x18
// 0079be4b  90                   nop 
// 0079be4c  02be790002be         add bh, byte ptr [esi - 0x41fdff87]
// 0079be52  7900                 jns 0x79be54
// 0079be54  dcbd790025be         fdivr qword ptr [ebp - 0x41daff87]
// 0079be5a  7900                 jns 0x79be5c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?SelectClipRgn@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
