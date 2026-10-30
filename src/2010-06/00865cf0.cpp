// roc 2010-06 00865cf0  unit: CXTPDockingPaneTabbedContainer  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865cf0
//
// 00865cf0  53                   push ebx
// 00865cf1  55                   push ebp
// 00865cf2  56                   push esi
// 00865cf3  57                   push edi
// 00865cf4  8bd9                 mov ebx, ecx
// 00865cf6  e8e5f1ffff           call 0x864ee0
// 00865cfb  85c0                 test eax, eax
// 00865cfd  743f                 je 0x865d3e
// 00865cff  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 00865d05  33f6                 xor esi, esi
// 00865d07  397008               cmp dword ptr [eax + 8], esi
// 00865d0a  7e32                 jle 0x865d3e
// 00865d0c  8b2de0bb9e00         mov ebp, dword ptr [0x9ebbe0]
// 00865d12  85f6                 test esi, esi
// 00865d14  7c45                 jl 0x865d5b
// 00865d16  3b7008               cmp esi, dword ptr [eax + 8]
// 00865d19  7d40                 jge 0x865d5b
// 00865d1b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00865d1f  8b4004               mov eax, dword ptr [eax + 4]
// 00865d22  8b542414             mov edx, dword ptr [esp + 0x14]
// 00865d26  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 00865d29  51                   push ecx
// 00865d2a  52                   push edx
// 00865d2b  57                   push edi
// 00865d2c  ffd5                 call ebp
// 00865d2e  85c0                 test eax, eax
// 00865d30  7515                 jne 0x865d47
// 00865d32  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 00865d38  46                   inc esi
// 00865d39  3b7008               cmp esi, dword ptr [eax + 8]
// 00865d3c  7cd4                 jl 0x865d12
// 00865d3e  5f                   pop edi
// 00865d3f  5e                   pop esi
// 00865d40  5d                   pop ebp
// 00865d41  33c0                 xor eax, eax
// 00865d43  5b                   pop ebx
// 00865d44  c20800               ret 8
// 00865d47  8bcf                 mov ecx, edi
// 00865d49  e8a28d0000           call 0x86eaf0
// 00865d4e  f7d8                 neg eax
// 00865d50  1bc0                 sbb eax, eax
// 00865d52  23c7                 and eax, edi
// 00865d54  5f                   pop edi
// 00865d55  5e                   pop esi
// 00865d56  5d                   pop ebp
// 00865d57  5b                   pop ebx
// 00865d58  c20800               ret 8
// 00865d5b  e8ec1ef4ff           call 0x7a7c4c
// copied from an identical function in another client (function ?HitTestCaptionButton@CXTPDockingPaneTabbedContainer@@IBEPAVCXTPDockingPaneCaptionButton@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp