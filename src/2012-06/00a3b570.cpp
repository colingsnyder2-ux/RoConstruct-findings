// roc 2012-06 00a3b570  unit: CXTPDockingPaneTabbedContainer  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3b570
//
// 00a3b570  53                   push ebx
// 00a3b571  55                   push ebp
// 00a3b572  56                   push esi
// 00a3b573  57                   push edi
// 00a3b574  8bd9                 mov ebx, ecx
// 00a3b576  e8e5f1ffff           call 0xa3a760
// 00a3b57b  85c0                 test eax, eax
// 00a3b57d  743f                 je 0xa3b5be
// 00a3b57f  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 00a3b585  33f6                 xor esi, esi
// 00a3b587  397008               cmp dword ptr [eax + 8], esi
// 00a3b58a  7e32                 jle 0xa3b5be
// 00a3b58c  8b2d483bb200         mov ebp, dword ptr [0xb23b48]
// 00a3b592  85f6                 test esi, esi
// 00a3b594  7c45                 jl 0xa3b5db
// 00a3b596  3b7008               cmp esi, dword ptr [eax + 8]
// 00a3b599  7d40                 jge 0xa3b5db
// 00a3b59b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a3b59f  8b4004               mov eax, dword ptr [eax + 4]
// 00a3b5a2  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a3b5a6  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 00a3b5a9  51                   push ecx
// 00a3b5aa  52                   push edx
// 00a3b5ab  57                   push edi
// 00a3b5ac  ffd5                 call ebp
// 00a3b5ae  85c0                 test eax, eax
// 00a3b5b0  7515                 jne 0xa3b5c7
// 00a3b5b2  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 00a3b5b8  46                   inc esi
// 00a3b5b9  3b7008               cmp esi, dword ptr [eax + 8]
// 00a3b5bc  7cd4                 jl 0xa3b592
// 00a3b5be  5f                   pop edi
// 00a3b5bf  5e                   pop esi
// 00a3b5c0  5d                   pop ebp
// 00a3b5c1  33c0                 xor eax, eax
// 00a3b5c3  5b                   pop ebx
// 00a3b5c4  c20800               ret 8
// 00a3b5c7  8bcf                 mov ecx, edi
// 00a3b5c9  e8728d0000           call 0xa44340
// 00a3b5ce  f7d8                 neg eax
// 00a3b5d0  1bc0                 sbb eax, eax
// 00a3b5d2  23c7                 and eax, edi
// 00a3b5d4  5f                   pop edi
// 00a3b5d5  5e                   pop esi
// 00a3b5d6  5d                   pop ebp
// 00a3b5d7  5b                   pop ebx
// 00a3b5d8  c20800               ret 8
// 00a3b5db  e8e06df4ff           call 0x9823c0
// copied from an identical function in another client (function ?HitTestCaptionButton@CXTPDockingPaneTabbedContainer@@IBEPAVCXTPDockingPaneCaptionButton@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp