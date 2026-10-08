// from server: 100% by auto
// roc 2008-06 006df550  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df550
//
// 006df550  53                   push ebx
// 006df551  55                   push ebp
// 006df552  8b2d582b8000         mov ebp, dword ptr [0x802b58]
// 006df558  56                   push esi
// 006df559  8bd9                 mov ebx, ecx
// 006df55b  57                   push edi
// 006df55c  c7836c01000000000000 mov dword ptr [ebx + 0x16c], 0
// 006df566  be01000000           mov esi, 1
// 006df56b  8dbb70010000         lea edi, [ebx + 0x170]
// 006df571  8b8360040000         mov eax, dword ptr [ebx + 0x460]
// 006df577  56                   push esi
// 006df578  85c0                 test eax, eax
// 006df57a  7404                 je 0x6df580
// 006df57c  ffd0                 call eax
// 006df57e  eb02                 jmp 0x6df582
// 006df580  ffd5                 call ebp
// 006df582  8907                 mov dword ptr [edi], eax
// 006df584  46                   inc esi
// 006df585  83c704               add edi, 4
// 006df588  83fe1e               cmp esi, 0x1e
// 006df58b  7ce4                 jl 0x6df571
// 006df58d  5f                   pop edi
// 006df58e  5e                   pop esi
// 006df58f  5d                   pop ebp
// 006df590  5b                   pop ebx
// 006df591  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?RefreshSysColors@CXTPColorManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
