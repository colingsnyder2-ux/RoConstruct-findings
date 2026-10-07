// roc 2008-06 006e99d0  unit: CXTPControlButtonColor  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e99d0
//
// 006e99d0  56                   push esi
// 006e99d1  8bf1                 mov esi, ecx
// 006e99d3  e86818fcff           call 0x6ab240
// 006e99d8  8bc8                 mov ecx, eax
// 006e99da  e81148fcff           call 0x6ae1f0
// 006e99df  83f817               cmp eax, 0x17
// 006e99e2  7d16                 jge 0x6e99fa
// 006e99e4  8b442408             mov eax, dword ptr [esp + 8]
// 006e99e8  b917000000           mov ecx, 0x17
// 006e99ed  c70094000000         mov dword ptr [eax], 0x94
// 006e99f3  894804               mov dword ptr [eax + 4], ecx
// 006e99f6  5e                   pop esi
// 006e99f7  c20800               ret 8
// 006e99fa  8bce                 mov ecx, esi
// 006e99fc  e83f18fcff           call 0x6ab240
// 006e9a01  8bc8                 mov ecx, eax
// 006e9a03  e8e847fcff           call 0x6ae1f0
// 006e9a08  8bc8                 mov ecx, eax
// 006e9a0a  8b442408             mov eax, dword ptr [esp + 8]
// 006e9a0e  c70094000000         mov dword ptr [eax], 0x94
// 006e9a14  894804               mov dword ptr [eax + 4], ecx
// 006e9a17  5e                   pop esi
// 006e9a18  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetSize@CXTPControlButtonColor@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
