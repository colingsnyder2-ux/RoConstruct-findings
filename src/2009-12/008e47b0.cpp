// roc 2009-12 008e47b0  unit: CXTCaptionTheme  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e47b0
//
// 008e47b0  6aff                 push -1
// 008e47b2  68585f9600           push 0x965f58
// 008e47b7  64a100000000         mov eax, dword ptr fs:[0]
// 008e47bd  50                   push eax
// 008e47be  83ec20               sub esp, 0x20
// 008e47c1  53                   push ebx
// 008e47c2  56                   push esi
// 008e47c3  57                   push edi
// 008e47c4  a10052b600           mov eax, dword ptr [0xb65200]
// 008e47c9  33c4                 xor eax, esp
// 008e47cb  50                   push eax
// 008e47cc  8d442430             lea eax, [esp + 0x30]
// 008e47d0  64a300000000         mov dword ptr fs:[0], eax
// 008e47d6  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008e47da  8d9fd0000000         lea ebx, [edi + 0xd0]
// 008e47e0  8bcb                 mov ecx, ebx
// 008e47e2  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008e47e8  84c0                 test al, al
// 008e47ea  0f8581000000         jne 0x8e4871
// 008e47f0  8b07                 mov eax, dword ptr [edi]
// 008e47f2  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 008e47f8  8d4c2410             lea ecx, [esp + 0x10]
// 008e47fc  51                   push ecx
// 008e47fd  8bcf                 mov ecx, edi
// 008e47ff  ffd2                 call edx
// 008e4801  8b4720               mov eax, dword ptr [edi + 0x20]
// 008e4804  6a00                 push 0
// 008e4806  6a00                 push 0
// 008e4808  6a31                 push 0x31
// 008e480a  50                   push eax
// 008e480b  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008e4811  50                   push eax
// 008e4812  e84dfbf0ff           call 0x7f4364
// 008e4817  8b742440             mov esi, dword ptr [esp + 0x40]
// 008e481b  50                   push eax
// 008e481c  56                   push esi
// 008e481d  8d4c2428             lea ecx, [esp + 0x28]
// 008e4821  e83a6ef6ff           call 0x84b660
// 008e4826  8b16                 mov edx, dword ptr [esi]
// 008e4828  8b4778               mov eax, dword ptr [edi + 0x78]
// 008e482b  8b5238               mov edx, dword ptr [edx + 0x38]
// 008e482e  50                   push eax
// 008e482f  8bce                 mov ecx, esi
// 008e4831  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008e4839  ffd2                 call edx
// 008e483b  8b3e                 mov edi, dword ptr [esi]
// 008e483d  6825880000           push 0x8825
// 008e4842  8d442414             lea eax, [esp + 0x14]
// 008e4846  50                   push eax
// 008e4847  8bcb                 mov ecx, ebx
// 008e4849  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008e484f  50                   push eax
// 008e4850  8bcb                 mov ecx, ebx
// 008e4852  ff1580de9800         call dword ptr [0x98de80]
// 008e4858  8b5770               mov edx, dword ptr [edi + 0x70]
// 008e485b  50                   push eax
// 008e485c  8bce                 mov ecx, esi
// 008e485e  ffd2                 call edx
// 008e4860  8d4c2420             lea ecx, [esp + 0x20]
// 008e4864  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008e486c  e86f6ef6ff           call 0x84b6e0
// 008e4871  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008e4875  64890d00000000       mov dword ptr fs:[0], ecx
// 008e487c  59                   pop ecx
// 008e487d  5f                   pop edi
// 008e487e  5e                   pop esi
// 008e487f  5b                   pop ebx
// 008e4880  83c42c               add esp, 0x2c
// 008e4883  c20800               ret 8
// copied from an identical function in another client (function ?DrawCaptionText@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTCaptionTheme.cpp