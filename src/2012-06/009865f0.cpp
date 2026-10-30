// roc 2012-06 009865f0  unit: IIHH::?$CMap  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009865f0
//
// 009865f0  56                   push esi
// 009865f1  57                   push edi
// 009865f2  8bf9                 mov edi, ecx
// 009865f4  33f6                 xor esi, esi
// 009865f6  397764               cmp dword ptr [edi + 0x64], esi
// 009865f9  7e26                 jle 0x986621
// 009865fb  53                   push ebx
// 009865fc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00986600  85f6                 test esi, esi
// 00986602  7c22                 jl 0x986626
// 00986604  3b7764               cmp esi, dword ptr [edi + 0x64]
// 00986607  7d1d                 jge 0x986626
// 00986609  8b4760               mov eax, dword ptr [edi + 0x60]
// 0098660c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0098660f  8b11                 mov edx, dword ptr [ecx]
// 00986611  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 00986617  53                   push ebx
// 00986618  ffd0                 call eax
// 0098661a  46                   inc esi
// 0098661b  3b7764               cmp esi, dword ptr [edi + 0x64]
// 0098661e  7ce0                 jl 0x986600
// 00986620  5b                   pop ebx
// 00986621  5f                   pop edi
// 00986622  5e                   pop esi
// 00986623  c20400               ret 4
// 00986626  e895bdffff           call 0x9823c0
// copied from an identical function in another client (function ?OnChanged@CXTPControlAction@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp