// roc 2011-06 00903c2e  unit: CXTIconHandle  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903c2e
//
// 00903c2e  8bff                 mov edi, edi
// 00903c30  55                   push ebp
// 00903c31  8bec                 mov ebp, esp
// 00903c33  8b4508               mov eax, dword ptr [ebp + 8]
// 00903c36  85c0                 test eax, eax
// 00903c38  7c0e                 jl 0x903c48
// 00903c3a  3b4104               cmp eax, dword ptr [ecx + 4]
// 00903c3d  7d09                 jge 0x903c48
// 00903c3f  8b09                 mov ecx, dword ptr [ecx]
// 00903c41  8d0441               lea eax, [ecx + eax*2]
// 00903c44  5d                   pop ebp
// 00903c45  c20400               ret 4
// 00903c48  6a00                 push 0
// 00903c4a  6a00                 push 0
// 00903c4c  6a01                 push 1
// 00903c4e  688c0000c0           push 0xc000008c
// 00903c53  ff15ac03a400         call dword ptr [0xa403ac]
// copied from an identical function in another client (function ??A?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QAEAAGH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlwinmodule.obj