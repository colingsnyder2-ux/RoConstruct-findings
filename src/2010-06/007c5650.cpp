// roc 2010-06 007c5650  unit: CXTPToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c5650
//
// 007c5650  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007c5654  56                   push esi
// 007c5655  8bf1                 mov esi, ecx
// 007c5657  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c565b  50                   push eax
// 007c565c  51                   push ecx
// 007c565d  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007c5663  e858400300           call 0x7f96c0
// 007c5668  85c0                 test eax, eax
// 007c566a  7515                 jne 0x7c5681
// 007c566c  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007c5672  85c9                 test ecx, ecx
// 007c5674  740b                 je 0x7c5681
// 007c5676  8b11                 mov edx, dword ptr [ecx]
// 007c5678  8b420c               mov eax, dword ptr [edx + 0xc]
// 007c567b  ffd0                 call eax
// 007c567d  5e                   pop esi
// 007c567e  c20c00               ret 0xc
// 007c5681  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007c5685  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007c5689  8b442408             mov eax, dword ptr [esp + 8]
// 007c568d  51                   push ecx
// 007c568e  52                   push edx
// 007c568f  50                   push eax
// 007c5690  8bce                 mov ecx, esi
// 007c5692  e8693affff           call 0x7b9100
// 007c5697  5e                   pop esi
// 007c5698  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnLButtonDblClk@CXTPToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
