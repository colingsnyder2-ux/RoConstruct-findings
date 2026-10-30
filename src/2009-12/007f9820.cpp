// roc 2009-12 007f9820  unit: CXTPControlComboBoxList  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9820
//
// 007f9820  56                   push esi
// 007f9821  8bf1                 mov esi, ecx
// 007f9823  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 007f9829  85c9                 test ecx, ecx
// 007f982b  7515                 jne 0x7f9842
// 007f982d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f9831  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f9835  50                   push eax
// 007f9836  51                   push ecx
// 007f9837  8bce                 mov ecx, esi
// 007f9839  e872e80000           call 0x8080b0
// 007f983e  5e                   pop esi
// 007f983f  c20800               ret 8
// 007f9842  8b442408             mov eax, dword ptr [esp + 8]
// 007f9846  83f81b               cmp eax, 0x1b
// 007f9849  7523                 jne 0x7f986e
// 007f984b  8b11                 mov edx, dword ptr [ecx]
// 007f984d  8b4274               mov eax, dword ptr [edx + 0x74]
// 007f9850  ffd0                 call eax
// 007f9852  85c0                 test eax, eax
// 007f9854  7406                 je 0x7f985c
// 007f9856  33c0                 xor eax, eax
// 007f9858  5e                   pop esi
// 007f9859  c20800               ret 8
// 007f985c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f9860  51                   push ecx
// 007f9861  6a1b                 push 0x1b
// 007f9863  8bce                 mov ecx, esi
// 007f9865  e846e80000           call 0x8080b0
// 007f986a  5e                   pop esi
// 007f986b  c20800               ret 8
// 007f986e  83f809               cmp eax, 9
// 007f9871  74e3                 je 0x7f9856
// 007f9873  83f80d               cmp eax, 0xd
// 007f9876  7513                 jne 0x7f988b
// 007f9878  8b11                 mov edx, dword ptr [ecx]
// 007f987a  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 007f9880  ffd0                 call eax
// 007f9882  b801000000           mov eax, 1
// 007f9887  5e                   pop esi
// 007f9888  c20800               ret 8
// 007f988b  8b16                 mov edx, dword ptr [esi]
// 007f988d  57                   push edi
// 007f988e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007f9892  57                   push edi
// 007f9893  50                   push eax
// 007f9894  8b8228020000         mov eax, dword ptr [edx + 0x228]
// 007f989a  51                   push ecx
// 007f989b  8bce                 mov ecx, esi
// 007f989d  ffd0                 call eax
// 007f989f  5f                   pop edi
// 007f98a0  5e                   pop esi
// 007f98a1  c20800               ret 8
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPControlComboBoxList@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp