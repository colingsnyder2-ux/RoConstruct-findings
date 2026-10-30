// roc 2009-12 00845620  unit: CXTPControls  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845620
//
// 00845620  53                   push ebx
// 00845621  55                   push ebp
// 00845622  8bd9                 mov ebx, ecx
// 00845624  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 00845627  56                   push esi
// 00845628  33f6                 xor esi, esi
// 0084562a  57                   push edi
// 0084562b  85c0                 test eax, eax
// 0084562d  7e4e                 jle 0x84567d
// 0084562f  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 00845635  85f6                 test esi, esi
// 00845637  7c11                 jl 0x84564a
// 00845639  3bf0                 cmp esi, eax
// 0084563b  7d0d                 jge 0x84564a
// 0084563d  3b732c               cmp esi, dword ptr [ebx + 0x2c]
// 00845640  7d44                 jge 0x845686
// 00845642  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00845645  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 00845648  eb02                 jmp 0x84564c
// 0084564a  33ff                 xor edi, edi
// 0084564c  8b17                 mov edx, dword ptr [edi]
// 0084564e  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00845654  6a00                 push 0
// 00845656  8bcf                 mov ecx, edi
// 00845658  ffd0                 call eax
// 0084565a  85c0                 test eax, eax
// 0084565c  7417                 je 0x845675
// 0084565e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00845662  8b542414             mov edx, dword ptr [esp + 0x14]
// 00845666  51                   push ecx
// 00845667  52                   push edx
// 00845668  8d87c0000000         lea eax, [edi + 0xc0]
// 0084566e  50                   push eax
// 0084566f  ffd5                 call ebp
// 00845671  85c0                 test eax, eax
// 00845673  7516                 jne 0x84568b
// 00845675  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 00845678  46                   inc esi
// 00845679  3bf0                 cmp esi, eax
// 0084567b  7cb8                 jl 0x845635
// 0084567d  5f                   pop edi
// 0084567e  5e                   pop esi
// 0084567f  5d                   pop ebp
// 00845680  33c0                 xor eax, eax
// 00845682  5b                   pop ebx
// 00845683  c20800               ret 8
// 00845686  e881e4faff           call 0x7f3b0c
// 0084568b  8bc7                 mov eax, edi
// 0084568d  5f                   pop edi
// 0084568e  5e                   pop esi
// 0084568f  5d                   pop ebp
// 00845690  5b                   pop ebx
// 00845691  c20800               ret 8
// copied from an identical function in another client (function ?HitTest@CXTPControls@@QBEPAVCXTPControl@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp