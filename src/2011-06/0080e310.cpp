// roc 2011-06 0080e310  unit: PAVCXTPControlAction::?$CArray  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080e310
//
// 0080e310  56                   push esi
// 0080e311  57                   push edi
// 0080e312  8bf9                 mov edi, ecx
// 0080e314  33f6                 xor esi, esi
// 0080e316  397764               cmp dword ptr [edi + 0x64], esi
// 0080e319  7e26                 jle 0x80e341
// 0080e31b  53                   push ebx
// 0080e31c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0080e320  85f6                 test esi, esi
// 0080e322  7c22                 jl 0x80e346
// 0080e324  3b7764               cmp esi, dword ptr [edi + 0x64]
// 0080e327  7d1d                 jge 0x80e346
// 0080e329  8b4760               mov eax, dword ptr [edi + 0x60]
// 0080e32c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0080e32f  8b11                 mov edx, dword ptr [ecx]
// 0080e331  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 0080e337  53                   push ebx
// 0080e338  ffd0                 call eax
// 0080e33a  46                   inc esi
// 0080e33b  3b7764               cmp esi, dword ptr [edi + 0x64]
// 0080e33e  7ce0                 jl 0x80e320
// 0080e340  5b                   pop ebx
// 0080e341  5f                   pop edi
// 0080e342  5e                   pop esi
// 0080e343  c20400               ret 4
// 0080e346  e8bfbfffff           call 0x80a30a
// copied from an identical function in another client (function ?OnChanging@CXTPControlAction@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp