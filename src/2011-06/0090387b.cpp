// roc 2011-06 0090387b  unit: CXTIconHandle  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0090387b
//
// 0090387b  8bff                 mov edi, edi
// 0090387d  55                   push ebp
// 0090387e  8bec                 mov ebp, esp
// 00903880  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00903883  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00903886  83caff               or edx, 0xffffffff
// 00903889  2bd0                 sub edx, eax
// 0090388b  3bd1                 cmp edx, ecx
// 0090388d  7307                 jae 0x903896
// 0090388f  b857000780           mov eax, 0x80070057
// 00903894  5d                   pop ebp
// 00903895  c3                   ret 
// 00903896  03c1                 add eax, ecx
// 00903898  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0090389b  8901                 mov dword ptr [ecx], eax
// 0090389d  33c0                 xor eax, eax
// 0090389f  5d                   pop ebp
// 009038a0  c3                   ret 
// copied from an identical function in another client (function ??$AtlAdd@K@ATL@@YAJPAKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj