// roc 2008-06 006a70c0  unit: CXTPControlComboBoxList  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a70c0
//
// 006a70c0  56                   push esi
// 006a70c1  8bf1                 mov esi, ecx
// 006a70c3  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 006a70c9  85c9                 test ecx, ecx
// 006a70cb  7515                 jne 0x6a70e2
// 006a70cd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a70d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a70d5  50                   push eax
// 006a70d6  51                   push ecx
// 006a70d7  8bce                 mov ecx, esi
// 006a70d9  e8e2180100           call 0x6b89c0
// 006a70de  5e                   pop esi
// 006a70df  c20800               ret 8
// 006a70e2  8b442408             mov eax, dword ptr [esp + 8]
// 006a70e6  83f81b               cmp eax, 0x1b
// 006a70e9  7523                 jne 0x6a710e
// 006a70eb  8b11                 mov edx, dword ptr [ecx]
// 006a70ed  8b4274               mov eax, dword ptr [edx + 0x74]
// 006a70f0  ffd0                 call eax
// 006a70f2  85c0                 test eax, eax
// 006a70f4  7406                 je 0x6a70fc
// 006a70f6  33c0                 xor eax, eax
// 006a70f8  5e                   pop esi
// 006a70f9  c20800               ret 8
// 006a70fc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a7100  51                   push ecx
// 006a7101  6a1b                 push 0x1b
// 006a7103  8bce                 mov ecx, esi
// 006a7105  e8b6180100           call 0x6b89c0
// 006a710a  5e                   pop esi
// 006a710b  c20800               ret 8
// 006a710e  83f809               cmp eax, 9
// 006a7111  74e3                 je 0x6a70f6
// 006a7113  83f80d               cmp eax, 0xd
// 006a7116  7513                 jne 0x6a712b
// 006a7118  8b11                 mov edx, dword ptr [ecx]
// 006a711a  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 006a7120  ffd0                 call eax
// 006a7122  b801000000           mov eax, 1
// 006a7127  5e                   pop esi
// 006a7128  c20800               ret 8
// 006a712b  8b16                 mov edx, dword ptr [esi]
// 006a712d  57                   push edi
// 006a712e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006a7132  57                   push edi
// 006a7133  50                   push eax
// 006a7134  8b8228020000         mov eax, dword ptr [edx + 0x228]
// 006a713a  51                   push ecx
// 006a713b  8bce                 mov ecx, esi
// 006a713d  ffd0                 call eax
// 006a713f  5f                   pop edi
// 006a7140  5e                   pop esi
// 006a7141  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?OnHookKeyDown@CXTPControlComboBoxList@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
