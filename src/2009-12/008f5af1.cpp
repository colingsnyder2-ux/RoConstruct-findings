// roc 2009-12 008f5af1  unit: CXTIconHandle  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5af1
//
// 008f5af1  8bff                 mov edi, edi
// 008f5af3  55                   push ebp
// 008f5af4  8bec                 mov ebp, esp
// 008f5af6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 008f5af9  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 008f5afc  83caff               or edx, 0xffffffff
// 008f5aff  2bd0                 sub edx, eax
// 008f5b01  3bd1                 cmp edx, ecx
// 008f5b03  7307                 jae 0x8f5b0c
// 008f5b05  b857000780           mov eax, 0x80070057
// 008f5b0a  5d                   pop ebp
// 008f5b0b  c3                   ret 
// 008f5b0c  03c1                 add eax, ecx
// 008f5b0e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008f5b11  8901                 mov dword ptr [ecx], eax
// 008f5b13  33c0                 xor eax, eax
// 008f5b15  5d                   pop ebp
// 008f5b16  c3                   ret 
// copied from an identical function in another client (function ??$AtlAdd@K@ATL@@YAJPAKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj