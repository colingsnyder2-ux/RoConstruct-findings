// from server: 100% by auto
// roc 2011-06 00844d70  unit: CXTPReportSelectedRows  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844d70
//
// 00844d70  8b442404             mov eax, dword ptr [esp + 4]
// 00844d74  85c0                 test eax, eax
// 00844d76  7417                 je 0x844d8f
// 00844d78  6a0c                 push 0xc
// 00844d7a  50                   push eax
// 00844d7b  ff157401a400         call dword ptr [0xa40174]
// 00844d81  48                   dec eax
// 00844d82  b907000000           mov ecx, 7
// 00844d87  3bc8                 cmp ecx, eax
// 00844d89  1bc0                 sbb eax, eax
// 00844d8b  40                   inc eax
// 00844d8c  c20400               ret 4
// 00844d8f  53                   push ebx
// 00844d90  8b1de819a400         mov ebx, dword ptr [0xa419e8]
// 00844d96  56                   push esi
// 00844d97  ffd3                 call ebx
// 00844d99  50                   push eax
// 00844d9a  ff15e419a400         call dword ptr [0xa419e4]
// 00844da0  8bf0                 mov esi, eax
// 00844da2  85f6                 test esi, esi
// 00844da4  7427                 je 0x844dcd
// 00844da6  57                   push edi
// 00844da7  6a0c                 push 0xc
// 00844da9  56                   push esi
// 00844daa  ff157401a400         call dword ptr [0xa40174]
// 00844db0  56                   push esi
// 00844db1  8bf8                 mov edi, eax
// 00844db3  ffd3                 call ebx
// 00844db5  50                   push eax
// 00844db6  ff15dc19a400         call dword ptr [0xa419dc]
// 00844dbc  4f                   dec edi
// 00844dbd  ba07000000           mov edx, 7
// 00844dc2  3bd7                 cmp edx, edi
// 00844dc4  5f                   pop edi
// 00844dc5  1bc0                 sbb eax, eax
// 00844dc7  5e                   pop esi
// 00844dc8  40                   inc eax
// 00844dc9  5b                   pop ebx
// 00844dca  c20400               ret 4
// 00844dcd  5e                   pop esi
// 00844dce  33c0                 xor eax, eax
// 00844dd0  5b                   pop ebx
// 00844dd1  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?IsLowResolution@CXTPColorManager@@QAEHPAUHDC__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
