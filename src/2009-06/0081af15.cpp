// roc 2009-06 0081af15  unit: CXTIconHandle  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081af15
//
// 0081af15  8bff                 mov edi, edi
// 0081af17  55                   push ebp
// 0081af18  8bec                 mov ebp, esp
// 0081af1a  8b4508               mov eax, dword ptr [ebp + 8]
// 0081af1d  85c0                 test eax, eax
// 0081af1f  7c0e                 jl 0x81af2f
// 0081af21  3b4104               cmp eax, dword ptr [ecx + 4]
// 0081af24  7d09                 jge 0x81af2f
// 0081af26  8b09                 mov ecx, dword ptr [ecx]
// 0081af28  8d0481               lea eax, [ecx + eax*4]
// 0081af2b  5d                   pop ebp
// 0081af2c  c20400               ret 4
// 0081af2f  6a00                 push 0
// 0081af31  6a00                 push 0
// 0081af33  6a01                 push 1
// 0081af35  688c0000c0           push 0xc000008c
// 0081af3a  ff15fce18900         call dword ptr [0x89e1fc]
// copied from an identical function in another client (function ??A?$CSimpleArray@PAUHINSTANCE__@@V?$CSimpleArrayEqualHelper@PAUHINSTANCE__@@@ATL@@@ATL@@QAEAAPAUHINSTANCE__@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlbase.obj