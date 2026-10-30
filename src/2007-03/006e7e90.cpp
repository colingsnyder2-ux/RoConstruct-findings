// roc 2007-03 006e7e90  unit: seg_006e0000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e7e90
//
// 006e7e90  53                   push ebx
// 006e7e91  56                   push esi
// 006e7e92  57                   push edi
// 006e7e93  8bf1                 mov esi, ecx
// 006e7e95  e8c6fb0100           call 0x707a60
// 006e7e9a  8b1db4ed7700         mov ebx, dword ptr [0x77edb4]
// 006e7ea0  6a00                 push 0
// 006e7ea2  6a04                 push 4
// 006e7ea4  6a02                 push 2
// 006e7ea6  6a02                 push 2
// 006e7ea8  8d7e04               lea edi, [esi + 4]
// 006e7eab  57                   push edi
// 006e7eac  c706ec017d00         mov dword ptr [esi], 0x7d01ec
// 006e7eb2  ffd3                 call ebx
// 006e7eb4  6a00                 push 0
// 006e7eb6  6a02                 push 2
// 006e7eb8  6a03                 push 3
// 006e7eba  6a02                 push 2
// 006e7ebc  57                   push edi
// 006e7ebd  c706cc9b7d00         mov dword ptr [esi], 0x7d9bcc
// 006e7ec3  ffd3                 call ebx
// 006e7ec5  5f                   pop edi
// 006e7ec6  8bc6                 mov eax, esi
// 006e7ec8  5e                   pop esi
// 006e7ec9  5b                   pop ebx
// 006e7eca  c3                   ret 
// copied from an identical function in another client (function ??0CAppearanceSetExcel@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp