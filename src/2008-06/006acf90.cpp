// roc 2008-06 006acf90  unit: PAVCXTPControlAction::?$CArray  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006acf90
//
// 006acf90  53                   push ebx
// 006acf91  56                   push esi
// 006acf92  8bd9                 mov ebx, ecx
// 006acf94  33f6                 xor esi, esi
// 006acf96  e805d60400           call 0x6fa5a0
// 006acf9b  85c0                 test eax, eax
// 006acf9d  7e26                 jle 0x6acfc5
// 006acf9f  57                   push edi
// 006acfa0  56                   push esi
// 006acfa1  8bcb                 mov ecx, ebx
// 006acfa3  e898560600           call 0x712640
// 006acfa8  8bf8                 mov edi, eax
// 006acfaa  8bcf                 mov ecx, edi
// 006acfac  e8bffeffff           call 0x6ace70
// 006acfb1  8bcf                 mov ecx, edi
// 006acfb3  e82c3cffff           call 0x6a0be4
// 006acfb8  8bcb                 mov ecx, ebx
// 006acfba  46                   inc esi
// 006acfbb  e8e0d50400           call 0x6fa5a0
// 006acfc0  3bf0                 cmp esi, eax
// 006acfc2  7cdc                 jl 0x6acfa0
// 006acfc4  5f                   pop edi
// 006acfc5  6aff                 push -1
// 006acfc7  6a00                 push 0
// 006acfc9  8d4b20               lea ecx, [ebx + 0x20]
// 006acfcc  e8ff110600           call 0x70e1d0
// 006acfd1  5e                   pop esi
// 006acfd2  5b                   pop ebx
// 006acfd3  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@Outer@ns_ROCX000000@ns_ROCX000059@@QAEXXZ)

namespace ns_ROCX000000 {
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
}
