// from server: 100% by auto
// roc 2008-06 00758bc0  unit: CXTPDockingPaneAutoHidePanel  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00758bc0
//
// 00758bc0  8b442408             mov eax, dword ptr [esp + 8]
// 00758bc4  56                   push esi
// 00758bc5  8bf1                 mov esi, ecx
// 00758bc7  0fbfc8               movsx ecx, ax
// 00758bca  c1e810               shr eax, 0x10
// 00758bcd  98                   cwde 
// 00758bce  57                   push edi
// 00758bcf  50                   push eax
// 00758bd0  51                   push ecx
// 00758bd1  8bce                 mov ecx, esi
// 00758bd3  e8e8efffff           call 0x757bc0
// 00758bd8  8bf8                 mov edi, eax
// 00758bda  85ff                 test edi, edi
// 00758bdc  7432                 je 0x758c10
// 00758bde  8b4620               mov eax, dword ptr [esi + 0x20]
// 00758be1  50                   push eax
// 00758be2  e829e7f9ff           call 0x6f7310
// 00758be7  83c404               add esp, 4
// 00758bea  85c0                 test eax, eax
// 00758bec  7422                 je 0x758c10
// 00758bee  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00758bf4  85c0                 test eax, eax
// 00758bf6  740e                 je 0x758c06
// 00758bf8  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 00758bfe  39b9a4010000         cmp dword ptr [ecx + 0x1a4], edi
// 00758c04  740a                 je 0x758c10
// 00758c06  6a00                 push 0
// 00758c08  57                   push edi
// 00758c09  8bce                 mov ecx, esi
// 00758c0b  e810feffff           call 0x758a20
// 00758c10  5f                   pop edi
// 00758c11  b801000000           mov eax, 1
// 00758c16  5e                   pop esi
// 00758c17  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnMouseHover@CXTPDockingPaneAutoHidePanel@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
