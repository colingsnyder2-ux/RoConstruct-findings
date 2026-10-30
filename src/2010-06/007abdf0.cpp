// roc 2010-06 007abdf0  unit: PAVCXTPControlAction::?$CArray  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007abdf0
//
// 007abdf0  56                   push esi
// 007abdf1  57                   push edi
// 007abdf2  8bf9                 mov edi, ecx
// 007abdf4  33f6                 xor esi, esi
// 007abdf6  397764               cmp dword ptr [edi + 0x64], esi
// 007abdf9  7e26                 jle 0x7abe21
// 007abdfb  53                   push ebx
// 007abdfc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007abe00  85f6                 test esi, esi
// 007abe02  7c22                 jl 0x7abe26
// 007abe04  3b7764               cmp esi, dword ptr [edi + 0x64]
// 007abe07  7d1d                 jge 0x7abe26
// 007abe09  8b4760               mov eax, dword ptr [edi + 0x60]
// 007abe0c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007abe0f  8b11                 mov edx, dword ptr [ecx]
// 007abe11  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 007abe17  53                   push ebx
// 007abe18  ffd0                 call eax
// 007abe1a  46                   inc esi
// 007abe1b  3b7764               cmp esi, dword ptr [edi + 0x64]
// 007abe1e  7ce0                 jl 0x7abe00
// 007abe20  5b                   pop ebx
// 007abe21  5f                   pop edi
// 007abe22  5e                   pop esi
// 007abe23  c20400               ret 4
// 007abe26  e821beffff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnChanged@CXTPControlAction@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp