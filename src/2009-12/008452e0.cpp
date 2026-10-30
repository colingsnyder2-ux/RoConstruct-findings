// roc 2009-12 008452e0  unit: CXTPControls  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008452e0
//
// 008452e0  56                   push esi
// 008452e1  57                   push edi
// 008452e2  8bf1                 mov esi, ecx
// 008452e4  8b7e2c               mov edi, dword ptr [esi + 0x2c]
// 008452e7  83ef01               sub edi, 1
// 008452ea  7847                 js 0x845333
// 008452ec  53                   push ebx
// 008452ed  8d4900               lea ecx, [ecx]
// 008452f0  85ff                 test edi, edi
// 008452f2  7c0d                 jl 0x845301
// 008452f4  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 008452f7  7d08                 jge 0x845301
// 008452f9  8b4628               mov eax, dword ptr [esi + 0x28]
// 008452fc  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 008452ff  eb02                 jmp 0x845303
// 00845301  33db                 xor ebx, ebx
// 00845303  8b16                 mov edx, dword ptr [esi]
// 00845305  8b4270               mov eax, dword ptr [edx + 0x70]
// 00845308  53                   push ebx
// 00845309  8bce                 mov ecx, esi
// 0084530b  ffd0                 call eax
// 0084530d  85c0                 test eax, eax
// 0084530f  751c                 jne 0x84532d
// 00845311  6a01                 push 1
// 00845313  57                   push edi
// 00845314  8d4e24               lea ecx, [esi + 0x24]
// 00845317  e8647ffeff           call 0x82d280
// 0084531c  8b16                 mov edx, dword ptr [esi]
// 0084531e  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00845321  53                   push ebx
// 00845322  8bce                 mov ecx, esi
// 00845324  ffd0                 call eax
// 00845326  8bcb                 mov ecx, ebx
// 00845328  e8afeafaff           call 0x7f3ddc
// 0084532d  83ef01               sub edi, 1
// 00845330  79be                 jns 0x8452f0
// 00845332  5b                   pop ebx
// 00845333  5f                   pop edi
// 00845334  5e                   pop esi
// 00845335  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@CXTPControls@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp