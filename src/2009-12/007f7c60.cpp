// roc 2009-12 007f7c60  unit: IIHH::?$CMap  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7c60
//
// 007f7c60  56                   push esi
// 007f7c61  57                   push edi
// 007f7c62  8bf9                 mov edi, ecx
// 007f7c64  33f6                 xor esi, esi
// 007f7c66  397764               cmp dword ptr [edi + 0x64], esi
// 007f7c69  7e26                 jle 0x7f7c91
// 007f7c6b  53                   push ebx
// 007f7c6c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007f7c70  85f6                 test esi, esi
// 007f7c72  7c22                 jl 0x7f7c96
// 007f7c74  3b7764               cmp esi, dword ptr [edi + 0x64]
// 007f7c77  7d1d                 jge 0x7f7c96
// 007f7c79  8b4760               mov eax, dword ptr [edi + 0x60]
// 007f7c7c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007f7c7f  8b11                 mov edx, dword ptr [ecx]
// 007f7c81  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 007f7c87  53                   push ebx
// 007f7c88  ffd0                 call eax
// 007f7c8a  46                   inc esi
// 007f7c8b  3b7764               cmp esi, dword ptr [edi + 0x64]
// 007f7c8e  7ce0                 jl 0x7f7c70
// 007f7c90  5b                   pop ebx
// 007f7c91  5f                   pop edi
// 007f7c92  5e                   pop esi
// 007f7c93  c20400               ret 4
// 007f7c96  e871beffff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnChanging@CXTPControlAction@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp