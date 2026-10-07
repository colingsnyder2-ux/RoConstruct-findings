// roc 2008-06 0071ced0  unit: CXTPKeyboardManager  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071ced0
//
// 0071ced0  83ec18               sub esp, 0x18
// 0071ced3  56                   push esi
// 0071ced4  8b742420             mov esi, dword ptr [esp + 0x20]
// 0071ced8  56                   push esi
// 0071ced9  ff15502d8000         call dword ptr [0x802d50]
// 0071cedf  85c0                 test eax, eax
// 0071cee1  7532                 jne 0x71cf15
// 0071cee3  8b442428             mov eax, dword ptr [esp + 0x28]
// 0071cee7  50                   push eax
// 0071cee8  56                   push esi
// 0071cee9  ff151c2e8000         call dword ptr [0x802e1c]
// 0071ceef  6810306a00           push 0x6a3010
// 0071cef4  b99ced9700           mov ecx, 0x97ed9c
// 0071cef9  e8dcf00900           call 0x7bbfda
// 0071cefe  85c0                 test eax, eax
// 0071cf00  7505                 jne 0x71cf07
// 0071cf02  e83d3af8ff           call 0x6a0944
// 0071cf07  c7402400000000       mov dword ptr [eax + 0x24], 0
// 0071cf0e  5e                   pop esi
// 0071cf0f  83c418               add esp, 0x18
// 0071cf12  c21000               ret 0x10
// 0071cf15  57                   push edi
// 0071cf16  8d4c2410             lea ecx, [esp + 0x10]
// 0071cf1a  51                   push ecx
// 0071cf1b  56                   push esi
// 0071cf1c  ff15342e8000         call dword ptr [0x802e34]
// 0071cf22  8d542408             lea edx, [esp + 8]
// 0071cf26  52                   push edx
// 0071cf27  ff159c2d8000         call dword ptr [0x802d9c]
// 0071cf2d  56                   push esi
// 0071cf2e  ff15f82d8000         call dword ptr [0x802df8]
// 0071cf34  85c0                 test eax, eax
// 0071cf36  741e                 je 0x71cf56
// 0071cf38  6af0                 push -0x10
// 0071cf3a  56                   push esi
// 0071cf3b  ff15bc2d8000         call dword ptr [0x802dbc]
// 0071cf41  85c0                 test eax, eax
// 0071cf43  7811                 js 0x71cf56
// 0071cf45  56                   push esi
// 0071cf46  e845ffffff           call 0x71ce90
// 0071cf4b  83c404               add esp, 4
// 0071cf4e  85c0                 test eax, eax
// 0071cf50  7504                 jne 0x71cf56
// 0071cf52  33ff                 xor edi, edi
// 0071cf54  eb05                 jmp 0x71cf5b
// 0071cf56  bf01000000           mov edi, 1
// 0071cf5b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071cf5f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071cf63  50                   push eax
// 0071cf64  51                   push ecx
// 0071cf65  8d542418             lea edx, [esp + 0x18]
// 0071cf69  52                   push edx
// 0071cf6a  ff152c2d8000         call dword ptr [0x802d2c]
// 0071cf70  85c0                 test eax, eax
// 0071cf72  7404                 je 0x71cf78
// 0071cf74  85ff                 test edi, edi
// 0071cf76  753b                 jne 0x71cfb3
// 0071cf78  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0071cf7c  50                   push eax
// 0071cf7d  56                   push esi
// 0071cf7e  ff151c2e8000         call dword ptr [0x802e1c]
// 0071cf84  6810306a00           push 0x6a3010
// 0071cf89  b99ced9700           mov ecx, 0x97ed9c
// 0071cf8e  e847f00900           call 0x7bbfda
// 0071cf93  85c0                 test eax, eax
// 0071cf95  7505                 jne 0x71cf9c
// 0071cf97  e8a839f8ff           call 0x6a0944
// 0071cf9c  6a00                 push 0
// 0071cf9e  6a00                 push 0
// 0071cfa0  68a3020000           push 0x2a3
// 0071cfa5  56                   push esi
// 0071cfa6  c7402400000000       mov dword ptr [eax + 0x24], 0
// 0071cfad  ff150c2e8000         call dword ptr [0x802e0c]
// 0071cfb3  5f                   pop edi
// 0071cfb4  5e                   pop esi
// 0071cfb5  83c418               add esp, 0x18
// 0071cfb8  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?TrackMouseTimerProc@CXTPMouseManager@@CGXPAUHWND__@@IIK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
