// roc 2009-12 008b1c10  unit: CXTPDockingPaneTabbedContainer  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1c10
//
// 008b1c10  53                   push ebx
// 008b1c11  55                   push ebp
// 008b1c12  56                   push esi
// 008b1c13  57                   push edi
// 008b1c14  8bd9                 mov ebx, ecx
// 008b1c16  e8e5f1ffff           call 0x8b0e00
// 008b1c1b  85c0                 test eax, eax
// 008b1c1d  743f                 je 0x8b1c5e
// 008b1c1f  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 008b1c25  33f6                 xor esi, esi
// 008b1c27  397008               cmp dword ptr [eax + 8], esi
// 008b1c2a  7e32                 jle 0x8b1c5e
// 008b1c2c  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 008b1c32  85f6                 test esi, esi
// 008b1c34  7c45                 jl 0x8b1c7b
// 008b1c36  3b7008               cmp esi, dword ptr [eax + 8]
// 008b1c39  7d40                 jge 0x8b1c7b
// 008b1c3b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b1c3f  8b4004               mov eax, dword ptr [eax + 4]
// 008b1c42  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b1c46  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 008b1c49  51                   push ecx
// 008b1c4a  52                   push edx
// 008b1c4b  57                   push edi
// 008b1c4c  ffd5                 call ebp
// 008b1c4e  85c0                 test eax, eax
// 008b1c50  7515                 jne 0x8b1c67
// 008b1c52  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 008b1c58  46                   inc esi
// 008b1c59  3b7008               cmp esi, dword ptr [eax + 8]
// 008b1c5c  7cd4                 jl 0x8b1c32
// 008b1c5e  5f                   pop edi
// 008b1c5f  5e                   pop esi
// 008b1c60  5d                   pop ebp
// 008b1c61  33c0                 xor eax, eax
// 008b1c63  5b                   pop ebx
// 008b1c64  c20800               ret 8
// 008b1c67  8bcf                 mov ecx, edi
// 008b1c69  e8328d0000           call 0x8ba9a0
// 008b1c6e  f7d8                 neg eax
// 008b1c70  1bc0                 sbb eax, eax
// 008b1c72  23c7                 and eax, edi
// 008b1c74  5f                   pop edi
// 008b1c75  5e                   pop esi
// 008b1c76  5d                   pop ebp
// 008b1c77  5b                   pop ebx
// 008b1c78  c20800               ret 8
// 008b1c7b  e88c1ef4ff           call 0x7f3b0c
// copied from an identical function in another client (function ?HitTestCaptionButton@CXTPDockingPaneTabbedContainer@@IBEPAVCXTPDockingPaneCaptionButton@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp