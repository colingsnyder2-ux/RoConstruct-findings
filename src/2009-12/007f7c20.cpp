// roc 2009-12 007f7c20  unit: IIHH::?$CMap  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7c20
//
// 007f7c20  56                   push esi
// 007f7c21  57                   push edi
// 007f7c22  8bf9                 mov edi, ecx
// 007f7c24  33f6                 xor esi, esi
// 007f7c26  397764               cmp dword ptr [edi + 0x64], esi
// 007f7c29  7e26                 jle 0x7f7c51
// 007f7c2b  53                   push ebx
// 007f7c2c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007f7c30  85f6                 test esi, esi
// 007f7c32  7c22                 jl 0x7f7c56
// 007f7c34  3b7764               cmp esi, dword ptr [edi + 0x64]
// 007f7c37  7d1d                 jge 0x7f7c56
// 007f7c39  8b4760               mov eax, dword ptr [edi + 0x60]
// 007f7c3c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007f7c3f  8b11                 mov edx, dword ptr [ecx]
// 007f7c41  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 007f7c47  53                   push ebx
// 007f7c48  ffd0                 call eax
// 007f7c4a  46                   inc esi
// 007f7c4b  3b7764               cmp esi, dword ptr [edi + 0x64]
// 007f7c4e  7ce0                 jl 0x7f7c30
// 007f7c50  5b                   pop ebx
// 007f7c51  5f                   pop edi
// 007f7c52  5e                   pop esi
// 007f7c53  c20400               ret 4
// 007f7c56  e8b1beffff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnChanged@CXTPControlAction@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp