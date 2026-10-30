// roc 2009-12 008c8510  unit: VCEdit::?$CXTMaskEditT  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c8510
//
// 008c8510  53                   push ebx
// 008c8511  56                   push esi
// 008c8512  8bf1                 mov esi, ecx
// 008c8514  57                   push edi
// 008c8515  8d8e84000000         lea ecx, [esi + 0x84]
// 008c851b  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c8521  8bd8                 mov ebx, eax
// 008c8523  8b4654               mov eax, dword ptr [esi + 0x54]
// 008c8526  3bc3                 cmp eax, ebx
// 008c8528  8d7e54               lea edi, [esi + 0x54]
// 008c852b  7c12                 jl 0x8c853f
// 008c852d  8b06                 mov eax, dword ptr [esi]
// 008c852f  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008c8535  8bce                 mov ecx, esi
// 008c8537  ffd2                 call edx
// 008c8539  5f                   pop edi
// 008c853a  5e                   pop esi
// 008c853b  5b                   pop ebx
// 008c853c  c20400               ret 4
// 008c853f  3b4658               cmp eax, dword ptr [esi + 0x58]
// 008c8542  7407                 je 0x8c854b
// 008c8544  8bce                 mov ecx, esi
// 008c8546  e8d5feffff           call 0x8c8420
// 008c854b  6a01                 push 1
// 008c854d  57                   push edi
// 008c854e  8bce                 mov ecx, esi
// 008c8550  e8abf8ffff           call 0x8c7e00
// 008c8555  837e6000             cmp dword ptr [esi + 0x60], 0
// 008c8559  7416                 je 0x8c8571
// 008c855b  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c855f  8b0f                 mov ecx, dword ptr [edi]
// 008c8561  50                   push eax
// 008c8562  51                   push ecx
// 008c8563  8d8e80000000         lea ecx, [esi + 0x80]
// 008c8569  ff1540dc9800         call dword ptr [0x98dc40]
// 008c856f  eb0f                 jmp 0x8c8580
// 008c8571  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c8575  8b07                 mov eax, dword ptr [edi]
// 008c8577  52                   push edx
// 008c8578  50                   push eax
// 008c8579  8bce                 mov ecx, esi
// 008c857b  e820faffff           call 0x8c7fa0
// 008c8580  8b07                 mov eax, dword ptr [edi]
// 008c8582  3bc3                 cmp eax, ebx
// 008c8584  7d03                 jge 0x8c8589
// 008c8586  40                   inc eax
// 008c8587  8907                 mov dword ptr [edi], eax
// 008c8589  6a01                 push 1
// 008c858b  57                   push edi
// 008c858c  8bce                 mov ecx, esi
// 008c858e  e86df8ffff           call 0x8c7e00
// 008c8593  8b0f                 mov ecx, dword ptr [edi]
// 008c8595  5f                   pop edi
// 008c8596  894e58               mov dword ptr [esi + 0x58], ecx
// 008c8599  5e                   pop esi
// 008c859a  5b                   pop ebx
// 008c859b  c20400               ret 4
// copied from an identical function in another client (function ?ProcessChar@?$CXTMaskEditT@VCEdit@@@@IAEXD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp