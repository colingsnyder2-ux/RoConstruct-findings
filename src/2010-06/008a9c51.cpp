// roc 2010-06 008a9c51  unit: CXTIconHandle  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9c51
//
// 008a9c51  8bff                 mov edi, edi
// 008a9c53  55                   push ebp
// 008a9c54  8bec                 mov ebp, esp
// 008a9c56  8b450c               mov eax, dword ptr [ebp + 0xc]
// 008a9c59  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 008a9c5c  83caff               or edx, 0xffffffff
// 008a9c5f  2bd0                 sub edx, eax
// 008a9c61  3bd1                 cmp edx, ecx
// 008a9c63  7307                 jae 0x8a9c6c
// 008a9c65  b857000780           mov eax, 0x80070057
// 008a9c6a  5d                   pop ebp
// 008a9c6b  c3                   ret 
// 008a9c6c  03c1                 add eax, ecx
// 008a9c6e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008a9c71  8901                 mov dword ptr [ecx], eax
// 008a9c73  33c0                 xor eax, eax
// 008a9c75  5d                   pop ebp
// 008a9c76  c3                   ret 
// copied from an identical function in another client (function ??$AtlAdd@K@ATL@@YAJPAKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj