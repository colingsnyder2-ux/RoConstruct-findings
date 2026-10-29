// roc 2009-06 0081ae11  unit: CXTIconHandle  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081ae11
//
// 0081ae11  8bff                 mov edi, edi
// 0081ae13  55                   push ebp
// 0081ae14  8bec                 mov ebp, esp
// 0081ae16  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0081ae19  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0081ae1c  83caff               or edx, 0xffffffff
// 0081ae1f  2bd0                 sub edx, eax
// 0081ae21  3bd1                 cmp edx, ecx
// 0081ae23  7307                 jae 0x81ae2c
// 0081ae25  b857000780           mov eax, 0x80070057
// 0081ae2a  5d                   pop ebp
// 0081ae2b  c3                   ret 
// 0081ae2c  03c1                 add eax, ecx
// 0081ae2e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0081ae31  8901                 mov dword ptr [ecx], eax
// 0081ae33  33c0                 xor eax, eax
// 0081ae35  5d                   pop ebp
// 0081ae36  c3                   ret 
// copied from an identical function in another client (function ??$AtlAdd@K@ATL@@YAJPAKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj