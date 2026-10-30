// roc 2012-06 00986630  unit: IIHH::?$CMap  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00986630
//
// 00986630  56                   push esi
// 00986631  57                   push edi
// 00986632  8bf9                 mov edi, ecx
// 00986634  33f6                 xor esi, esi
// 00986636  397764               cmp dword ptr [edi + 0x64], esi
// 00986639  7e26                 jle 0x986661
// 0098663b  53                   push ebx
// 0098663c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00986640  85f6                 test esi, esi
// 00986642  7c22                 jl 0x986666
// 00986644  3b7764               cmp esi, dword ptr [edi + 0x64]
// 00986647  7d1d                 jge 0x986666
// 00986649  8b4760               mov eax, dword ptr [edi + 0x60]
// 0098664c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0098664f  8b11                 mov edx, dword ptr [ecx]
// 00986651  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 00986657  53                   push ebx
// 00986658  ffd0                 call eax
// 0098665a  46                   inc esi
// 0098665b  3b7764               cmp esi, dword ptr [edi + 0x64]
// 0098665e  7ce0                 jl 0x986640
// 00986660  5b                   pop ebx
// 00986661  5f                   pop edi
// 00986662  5e                   pop esi
// 00986663  c20400               ret 4
// 00986666  e855bdffff           call 0x9823c0
// copied from an identical function in another client (function ?OnChanging@CXTPControlAction@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp