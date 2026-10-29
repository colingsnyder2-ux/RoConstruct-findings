// roc 2010-06 008a9d55  unit: CXTIconHandle  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9d55
//
// 008a9d55  8bff                 mov edi, edi
// 008a9d57  55                   push ebp
// 008a9d58  8bec                 mov ebp, esp
// 008a9d5a  8b4508               mov eax, dword ptr [ebp + 8]
// 008a9d5d  85c0                 test eax, eax
// 008a9d5f  7c0e                 jl 0x8a9d6f
// 008a9d61  3b4104               cmp eax, dword ptr [ecx + 4]
// 008a9d64  7d09                 jge 0x8a9d6f
// 008a9d66  8b09                 mov ecx, dword ptr [ecx]
// 008a9d68  8d0481               lea eax, [ecx + eax*4]
// 008a9d6b  5d                   pop ebp
// 008a9d6c  c20400               ret 4
// 008a9d6f  6a00                 push 0
// 008a9d71  6a00                 push 0
// 008a9d73  6a01                 push 1
// 008a9d75  688c0000c0           push 0xc000008c
// 008a9d7a  ff15a4a39e00         call dword ptr [0x9ea3a4]
// copied from an identical function in another client (function ??A?$CSimpleArray@PAUHINSTANCE__@@V?$CSimpleArrayEqualHelper@PAUHINSTANCE__@@@ATL@@@ATL@@QAEAAPAUHINSTANCE__@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlbase.obj