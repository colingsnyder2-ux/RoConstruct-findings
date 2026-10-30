// roc 2009-06 007214d0  unit: PAVCXTPControlAction::?$CArray  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007214d0
//
// 007214d0  56                   push esi
// 007214d1  57                   push edi
// 007214d2  8bf9                 mov edi, ecx
// 007214d4  33f6                 xor esi, esi
// 007214d6  397764               cmp dword ptr [edi + 0x64], esi
// 007214d9  7e26                 jle 0x721501
// 007214db  53                   push ebx
// 007214dc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007214e0  85f6                 test esi, esi
// 007214e2  7c22                 jl 0x721506
// 007214e4  3b7764               cmp esi, dword ptr [edi + 0x64]
// 007214e7  7d1d                 jge 0x721506
// 007214e9  8b4760               mov eax, dword ptr [edi + 0x60]
// 007214ec  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007214ef  8b11                 mov edx, dword ptr [ecx]
// 007214f1  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 007214f7  53                   push ebx
// 007214f8  ffd0                 call eax
// 007214fa  46                   inc esi
// 007214fb  3b7764               cmp esi, dword ptr [edi + 0x64]
// 007214fe  7ce0                 jl 0x7214e0
// 00721500  5b                   pop ebx
// 00721501  5f                   pop edi
// 00721502  5e                   pop esi
// 00721503  c20400               ret 4
// 00721506  e8d977ffff           call 0x718ce4
// copied from an identical function in another client (function ?OnChanged@CXTPControlAction@@IAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp