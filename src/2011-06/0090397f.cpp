// roc 2011-06 0090397f  unit: CXTIconHandle  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0090397f
//
// 0090397f  8bff                 mov edi, edi
// 00903981  55                   push ebp
// 00903982  8bec                 mov ebp, esp
// 00903984  8b4508               mov eax, dword ptr [ebp + 8]
// 00903987  85c0                 test eax, eax
// 00903989  7c0e                 jl 0x903999
// 0090398b  3b4104               cmp eax, dword ptr [ecx + 4]
// 0090398e  7d09                 jge 0x903999
// 00903990  8b09                 mov ecx, dword ptr [ecx]
// 00903992  8d0481               lea eax, [ecx + eax*4]
// 00903995  5d                   pop ebp
// 00903996  c20400               ret 4
// 00903999  6a00                 push 0
// 0090399b  6a00                 push 0
// 0090399d  6a01                 push 1
// 0090399f  688c0000c0           push 0xc000008c
// 009039a4  ff15ac03a400         call dword ptr [0xa403ac]
// copied from an identical function in another client (function ??A?$CSimpleArray@PAUHINSTANCE__@@V?$CSimpleArrayEqualHelper@PAUHINSTANCE__@@@ATL@@@ATL@@QAEAAPAUHINSTANCE__@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlbase.obj