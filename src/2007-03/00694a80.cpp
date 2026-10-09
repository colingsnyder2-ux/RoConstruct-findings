// roc 2007-03 00694a80  unit: seg_00690000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00694a80
//
// 00694a80  8b4108               mov eax, dword ptr [ecx + 8]
// 00694a83  33d2                 xor edx, edx
// 00694a85  85c0                 test eax, eax
// 00694a87  7e3f                 jle 0x694ac8
// 00694a89  56                   push esi
// 00694a8a  53                   push ebx
// 00694a8b  33f6                 xor esi, esi
// 00694a8d  57                   push edi
// 00694a8e  8bff                 mov edi, edi
// 00694a90  85f6                 test esi, esi
// 00694a92  7c35                 jl 0x694ac9
// 00694a94  3bd0                 cmp edx, eax
// 00694a96  7d31                 jge 0x694ac9
// 00694a98  8b4104               mov eax, dword ptr [ecx + 4]
// 00694a9b  8b5c3004             mov ebx, dword ptr [eax + esi + 4]
// 00694a9f  8b7c3008             mov edi, dword ptr [eax + esi + 8]
// 00694aa3  8d443004             lea eax, [eax + esi + 4]
// 00694aa7  895804               mov dword ptr [eax + 4], ebx
// 00694aaa  8938                 mov dword ptr [eax], edi
// 00694aac  8b5808               mov ebx, dword ptr [eax + 8]
// 00694aaf  8b780c               mov edi, dword ptr [eax + 0xc]
// 00694ab2  89580c               mov dword ptr [eax + 0xc], ebx
// 00694ab5  897808               mov dword ptr [eax + 8], edi
// 00694ab8  8b4108               mov eax, dword ptr [ecx + 8]
// 00694abb  83c201               add edx, 1
// 00694abe  83c630               add esi, 0x30
// 00694ac1  3bd0                 cmp edx, eax
// 00694ac3  7ccb                 jl 0x694a90
// 00694ac5  5f                   pop edi
// 00694ac6  5b                   pop ebx
// 00694ac7  5e                   pop esi
// 00694ac8  c3                   ret 
// 00694ac9  e9e098f8ff           jmp 0x61e3ae
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockBar.cpp (function ?InvertRects@CDockInfoArray@CXTPDockBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockBar.cpp
