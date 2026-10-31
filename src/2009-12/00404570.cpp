// roc 2009-12 00404570  unit: VCApp::?$CComObject  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00404570
//
// 00404570  55                   push ebp
// 00404571  8bec                 mov ebp, esp
// 00404573  6aff                 push -1
// 00404575  68a8709200           push 0x9270a8
// 0040457a  64a100000000         mov eax, dword ptr fs:[0]
// 00404580  50                   push eax
// 00404581  64892500000000       mov dword ptr fs:[0], esp
// 00404588  51                   push ecx
// 00404589  56                   push esi
// 0040458a  57                   push edi
// 0040458b  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040458e  894df0               mov dword ptr [ebp - 0x10], ecx
// 00404591  85ff                 test edi, edi
// 00404593  7478                 je 0x40460d
// 00404595  c7450800000000       mov dword ptr [ebp + 8], 0
// 0040459c  57                   push edi
// 0040459d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004045a4  ff1538b29800         call dword ptr [0x98b238]
// 004045aa  6a00                 push 0
// 004045ac  40                   inc eax
// 004045ad  99                   cdq 
// 004045ae  6a02                 push 2
// 004045b0  52                   push edx
// 004045b1  50                   push eax
// 004045b2  e8b9043f00           call 0x7f4a70
// 004045b7  8bf0                 mov esi, eax
// 004045b9  0500000080           add eax, 0x80000000
// 004045be  83d200               adc edx, 0
// 004045c1  85d2                 test edx, edx
// 004045c3  7740                 ja 0x404605
// 004045c5  7205                 jb 0x4045cc
// 004045c7  83f8ff               cmp eax, -1
// 004045ca  7739                 ja 0x404605
// 004045cc  81fe00040000         cmp esi, 0x400
// 004045d2  7f18                 jg 0x4045ec
// 004045d4  56                   push esi
// 004045d5  e816f5ffff           call 0x403af0
// 004045da  83c404               add esp, 4
// 004045dd  84c0                 test al, al
// 004045df  740b                 je 0x4045ec
// 004045e1  8bc6                 mov eax, esi
// 004045e3  e858043f00           call 0x7f4a40
// 004045e8  8bc4                 mov eax, esp
// 004045ea  eb09                 jmp 0x4045f5
// 004045ec  56                   push esi
// 004045ed  8d4d08               lea ecx, [ebp + 8]
// 004045f0  e89bfaffff           call 0x404090
// 004045f5  6a03                 push 3
// 004045f7  56                   push esi
// 004045f8  57                   push edi
// 004045f9  50                   push eax
// 004045fa  e811e5ffff           call 0x402b10
// 004045ff  8bf0                 mov esi, eax
// 00404601  85f6                 test esi, esi
// 00404603  750c                 jne 0x404611
// 00404605  8d4d08               lea ecx, [ebp + 8]
// 00404608  e873f2ffff           call 0x403880
// 0040460d  33c0                 xor eax, eax
// 0040460f  eb1d                 jmp 0x40462e
// 00404611  56                   push esi
// 00404612  ff1518b29800         call dword ptr [0x98b218]
// 00404618  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0040461b  50                   push eax
// 0040461c  56                   push esi
// 0040461d  e8aee9ffff           call 0x402fd0
// 00404622  8d4d08               lea ecx, [ebp + 8]
// 00404625  8bf0                 mov esi, eax
// 00404627  e854f2ffff           call 0x403880
// 0040462c  8bc6                 mov eax, esi
// 0040462e  8d65e8               lea esp, [ebp - 0x18]
// 00404631  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00404634  64890d00000000       mov dword ptr fs:[0], ecx
// 0040463b  5f                   pop edi
// 0040463c  5e                   pop esi
// 0040463d  8be5                 mov esp, ebp
// 0040463f  5d                   pop ebp
// 00404640  c20400               ret 4
// copied from an identical function in another client (function ?AddString@CParseBuffer@CRegParser@ATL@@QAEHPB_W@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp