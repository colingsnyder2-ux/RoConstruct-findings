// roc 2011-06 0080e2d0  unit: PAVCXTPControlAction::?$CArray  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080e2d0
//
// 0080e2d0  56                   push esi
// 0080e2d1  57                   push edi
// 0080e2d2  8bf9                 mov edi, ecx
// 0080e2d4  33f6                 xor esi, esi
// 0080e2d6  397764               cmp dword ptr [edi + 0x64], esi
// 0080e2d9  7e26                 jle 0x80e301
// 0080e2db  53                   push ebx
// 0080e2dc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0080e2e0  85f6                 test esi, esi
// 0080e2e2  7c22                 jl 0x80e306
// 0080e2e4  3b7764               cmp esi, dword ptr [edi + 0x64]
// 0080e2e7  7d1d                 jge 0x80e306
// 0080e2e9  8b4760               mov eax, dword ptr [edi + 0x60]
// 0080e2ec  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0080e2ef  8b11                 mov edx, dword ptr [ecx]
// 0080e2f1  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 0080e2f7  53                   push ebx
// 0080e2f8  ffd0                 call eax
// 0080e2fa  46                   inc esi
// 0080e2fb  3b7764               cmp esi, dword ptr [edi + 0x64]
// 0080e2fe  7ce0                 jl 0x80e2e0
// 0080e300  5b                   pop ebx
// 0080e301  5f                   pop edi
// 0080e302  5e                   pop esi
// 0080e303  c20400               ret 4
// 0080e306  e8ffbfffff           call 0x80a30a
// copied from an identical function in another client (function ?OnChanged@CXTPControlAction@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp