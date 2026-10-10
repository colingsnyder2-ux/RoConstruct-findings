// roc 2008-06 0071a670  unit: CXTPNewToolbarDlg  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071a670
//
// 0071a670  56                   push esi
// 0071a671  8bf1                 mov esi, ecx
// 0071a673  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0071a676  85c9                 test ecx, ecx
// 0071a678  7506                 jne 0x71a680
// 0071a67a  33c0                 xor eax, eax
// 0071a67c  5e                   pop esi
// 0071a67d  c20800               ret 8
// 0071a680  8b4614               mov eax, dword ptr [esi + 0x14]
// 0071a683  85c0                 test eax, eax
// 0071a685  750a                 jne 0x71a691
// 0071a687  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 0071a68d  85c0                 test eax, eax
// 0071a68f  74e9                 je 0x71a67a
// 0071a691  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071a695  894e04               mov dword ptr [esi + 4], ecx
// 0071a698  8b4020               mov eax, dword ptr [eax + 0x20]
// 0071a69b  57                   push edi
// 0071a69c  50                   push eax
// 0071a69d  8906                 mov dword ptr [esi], eax
// 0071a69f  ff15a82d8000         call dword ptr [0x802da8]
// 0071a6a5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071a6a9  8d4618               lea eax, [esi + 0x18]
// 0071a6ac  50                   push eax
// 0071a6ad  c7460800000000       mov dword ptr [esi + 8], 0
// 0071a6b4  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0071a6bb  89560c               mov dword ptr [esi + 0xc], edx
// 0071a6be  ff159c2d8000         call dword ptr [0x802d9c]
// 0071a6c4  8bce                 mov ecx, esi
// 0071a6c6  e875fcffff           call 0x71a340
// 0071a6cb  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0071a6ce  8bf8                 mov edi, eax
// 0071a6d0  85c9                 test ecx, ecx
// 0071a6d2  740a                 je 0x71a6de
// 0071a6d4  8b11                 mov edx, dword ptr [ecx]
// 0071a6d6  8b8274010000         mov eax, dword ptr [edx + 0x174]
// 0071a6dc  ffd0                 call eax
// 0071a6de  ff15b42d8000         call dword ptr [0x802db4]
// 0071a6e4  e83d62f8ff           call 0x6a0926
// 0071a6e9  68007f0000           push 0x7f00
// 0071a6ee  6a00                 push 0
// 0071a6f0  ff15d02d8000         call dword ptr [0x802dd0]
// 0071a6f6  50                   push eax
// 0071a6f7  ff15042d8000         call dword ptr [0x802d04]
// 0071a6fd  8bc7                 mov eax, edi
// 0071a6ff  5f                   pop edi
// 0071a700  5e                   pop esi
// 0071a701  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCustomizeTools.cpp (function ?DoDragDrop@CXTPCustomizeDropSource@@QAEKPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeTools.cpp
