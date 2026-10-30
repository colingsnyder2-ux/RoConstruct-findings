// roc 2009-12 0085bcf0  unit: CXTPStatusBarPane  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085bcf0
//
// 0085bcf0  83ec10               sub esp, 0x10
// 0085bcf3  53                   push ebx
// 0085bcf4  55                   push ebp
// 0085bcf5  56                   push esi
// 0085bcf6  57                   push edi
// 0085bcf7  8bf9                 mov edi, ecx
// 0085bcf9  33db                 xor ebx, ebx
// 0085bcfb  33f6                 xor esi, esi
// 0085bcfd  399fa0000000         cmp dword ptr [edi + 0xa0], ebx
// 0085bd03  7e54                 jle 0x85bd59
// 0085bd05  56                   push esi
// 0085bd06  8bcf                 mov ecx, edi
// 0085bd08  e8f3f5ffff           call 0x85b300
// 0085bd0d  8be8                 mov ebp, eax
// 0085bd0f  8bcd                 mov ecx, ebp
// 0085bd11  e8da76f1ff           call 0x7733f0
// 0085bd16  85c0                 test eax, eax
// 0085bd18  7436                 je 0x85bd50
// 0085bd1a  8d442410             lea eax, [esp + 0x10]
// 0085bd1e  50                   push eax
// 0085bd1f  56                   push esi
// 0085bd20  8bcf                 mov ecx, edi
// 0085bd22  895c2418             mov dword ptr [esp + 0x18], ebx
// 0085bd26  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0085bd2a  895c2420             mov dword ptr [esp + 0x20], ebx
// 0085bd2e  895c2424             mov dword ptr [esp + 0x24], ebx
// 0085bd32  e849fdffff           call 0x85ba80
// 0085bd37  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085bd3b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0085bd3f  51                   push ecx
// 0085bd40  52                   push edx
// 0085bd41  8d442418             lea eax, [esp + 0x18]
// 0085bd45  50                   push eax
// 0085bd46  ff155cca9800         call dword ptr [0x98ca5c]
// 0085bd4c  85c0                 test eax, eax
// 0085bd4e  7515                 jne 0x85bd65
// 0085bd50  46                   inc esi
// 0085bd51  3bb7a0000000         cmp esi, dword ptr [edi + 0xa0]
// 0085bd57  7cac                 jl 0x85bd05
// 0085bd59  5f                   pop edi
// 0085bd5a  5e                   pop esi
// 0085bd5b  5d                   pop ebp
// 0085bd5c  33c0                 xor eax, eax
// 0085bd5e  5b                   pop ebx
// 0085bd5f  83c410               add esp, 0x10
// 0085bd62  c20c00               ret 0xc
// 0085bd65  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0085bd69  3bc3                 cmp eax, ebx
// 0085bd6b  741b                 je 0x85bd88
// 0085bd6d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085bd71  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085bd75  8908                 mov dword ptr [eax], ecx
// 0085bd77  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085bd7b  895004               mov dword ptr [eax + 4], edx
// 0085bd7e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085bd82  894808               mov dword ptr [eax + 8], ecx
// 0085bd85  89500c               mov dword ptr [eax + 0xc], edx
// 0085bd88  5f                   pop edi
// 0085bd89  5e                   pop esi
// 0085bd8a  8bc5                 mov eax, ebp
// 0085bd8c  5d                   pop ebp
// 0085bd8d  5b                   pop ebx
// 0085bd8e  83c410               add esp, 0x10
// 0085bd91  c20c00               ret 0xc
// copied from an identical function in another client (function ?HitTest@CXTPStatusBar@@QBEPAVCXTPStatusBarPane@@VCPoint@@PAVCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp