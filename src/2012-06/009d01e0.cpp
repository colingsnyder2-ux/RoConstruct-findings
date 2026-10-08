// from server: 100% by auto
// roc 2012-06 009d01e0  unit: CXTPControls  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d01e0
//
// 009d01e0  53                   push ebx
// 009d01e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 009d01e5  55                   push ebp
// 009d01e6  f7db                 neg ebx
// 009d01e8  56                   push esi
// 009d01e9  1bdb                 sbb ebx, ebx
// 009d01eb  57                   push edi
// 009d01ec  8bf9                 mov edi, ecx
// 009d01ee  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009d01f1  83e3fe               and ebx, 0xfffffffe
// 009d01f4  83c302               add ebx, 2
// 009d01f7  33f6                 xor esi, esi
// 009d01f9  85c0                 test eax, eax
// 009d01fb  7e37                 jle 0x9d0234
// 009d01fd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009d0201  85f6                 test esi, esi
// 009d0203  7c11                 jl 0x9d0216
// 009d0205  3bf0                 cmp esi, eax
// 009d0207  7d0d                 jge 0x9d0216
// 009d0209  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 009d020c  7d2f                 jge 0x9d023d
// 009d020e  8b4728               mov eax, dword ptr [edi + 0x28]
// 009d0211  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009d0214  eb02                 jmp 0x9d0218
// 009d0216  33c9                 xor ecx, ecx
// 009d0218  8b11                 mov edx, dword ptr [ecx]
// 009d021a  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 009d0220  53                   push ebx
// 009d0221  ffd0                 call eax
// 009d0223  85c0                 test eax, eax
// 009d0225  7405                 je 0x9d022c
// 009d0227  85ed                 test ebp, ebp
// 009d0229  7417                 je 0x9d0242
// 009d022b  4d                   dec ebp
// 009d022c  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009d022f  46                   inc esi
// 009d0230  3bf0                 cmp esi, eax
// 009d0232  7ccd                 jl 0x9d0201
// 009d0234  5f                   pop edi
// 009d0235  5e                   pop esi
// 009d0236  5d                   pop ebp
// 009d0237  33c0                 xor eax, eax
// 009d0239  5b                   pop ebx
// 009d023a  c20800               ret 8
// 009d023d  e87e21fbff           call 0x9823c0
// 009d0242  85f6                 test esi, esi
// 009d0244  7cee                 jl 0x9d0234
// 009d0246  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 009d0249  7de9                 jge 0x9d0234
// 009d024b  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 009d024e  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 009d0251  5f                   pop edi
// 009d0252  5e                   pop esi
// 009d0253  5d                   pop ebp
// 009d0254  5b                   pop ebx
// 009d0255  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControls.cpp (function ?GetVisibleAt@CXTPControls@@QBEPAVCXTPControl@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControls.cpp
