// roc 2010-06 007abe30  unit: PAVCXTPControlAction::?$CArray  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007abe30
//
// 007abe30  56                   push esi
// 007abe31  57                   push edi
// 007abe32  8bf9                 mov edi, ecx
// 007abe34  33f6                 xor esi, esi
// 007abe36  397764               cmp dword ptr [edi + 0x64], esi
// 007abe39  7e26                 jle 0x7abe61
// 007abe3b  53                   push ebx
// 007abe3c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007abe40  85f6                 test esi, esi
// 007abe42  7c22                 jl 0x7abe66
// 007abe44  3b7764               cmp esi, dword ptr [edi + 0x64]
// 007abe47  7d1d                 jge 0x7abe66
// 007abe49  8b4760               mov eax, dword ptr [edi + 0x60]
// 007abe4c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007abe4f  8b11                 mov edx, dword ptr [ecx]
// 007abe51  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 007abe57  53                   push ebx
// 007abe58  ffd0                 call eax
// 007abe5a  46                   inc esi
// 007abe5b  3b7764               cmp esi, dword ptr [edi + 0x64]
// 007abe5e  7ce0                 jl 0x7abe40
// 007abe60  5b                   pop ebx
// 007abe61  5f                   pop edi
// 007abe62  5e                   pop esi
// 007abe63  c20400               ret 4
// 007abe66  e8e1bdffff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnChanging@CXTPControlAction@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp