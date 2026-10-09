// roc 2007-03 00654970  unit: seg_00650000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00654970
//
// 00654970  8b442404             mov eax, dword ptr [esp + 4]
// 00654974  85c0                 test eax, eax
// 00654976  741b                 je 0x654993
// 00654978  6a0c                 push 0xc
// 0065497a  50                   push eax
// 0065497b  ff15c4d07700         call dword ptr [0x77d0c4]
// 00654981  83c0ff               add eax, -1
// 00654984  b907000000           mov ecx, 7
// 00654989  3bc8                 cmp ecx, eax
// 0065498b  1bc0                 sbb eax, eax
// 0065498d  83c001               add eax, 1
// 00654990  c20400               ret 4
// 00654993  53                   push ebx
// 00654994  8b1d2cef7700         mov ebx, dword ptr [0x77ef2c]
// 0065499a  56                   push esi
// 0065499b  ffd3                 call ebx
// 0065499d  50                   push eax
// 0065499e  ff1500ee7700         call dword ptr [0x77ee00]
// 006549a4  8bf0                 mov esi, eax
// 006549a6  85f6                 test esi, esi
// 006549a8  742b                 je 0x6549d5
// 006549aa  57                   push edi
// 006549ab  6a0c                 push 0xc
// 006549ad  56                   push esi
// 006549ae  ff15c4d07700         call dword ptr [0x77d0c4]
// 006549b4  56                   push esi
// 006549b5  8bf8                 mov edi, eax
// 006549b7  ffd3                 call ebx
// 006549b9  50                   push eax
// 006549ba  ff150cee7700         call dword ptr [0x77ee0c]
// 006549c0  83c7ff               add edi, -1
// 006549c3  ba07000000           mov edx, 7
// 006549c8  3bd7                 cmp edx, edi
// 006549ca  5f                   pop edi
// 006549cb  1bc0                 sbb eax, eax
// 006549cd  5e                   pop esi
// 006549ce  83c001               add eax, 1
// 006549d1  5b                   pop ebx
// 006549d2  c20400               ret 4
// 006549d5  5e                   pop esi
// 006549d6  33c0                 xor eax, eax
// 006549d8  5b                   pop ebx
// 006549d9  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ?IsLowResolution@CXTPColorManager@@QAEHPAUHDC__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
