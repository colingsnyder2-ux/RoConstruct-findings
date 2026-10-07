// roc 2012-06 009bd010  unit: CXTPReportSelectedRows  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bd010
//
// 009bd010  53                   push ebx
// 009bd011  55                   push ebp
// 009bd012  8b2dd83cb200         mov ebp, dword ptr [0xb23cd8]
// 009bd018  56                   push esi
// 009bd019  8bd9                 mov ebx, ecx
// 009bd01b  57                   push edi
// 009bd01c  c7836c01000000000000 mov dword ptr [ebx + 0x16c], 0
// 009bd026  be01000000           mov esi, 1
// 009bd02b  8dbb70010000         lea edi, [ebx + 0x170]
// 009bd031  8b8360040000         mov eax, dword ptr [ebx + 0x460]
// 009bd037  56                   push esi
// 009bd038  85c0                 test eax, eax
// 009bd03a  7404                 je 0x9bd040
// 009bd03c  ffd0                 call eax
// 009bd03e  eb02                 jmp 0x9bd042
// 009bd040  ffd5                 call ebp
// 009bd042  8907                 mov dword ptr [edi], eax
// 009bd044  46                   inc esi
// 009bd045  83c704               add edi, 4
// 009bd048  83fe1e               cmp esi, 0x1e
// 009bd04b  7ce4                 jl 0x9bd031
// 009bd04d  5f                   pop edi
// 009bd04e  5e                   pop esi
// 009bd04f  5d                   pop ebp
// 009bd050  5b                   pop ebx
// 009bd051  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?RefreshSysColors@CXTPColorManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
