// roc 2009-06 007b8f20  unit: CXTPRibbonBar  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b8f20
//
// 007b8f20  57                   push edi
// 007b8f21  8b7c2408             mov edi, dword ptr [esp + 8]
// 007b8f25  3bb96c020000         cmp edi, dword ptr [ecx + 0x26c]
// 007b8f2b  7509                 jne 0x7b8f36
// 007b8f2d  b801000000           mov eax, 1
// 007b8f32  5f                   pop edi
// 007b8f33  c20400               ret 4
// 007b8f36  3bb970020000         cmp edi, dword ptr [ecx + 0x270]
// 007b8f3c  74ef                 je 0x7b8f2d
// 007b8f3e  33c0                 xor eax, eax
// 007b8f40  398758010000         cmp dword ptr [edi + 0x158], eax
// 007b8f46  7536                 jne 0x7b8f7e
// 007b8f48  8b8964020000         mov ecx, dword ptr [ecx + 0x264]
// 007b8f4e  85c9                 test ecx, ecx
// 007b8f50  742c                 je 0x7b8f7e
// 007b8f52  56                   push esi
// 007b8f53  8b712c               mov esi, dword ptr [ecx + 0x2c]
// 007b8f56  85f6                 test esi, esi
// 007b8f58  7e21                 jle 0x7b8f7b
// 007b8f5a  8d9b00000000         lea ebx, [ebx]
// 007b8f60  85c0                 test eax, eax
// 007b8f62  7c0c                 jl 0x7b8f70
// 007b8f64  3bc6                 cmp eax, esi
// 007b8f66  7d08                 jge 0x7b8f70
// 007b8f68  8b5128               mov edx, dword ptr [ecx + 0x28]
// 007b8f6b  8b1482               mov edx, dword ptr [edx + eax*4]
// 007b8f6e  eb02                 jmp 0x7b8f72
// 007b8f70  33d2                 xor edx, edx
// 007b8f72  3bd7                 cmp edx, edi
// 007b8f74  740c                 je 0x7b8f82
// 007b8f76  40                   inc eax
// 007b8f77  3bc6                 cmp eax, esi
// 007b8f79  7ce5                 jl 0x7b8f60
// 007b8f7b  33c0                 xor eax, eax
// 007b8f7d  5e                   pop esi
// 007b8f7e  5f                   pop edi
// 007b8f7f  c20400               ret 4
// 007b8f82  5e                   pop esi
// 007b8f83  b801000000           mov eax, 1
// 007b8f88  5f                   pop edi
// 007b8f89  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsQuickAccessControl@CXTPRibbonBar@@QBEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
