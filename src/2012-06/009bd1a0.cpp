// roc 2012-06 009bd1a0  unit: CXTPReportSelectedRows  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bd1a0
//
// 009bd1a0  8b442404             mov eax, dword ptr [esp + 4]
// 009bd1a4  85c0                 test eax, eax
// 009bd1a6  7417                 je 0x9bd1bf
// 009bd1a8  6a0c                 push 0xc
// 009bd1aa  50                   push eax
// 009bd1ab  ff154821b200         call dword ptr [0xb22148]
// 009bd1b1  48                   dec eax
// 009bd1b2  b907000000           mov ecx, 7
// 009bd1b7  3bc8                 cmp ecx, eax
// 009bd1b9  1bc0                 sbb eax, eax
// 009bd1bb  40                   inc eax
// 009bd1bc  c20400               ret 4
// 009bd1bf  53                   push ebx
// 009bd1c0  8b1df43bb200         mov ebx, dword ptr [0xb23bf4]
// 009bd1c6  56                   push esi
// 009bd1c7  ffd3                 call ebx
// 009bd1c9  50                   push eax
// 009bd1ca  ff15f83bb200         call dword ptr [0xb23bf8]
// 009bd1d0  8bf0                 mov esi, eax
// 009bd1d2  85f6                 test esi, esi
// 009bd1d4  7427                 je 0x9bd1fd
// 009bd1d6  57                   push edi
// 009bd1d7  6a0c                 push 0xc
// 009bd1d9  56                   push esi
// 009bd1da  ff154821b200         call dword ptr [0xb22148]
// 009bd1e0  56                   push esi
// 009bd1e1  8bf8                 mov edi, eax
// 009bd1e3  ffd3                 call ebx
// 009bd1e5  50                   push eax
// 009bd1e6  ff15003cb200         call dword ptr [0xb23c00]
// 009bd1ec  4f                   dec edi
// 009bd1ed  ba07000000           mov edx, 7
// 009bd1f2  3bd7                 cmp edx, edi
// 009bd1f4  5f                   pop edi
// 009bd1f5  1bc0                 sbb eax, eax
// 009bd1f7  5e                   pop esi
// 009bd1f8  40                   inc eax
// 009bd1f9  5b                   pop ebx
// 009bd1fa  c20400               ret 4
// 009bd1fd  5e                   pop esi
// 009bd1fe  33c0                 xor eax, eax
// 009bd200  5b                   pop ebx
// 009bd201  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?IsLowResolution@CXTPColorManager@@QAEHPAUHDC__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
