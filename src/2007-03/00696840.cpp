// roc 2007-03 00696840  unit: seg_00690000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00696840
//
// 00696840  55                   push ebp
// 00696841  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00696845  85ed                 test ebp, ebp
// 00696847  7504                 jne 0x69684d
// 00696849  33c0                 xor eax, eax
// 0069684b  5d                   pop ebp
// 0069684c  c3                   ret 
// 0069684d  53                   push ebx
// 0069684e  8b1dd8ed7700         mov ebx, dword ptr [0x77edd8]
// 00696854  56                   push esi
// 00696855  6a00                 push 0
// 00696857  6a00                 push 0
// 00696859  55                   push ebp
// 0069685a  ffd3                 call ebx
// 0069685c  8bf0                 mov esi, eax
// 0069685e  85f6                 test esi, esi
// 00696860  7504                 jne 0x696866
// 00696862  5e                   pop esi
// 00696863  5b                   pop ebx
// 00696864  5d                   pop ebp
// 00696865  c3                   ret 
// 00696866  33c9                 xor ecx, ecx
// 00696868  ba06000000           mov edx, 6
// 0069686d  f7e2                 mul edx
// 0069686f  0f90c1               seto cl
// 00696872  57                   push edi
// 00696873  f7d9                 neg ecx
// 00696875  0bc8                 or ecx, eax
// 00696877  51                   push ecx
// 00696878  e8437bf8ff           call 0x61e3c0
// 0069687d  83c404               add esp, 4
// 00696880  56                   push esi
// 00696881  8bf8                 mov edi, eax
// 00696883  57                   push edi
// 00696884  55                   push ebp
// 00696885  ffd3                 call ebx
// 00696887  56                   push esi
// 00696888  57                   push edi
// 00696889  ff15c0ef7700         call dword ptr [0x77efc0]
// 0069688f  57                   push edi
// 00696890  8bf0                 mov esi, eax
// 00696892  e81d7bf8ff           call 0x61e3b4
// 00696897  83c404               add esp, 4
// 0069689a  5f                   pop edi
// 0069689b  8bc6                 mov eax, esi
// 0069689d  5e                   pop esi
// 0069689e  5b                   pop ebx
// 0069689f  5d                   pop ebp
// 006968a0  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CopyAccelTable@CXTPShortcutManager@@SAPAUHACCEL__@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
