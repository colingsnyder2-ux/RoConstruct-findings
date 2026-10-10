// roc 2008-06 0071c430  unit: CXTPHookManagerHookAble  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071c430
//
// 0071c430  56                   push esi
// 0071c431  8b711c               mov esi, dword ptr [ecx + 0x1c]
// 0071c434  57                   push edi
// 0071c435  85f6                 test esi, esi
// 0071c437  7438                 je 0x71c471
// 0071c439  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0071c43d  8d4900               lea ecx, [ecx]
// 0071c440  8d54240c             lea edx, [esp + 0xc]
// 0071c444  52                   push edx
// 0071c445  8d542418             lea edx, [esp + 0x18]
// 0071c449  52                   push edx
// 0071c44a  8bc6                 mov eax, esi
// 0071c44c  8b4808               mov ecx, dword ptr [eax + 8]
// 0071c44f  8b7604               mov esi, dword ptr [esi + 4]
// 0071c452  8d542418             lea edx, [esp + 0x18]
// 0071c456  52                   push edx
// 0071c457  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0071c45f  8b01                 mov eax, dword ptr [ecx]
// 0071c461  8b4004               mov eax, dword ptr [eax + 4]
// 0071c464  57                   push edi
// 0071c465  6a00                 push 0
// 0071c467  ffd0                 call eax
// 0071c469  85c0                 test eax, eax
// 0071c46b  750e                 jne 0x71c47b
// 0071c46d  85f6                 test esi, esi
// 0071c46f  75cf                 jne 0x71c440
// 0071c471  5f                   pop edi
// 0071c472  b801000000           mov eax, 1
// 0071c477  5e                   pop esi
// 0071c478  c20c00               ret 0xc
// 0071c47b  33c9                 xor ecx, ecx
// 0071c47d  83f802               cmp eax, 2
// 0071c480  0f95c1               setne cl
// 0071c483  5f                   pop edi
// 0071c484  5e                   pop esi
// 0071c485  8bc1                 mov eax, ecx
// 0071c487  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPHookManager.cpp (function ?ProcessKeyboardHooks@CXTPKeyboardManager@@QAEHIIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPHookManager.cpp
