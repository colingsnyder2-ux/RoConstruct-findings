// roc 2012-06 00a6cbd0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6cbd0
//
// 00a6cbd0  83ec10               sub esp, 0x10
// 00a6cbd3  56                   push esi
// 00a6cbd4  8bf1                 mov esi, ecx
// 00a6cbd6  57                   push edi
// 00a6cbd7  8d8e08020000         lea ecx, [esi + 0x208]
// 00a6cbdd  e88e8cf8ff           call 0x9f5870
// 00a6cbe2  85c0                 test eax, eax
// 00a6cbe4  0f84b9000000         je 0xa6cca3
// 00a6cbea  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 00a6cbf0  8b742430             mov esi, dword ptr [esp + 0x30]
// 00a6cbf4  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00a6cbfa  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a6cbfe  8b11                 mov edx, dword ptr [ecx]
// 00a6cc00  8b520c               mov edx, dword ptr [edx + 0xc]
// 00a6cc03  56                   push esi
// 00a6cc04  83ec10               sub esp, 0x10
// 00a6cc07  8bc4                 mov eax, esp
// 00a6cc09  8938                 mov dword ptr [eax], edi
// 00a6cc0b  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00a6cc0f  897804               mov dword ptr [eax + 4], edi
// 00a6cc12  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00a6cc16  897808               mov dword ptr [eax + 8], edi
// 00a6cc19  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00a6cc1d  89780c               mov dword ptr [eax + 0xc], edi
// 00a6cc20  8d44241c             lea eax, [esp + 0x1c]
// 00a6cc24  50                   push eax
// 00a6cc25  ffd2                 call edx
// 00a6cc27  8b06                 mov eax, dword ptr [esi]
// 00a6cc29  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a6cc2c  8bce                 mov ecx, esi
// 00a6cc2e  ffd2                 call edx
// 00a6cc30  83f803               cmp eax, 3
// 00a6cc33  776e                 ja 0xa6cca3
// 00a6cc35  ff2485accca600       jmp dword ptr [eax*4 + 0xa6ccac]
// 00a6cc3c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a6cc40  8d48ff               lea ecx, [eax - 1]
// 00a6cc43  51                   push ecx
// 00a6cc44  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a6cc48  8d5101               lea edx, [ecx + 1]
// 00a6cc4b  52                   push edx
// 00a6cc4c  83c0fe               add eax, -2
// 00a6cc4f  50                   push eax
// 00a6cc50  51                   push ecx
// 00a6cc51  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a6cc55  e884cc0200           call 0xa998de
// 00a6cc5a  5f                   pop edi
// 00a6cc5b  5e                   pop esi
// 00a6cc5c  83c410               add esp, 0x10
// 00a6cc5f  c21800               ret 0x18
// 00a6cc62  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a6cc66  8d4801               lea ecx, [eax + 1]
// 00a6cc69  51                   push ecx
// 00a6cc6a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a6cc6e  8d5101               lea edx, [ecx + 1]
// 00a6cc71  52                   push edx
// 00a6cc72  50                   push eax
// 00a6cc73  51                   push ecx
// 00a6cc74  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a6cc78  e861cc0200           call 0xa998de
// 00a6cc7d  5f                   pop edi
// 00a6cc7e  5e                   pop esi
// 00a6cc7f  83c410               add esp, 0x10
// 00a6cc82  c21800               ret 0x18
// 00a6cc85  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a6cc89  8d4801               lea ecx, [eax + 1]
// 00a6cc8c  51                   push ecx
// 00a6cc8d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a6cc91  8d51ff               lea edx, [ecx - 1]
// 00a6cc94  52                   push edx
// 00a6cc95  83c1fe               add ecx, -2
// 00a6cc98  50                   push eax
// 00a6cc99  51                   push ecx
// 00a6cc9a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a6cc9e  e83bcc0200           call 0xa998de
// 00a6cca3  5f                   pop edi
// 00a6cca4  5e                   pop esi
// 00a6cca5  83c410               add esp, 0x10
// 00a6cca8  c21800               ret 0x18
// 00a6ccab  90                   nop 
// copied from an identical function in another client (function ?SelectClipRgn@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp