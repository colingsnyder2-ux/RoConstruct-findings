// roc 2008-06 0075ea50  unit: CXTPDockingPaneTabbedContainer  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ea50
//
// 0075ea50  83ec10               sub esp, 0x10
// 0075ea53  55                   push ebp
// 0075ea54  56                   push esi
// 0075ea55  57                   push edi
// 0075ea56  8bf1                 mov esi, ecx
// 0075ea58  33ff                 xor edi, edi
// 0075ea5a  8d4e54               lea ecx, [esi + 0x54]
// 0075ea5d  897c240c             mov dword ptr [esp + 0xc], edi
// 0075ea61  897c2410             mov dword ptr [esp + 0x10], edi
// 0075ea65  c7442414e8030000     mov dword ptr [esp + 0x14], 0x3e8
// 0075ea6d  c7442418e8030000     mov dword ptr [esp + 0x18], 0x3e8
// 0075ea75  e836eaffff           call 0x75d4b0
// 0075ea7a  8b10                 mov edx, dword ptr [eax]
// 0075ea7c  8d4c240c             lea ecx, [esp + 0xc]
// 0075ea80  397c2424             cmp dword ptr [esp + 0x24], edi
// 0075ea84  740b                 je 0x75ea91
// 0075ea86  8b5270               mov edx, dword ptr [edx + 0x70]
// 0075ea89  51                   push ecx
// 0075ea8a  56                   push esi
// 0075ea8b  8bc8                 mov ecx, eax
// 0075ea8d  ffd2                 call edx
// 0075ea8f  eb0a                 jmp 0x75ea9b
// 0075ea91  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0075ea94  57                   push edi
// 0075ea95  51                   push ecx
// 0075ea96  56                   push esi
// 0075ea97  8bc8                 mov ecx, eax
// 0075ea99  ffd2                 call edx
// 0075ea9b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075ea9f  8b742414             mov esi, dword ptr [esp + 0x14]
// 0075eaa3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0075eaa7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0075eaab  8bd1                 mov edx, ecx
// 0075eaad  2bd6                 sub edx, esi
// 0075eaaf  81c2e8030000         add edx, 0x3e8
// 0075eab5  015018               add dword ptr [eax + 0x18], edx
// 0075eab8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0075eabc  8bea                 mov ebp, edx
// 0075eabe  2bef                 sub ebp, edi
// 0075eac0  2bce                 sub ecx, esi
// 0075eac2  2bd7                 sub edx, edi
// 0075eac4  81c5e8030000         add ebp, 0x3e8
// 0075eaca  01681c               add dword ptr [eax + 0x1c], ebp
// 0075eacd  5f                   pop edi
// 0075eace  81c1e8030000         add ecx, 0x3e8
// 0075ead4  014820               add dword ptr [eax + 0x20], ecx
// 0075ead7  81c2e8030000         add edx, 0x3e8
// 0075eadd  015024               add dword ptr [eax + 0x24], edx
// 0075eae0  5e                   pop esi
// 0075eae1  5d                   pop ebp
// 0075eae2  83c410               add esp, 0x10
// 0075eae5  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AdjustMinMaxInfoClientRect@CXTPDockingPaneTabbedContainer@@IBEXPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
