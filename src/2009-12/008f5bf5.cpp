// roc 2009-12 008f5bf5  unit: CXTIconHandle  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5bf5
//
// 008f5bf5  8bff                 mov edi, edi
// 008f5bf7  55                   push ebp
// 008f5bf8  8bec                 mov ebp, esp
// 008f5bfa  8b4508               mov eax, dword ptr [ebp + 8]
// 008f5bfd  85c0                 test eax, eax
// 008f5bff  7c0e                 jl 0x8f5c0f
// 008f5c01  3b4104               cmp eax, dword ptr [ecx + 4]
// 008f5c04  7d09                 jge 0x8f5c0f
// 008f5c06  8b09                 mov ecx, dword ptr [ecx]
// 008f5c08  8d0481               lea eax, [ecx + eax*4]
// 008f5c0b  5d                   pop ebp
// 008f5c0c  c20400               ret 4
// 008f5c0f  6a00                 push 0
// 008f5c11  6a00                 push 0
// 008f5c13  6a01                 push 1
// 008f5c15  688c0000c0           push 0xc000008c
// 008f5c1a  ff1534b29800         call dword ptr [0x98b234]
// copied from an identical function in another client (function ??A?$CSimpleArray@PAUHINSTANCE__@@V?$CSimpleArrayEqualHelper@PAUHINSTANCE__@@@ATL@@@ATL@@QAEAAPAUHINSTANCE__@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlbase.obj