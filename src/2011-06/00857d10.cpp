// from server: 100% by auto
// roc 2011-06 00857d10  unit: CXTPControls  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00857d10
//
// 00857d10  53                   push ebx
// 00857d11  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00857d15  55                   push ebp
// 00857d16  f7db                 neg ebx
// 00857d18  56                   push esi
// 00857d19  1bdb                 sbb ebx, ebx
// 00857d1b  57                   push edi
// 00857d1c  8bf9                 mov edi, ecx
// 00857d1e  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00857d21  83e3fe               and ebx, 0xfffffffe
// 00857d24  83c302               add ebx, 2
// 00857d27  33f6                 xor esi, esi
// 00857d29  85c0                 test eax, eax
// 00857d2b  7e37                 jle 0x857d64
// 00857d2d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00857d31  85f6                 test esi, esi
// 00857d33  7c11                 jl 0x857d46
// 00857d35  3bf0                 cmp esi, eax
// 00857d37  7d0d                 jge 0x857d46
// 00857d39  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00857d3c  7d2f                 jge 0x857d6d
// 00857d3e  8b4728               mov eax, dword ptr [edi + 0x28]
// 00857d41  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00857d44  eb02                 jmp 0x857d48
// 00857d46  33c9                 xor ecx, ecx
// 00857d48  8b11                 mov edx, dword ptr [ecx]
// 00857d4a  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00857d50  53                   push ebx
// 00857d51  ffd0                 call eax
// 00857d53  85c0                 test eax, eax
// 00857d55  7405                 je 0x857d5c
// 00857d57  85ed                 test ebp, ebp
// 00857d59  7417                 je 0x857d72
// 00857d5b  4d                   dec ebp
// 00857d5c  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00857d5f  46                   inc esi
// 00857d60  3bf0                 cmp esi, eax
// 00857d62  7ccd                 jl 0x857d31
// 00857d64  5f                   pop edi
// 00857d65  5e                   pop esi
// 00857d66  5d                   pop ebp
// 00857d67  33c0                 xor eax, eax
// 00857d69  5b                   pop ebx
// 00857d6a  c20800               ret 8
// 00857d6d  e89825fbff           call 0x80a30a
// 00857d72  85f6                 test esi, esi
// 00857d74  7cee                 jl 0x857d64
// 00857d76  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00857d79  7de9                 jge 0x857d64
// 00857d7b  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00857d7e  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00857d81  5f                   pop edi
// 00857d82  5e                   pop esi
// 00857d83  5d                   pop ebp
// 00857d84  5b                   pop ebx
// 00857d85  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?GetVisibleAt@CXTPControls@@QBEPAVCXTPControl@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
