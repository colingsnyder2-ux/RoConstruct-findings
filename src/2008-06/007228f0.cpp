// roc 2008-06 007228f0  unit: CXTPRibbonBar  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007228f0
//
// 007228f0  56                   push esi
// 007228f1  8b742408             mov esi, dword ptr [esp + 8]
// 007228f5  85f6                 test esi, esi
// 007228f7  7506                 jne 0x7228ff
// 007228f9  33c0                 xor eax, eax
// 007228fb  5e                   pop esi
// 007228fc  c20400               ret 4
// 007228ff  83b95002000000       cmp dword ptr [ecx + 0x250], 0
// 00722906  7510                 jne 0x722918
// 00722908  8b8964020000         mov ecx, dword ptr [ecx + 0x264]
// 0072290e  56                   push esi
// 0072290f  e89c670700           call 0x7990b0
// 00722914  85c0                 test eax, eax
// 00722916  75e1                 jne 0x7228f9
// 00722918  e843550700           call 0x797e60
// 0072291d  50                   push eax
// 0072291e  8bce                 mov ecx, esi
// 00722920  e8cbe2f7ff           call 0x6a0bf0
// 00722925  85c0                 test eax, eax
// 00722927  740f                 je 0x722938
// 00722929  33c0                 xor eax, eax
// 0072292b  398684000000         cmp dword ptr [esi + 0x84], eax
// 00722931  5e                   pop esi
// 00722932  0f9fc0               setg al
// 00722935  c20400               ret 4
// 00722938  8bce                 mov ecx, esi
// 0072293a  e8318af8ff           call 0x6ab370
// 0072293f  0fb6c0               movzx eax, al
// 00722942  83f0ff               xor eax, 0xffffffff
// 00722945  c1e804               shr eax, 4
// 00722948  83e001               and eax, 1
// 0072294b  5e                   pop esi
// 0072294c  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?IsAllowQuickAccessControl@CXTPRibbonBar@@UAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
