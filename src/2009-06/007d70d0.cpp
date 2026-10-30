// roc 2009-06 007d70d0  unit: CXTPDockingPaneTabbedContainer  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d70d0
//
// 007d70d0  53                   push ebx
// 007d70d1  55                   push ebp
// 007d70d2  56                   push esi
// 007d70d3  57                   push edi
// 007d70d4  8bd9                 mov ebx, ecx
// 007d70d6  e8e5f1ffff           call 0x7d62c0
// 007d70db  85c0                 test eax, eax
// 007d70dd  743f                 je 0x7d711e
// 007d70df  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 007d70e5  33f6                 xor esi, esi
// 007d70e7  397008               cmp dword ptr [eax + 8], esi
// 007d70ea  7e32                 jle 0x7d711e
// 007d70ec  8b2dc0ed8900         mov ebp, dword ptr [0x89edc0]
// 007d70f2  85f6                 test esi, esi
// 007d70f4  7c45                 jl 0x7d713b
// 007d70f6  3b7008               cmp esi, dword ptr [eax + 8]
// 007d70f9  7d40                 jge 0x7d713b
// 007d70fb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007d70ff  8b4004               mov eax, dword ptr [eax + 4]
// 007d7102  8b542414             mov edx, dword ptr [esp + 0x14]
// 007d7106  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 007d7109  51                   push ecx
// 007d710a  52                   push edx
// 007d710b  57                   push edi
// 007d710c  ffd5                 call ebp
// 007d710e  85c0                 test eax, eax
// 007d7110  7515                 jne 0x7d7127
// 007d7112  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 007d7118  46                   inc esi
// 007d7119  3b7008               cmp esi, dword ptr [eax + 8]
// 007d711c  7cd4                 jl 0x7d70f2
// 007d711e  5f                   pop edi
// 007d711f  5e                   pop esi
// 007d7120  5d                   pop ebp
// 007d7121  33c0                 xor eax, eax
// 007d7123  5b                   pop ebx
// 007d7124  c20800               ret 8
// 007d7127  8bcf                 mov ecx, edi
// 007d7129  e8628d0000           call 0x7dfe90
// 007d712e  f7d8                 neg eax
// 007d7130  1bc0                 sbb eax, eax
// 007d7132  23c7                 and eax, edi
// 007d7134  5f                   pop edi
// 007d7135  5e                   pop esi
// 007d7136  5d                   pop ebp
// 007d7137  5b                   pop ebx
// 007d7138  c20800               ret 8
// 007d713b  e8a41bf4ff           call 0x718ce4
// copied from an identical function in another client (function ?HitTestCaptionButton@CXTPDockingPaneTabbedContainer@@IBEPAVCXTPDockingPaneCaptionButton@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp