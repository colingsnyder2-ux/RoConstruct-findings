// roc 2008-06 006f2c10  unit: CXTPControls  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f2c10
//
// 006f2c10  53                   push ebx
// 006f2c11  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006f2c15  55                   push ebp
// 006f2c16  f7db                 neg ebx
// 006f2c18  56                   push esi
// 006f2c19  1bdb                 sbb ebx, ebx
// 006f2c1b  57                   push edi
// 006f2c1c  8bf9                 mov edi, ecx
// 006f2c1e  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006f2c21  83e3fe               and ebx, 0xfffffffe
// 006f2c24  83c302               add ebx, 2
// 006f2c27  33f6                 xor esi, esi
// 006f2c29  85c0                 test eax, eax
// 006f2c2b  7e37                 jle 0x6f2c64
// 006f2c2d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006f2c31  85f6                 test esi, esi
// 006f2c33  7c11                 jl 0x6f2c46
// 006f2c35  3bf0                 cmp esi, eax
// 006f2c37  7d0d                 jge 0x6f2c46
// 006f2c39  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 006f2c3c  7d2f                 jge 0x6f2c6d
// 006f2c3e  8b4728               mov eax, dword ptr [edi + 0x28]
// 006f2c41  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006f2c44  eb02                 jmp 0x6f2c48
// 006f2c46  33c9                 xor ecx, ecx
// 006f2c48  8b11                 mov edx, dword ptr [ecx]
// 006f2c4a  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 006f2c50  53                   push ebx
// 006f2c51  ffd0                 call eax
// 006f2c53  85c0                 test eax, eax
// 006f2c55  7405                 je 0x6f2c5c
// 006f2c57  85ed                 test ebp, ebp
// 006f2c59  7417                 je 0x6f2c72
// 006f2c5b  4d                   dec ebp
// 006f2c5c  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006f2c5f  46                   inc esi
// 006f2c60  3bf0                 cmp esi, eax
// 006f2c62  7ccd                 jl 0x6f2c31
// 006f2c64  5f                   pop edi
// 006f2c65  5e                   pop esi
// 006f2c66  5d                   pop ebp
// 006f2c67  33c0                 xor eax, eax
// 006f2c69  5b                   pop ebx
// 006f2c6a  c20800               ret 8
// 006f2c6d  e8d2dcfaff           call 0x6a0944
// 006f2c72  85f6                 test esi, esi
// 006f2c74  7cee                 jl 0x6f2c64
// 006f2c76  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 006f2c79  7de9                 jge 0x6f2c64
// 006f2c7b  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 006f2c7e  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 006f2c81  5f                   pop edi
// 006f2c82  5e                   pop esi
// 006f2c83  5d                   pop ebp
// 006f2c84  5b                   pop ebx
// 006f2c85  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?GetVisibleAt@CXTPControls@@QBEPAVCXTPControl@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
