// roc 2009-12 007fc240  unit: CPatchedControlComboBox  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fc240
//
// 007fc240  6aff                 push -1
// 007fc242  68ca459600           push 0x9645ca
// 007fc247  64a100000000         mov eax, dword ptr fs:[0]
// 007fc24d  50                   push eax
// 007fc24e  51                   push ecx
// 007fc24f  56                   push esi
// 007fc250  a10052b600           mov eax, dword ptr [0xb65200]
// 007fc255  33c4                 xor eax, esp
// 007fc257  50                   push eax
// 007fc258  8d44240c             lea eax, [esp + 0xc]
// 007fc25c  64a300000000         mov dword ptr fs:[0], eax
// 007fc262  6a64                 push 0x64
// 007fc264  e8f775ffff           call 0x7f3860
// 007fc269  8bf0                 mov esi, eax
// 007fc26b  83c404               add esp, 4
// 007fc26e  89742408             mov dword ptr [esp + 8], esi
// 007fc272  33c0                 xor eax, eax
// 007fc274  89442414             mov dword ptr [esp + 0x14], eax
// 007fc278  3bf0                 cmp esi, eax
// 007fc27a  740f                 je 0x7fc28b
// 007fc27c  8bce                 mov ecx, esi
// 007fc27e  e86ddaffff           call 0x7f9cf0
// 007fc283  c7063c259f00         mov dword ptr [esi], 0x9f253c
// 007fc289  8bc6                 mov eax, esi
// 007fc28b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fc28f  64890d00000000       mov dword ptr fs:[0], ecx
// 007fc296  59                   pop ecx
// 007fc297  5e                   pop esi
// 007fc298  83c410               add esp, 0x10
// 007fc29b  c3                   ret 
// copied from an identical function in another client (function ?CreateEditControl@CXTPControlComboBox@@MAEPAVCXTPControlComboBoxEditCtrl@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp