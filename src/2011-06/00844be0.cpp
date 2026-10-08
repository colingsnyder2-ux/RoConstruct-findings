// from server: 100% by auto
// roc 2011-06 00844be0  unit: CXTPReportSelectedRows  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844be0
//
// 00844be0  53                   push ebx
// 00844be1  55                   push ebp
// 00844be2  8b2d181ba400         mov ebp, dword ptr [0xa41b18]
// 00844be8  56                   push esi
// 00844be9  8bd9                 mov ebx, ecx
// 00844beb  57                   push edi
// 00844bec  c7836c01000000000000 mov dword ptr [ebx + 0x16c], 0
// 00844bf6  be01000000           mov esi, 1
// 00844bfb  8dbb70010000         lea edi, [ebx + 0x170]
// 00844c01  8b8360040000         mov eax, dword ptr [ebx + 0x460]
// 00844c07  56                   push esi
// 00844c08  85c0                 test eax, eax
// 00844c0a  7404                 je 0x844c10
// 00844c0c  ffd0                 call eax
// 00844c0e  eb02                 jmp 0x844c12
// 00844c10  ffd5                 call ebp
// 00844c12  8907                 mov dword ptr [edi], eax
// 00844c14  46                   inc esi
// 00844c15  83c704               add edi, 4
// 00844c18  83fe1e               cmp esi, 0x1e
// 00844c1b  7ce4                 jl 0x844c01
// 00844c1d  5f                   pop edi
// 00844c1e  5e                   pop esi
// 00844c1f  5d                   pop ebp
// 00844c20  5b                   pop ebx
// 00844c21  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?RefreshSysColors@CXTPColorManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
