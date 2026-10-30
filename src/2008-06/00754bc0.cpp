// from server: 100% by auto
// roc 2008-06 00754bc0  unit: CXTPDockingPaneBase  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00754bc0
//
// 00754bc0  8b442408             mov eax, dword ptr [esp + 8]
// 00754bc4  57                   push edi
// 00754bc5  8b7804               mov edi, dword ptr [eax + 4]
// 00754bc8  85ff                 test edi, edi
// 00754bca  744d                 je 0x754c19
// 00754bcc  53                   push ebx
// 00754bcd  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00754bd1  55                   push ebp
// 00754bd2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00754bd6  56                   push esi
// 00754bd7  8bc7                 mov eax, edi
// 00754bd9  8b4008               mov eax, dword ptr [eax + 8]
// 00754bdc  8b3f                 mov edi, dword ptr [edi]
// 00754bde  85c0                 test eax, eax
// 00754be0  7405                 je 0x754be7
// 00754be2  8d70e0               lea esi, [eax - 0x20]
// 00754be5  eb02                 jmp 0x754be9
// 00754be7  33f6                 xor esi, esi
// 00754be9  8bce                 mov ecx, esi
// 00754beb  e8f029fbff           call 0x7075e0
// 00754bf0  85c5                 test ebp, eax
// 00754bf2  751e                 jne 0x754c12
// 00754bf4  837e3000             cmp dword ptr [esi + 0x30], 0
// 00754bf8  740e                 je 0x754c08
// 00754bfa  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00754bfd  8b11                 mov edx, dword ptr [ecx]
// 00754bff  8d4620               lea eax, [esi + 0x20]
// 00754c02  50                   push eax
// 00754c03  8b4248               mov eax, dword ptr [edx + 0x48]
// 00754c06  ffd0                 call eax
// 00754c08  6a01                 push 1
// 00754c0a  56                   push esi
// 00754c0b  8bcb                 mov ecx, ebx
// 00754c0d  e8deb00000           call 0x75fcf0
// 00754c12  85ff                 test edi, edi
// 00754c14  75c1                 jne 0x754bd7
// 00754c16  5e                   pop esi
// 00754c17  5d                   pop ebp
// 00754c18  5b                   pop ebx
// 00754c19  5f                   pop edi
// 00754c1a  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_AddPanesTo@CXTPDockingPaneLayout@@AAEXPAVCXTPDockingPaneTabbedContainer@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
