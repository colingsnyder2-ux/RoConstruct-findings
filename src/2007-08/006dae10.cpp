// roc 2007-08 006dae10  unit: CXTPReportControl::CReportDropTarget  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dae10
//
// 006dae10  53                   push ebx
// 006dae11  55                   push ebp
// 006dae12  56                   push esi
// 006dae13  8be9                 mov ebp, ecx
// 006dae15  8b85b0000000         mov eax, dword ptr [ebp + 0xb0]
// 006dae1b  33f6                 xor esi, esi
// 006dae1d  397008               cmp dword ptr [eax + 8], esi
// 006dae20  57                   push edi
// 006dae21  7e38                 jle 0x6dae5b
// 006dae23  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006dae27  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006dae2b  eb03                 jmp 0x6dae30
// 006dae2d  8d4900               lea ecx, [ecx]
// 006dae30  85f6                 test esi, esi
// 006dae32  7c3a                 jl 0x6dae6e
// 006dae34  3b7008               cmp esi, dword ptr [eax + 8]
// 006dae37  7d35                 jge 0x6dae6e
// 006dae39  8b4004               mov eax, dword ptr [eax + 4]
// 006dae3c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006dae3f  8d04b0               lea eax, [eax + esi*4]
// 006dae42  57                   push edi
// 006dae43  53                   push ebx
// 006dae44  e8173a0200           call 0x6fe860
// 006dae49  85c0                 test eax, eax
// 006dae4b  7517                 jne 0x6dae64
// 006dae4d  8b85b0000000         mov eax, dword ptr [ebp + 0xb0]
// 006dae53  83c601               add esi, 1
// 006dae56  3b7008               cmp esi, dword ptr [eax + 8]
// 006dae59  7cd5                 jl 0x6dae30
// 006dae5b  5f                   pop edi
// 006dae5c  5e                   pop esi
// 006dae5d  5d                   pop ebp
// 006dae5e  33c0                 xor eax, eax
// 006dae60  5b                   pop ebx
// 006dae61  c20800               ret 8
// 006dae64  8b4040               mov eax, dword ptr [eax + 0x40]
// 006dae67  5f                   pop edi
// 006dae68  5e                   pop esi
// 006dae69  5d                   pop ebp
// 006dae6a  5b                   pop ebx
// 006dae6b  c20800               ret 8
// 006dae6e  e8ad50f5ff           call 0x62ff20
// copied from an identical function in another client (function ?HitTest@CXTPDockingPaneAutoHidePanel@@QBEPAVCXTPDockingPane@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp