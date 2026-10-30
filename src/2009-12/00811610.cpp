// roc 2009-12 00811610  unit: CXTPToolBar  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00811610
//
// 00811610  56                   push esi
// 00811611  8bf1                 mov esi, ecx
// 00811613  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 0081161a  7465                 je 0x811681
// 0081161c  57                   push edi
// 0081161d  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00811621  8d47f6               lea eax, [edi - 0xa]
// 00811624  83f807               cmp eax, 7
// 00811627  7745                 ja 0x81166e
// 00811629  e87c4f1100           call 0x9265aa
// 0081162e  8b0d80d79800         mov ecx, dword ptr [0x98d780]
// 00811634  6a13                 push 0x13
// 00811636  6a00                 push 0
// 00811638  6a00                 push 0
// 0081163a  6a00                 push 0
// 0081163c  6a00                 push 0
// 0081163e  51                   push ecx
// 0081163f  8bce                 mov ecx, esi
// 00811641  e8e625feff           call 0x7f3c2c
// 00811646  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0081164c  e88f480000           call 0x815ee0
// 00811651  8b442414             mov eax, dword ptr [esp + 0x14]
// 00811655  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0081165b  8b11                 mov edx, dword ptr [ecx]
// 0081165d  8b5208               mov edx, dword ptr [edx + 8]
// 00811660  50                   push eax
// 00811661  8b442414             mov eax, dword ptr [esp + 0x14]
// 00811665  50                   push eax
// 00811666  57                   push edi
// 00811667  ffd2                 call edx
// 00811669  5f                   pop edi
// 0081166a  5e                   pop esi
// 0081166b  c20c00               ret 0xc
// 0081166e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00811672  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00811676  50                   push eax
// 00811677  51                   push ecx
// 00811678  57                   push edi
// 00811679  8bce                 mov ecx, esi
// 0081167b  e8106fffff           call 0x808590
// 00811680  5f                   pop edi
// 00811681  5e                   pop esi
// 00811682  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnNcLButtonDown@CXTPToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp