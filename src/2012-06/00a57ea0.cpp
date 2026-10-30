// roc 2012-06 00a57ea0  unit: VCEdit::?$CXTMaskEditT  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a57ea0
//
// 00a57ea0  6aff                 push -1
// 00a57ea2  684a75ae00           push 0xae754a
// 00a57ea7  64a100000000         mov eax, dword ptr fs:[0]
// 00a57ead  50                   push eax
// 00a57eae  83ec08               sub esp, 8
// 00a57eb1  53                   push ebx
// 00a57eb2  55                   push ebp
// 00a57eb3  56                   push esi
// 00a57eb4  57                   push edi
// 00a57eb5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a57eba  33c4                 xor eax, esp
// 00a57ebc  50                   push eax
// 00a57ebd  8d44241c             lea eax, [esp + 0x1c]
// 00a57ec1  64a300000000         mov dword ptr fs:[0], eax
// 00a57ec7  8bd9                 mov ebx, ecx
// 00a57ec9  895c2414             mov dword ptr [esp + 0x14], ebx
// 00a57ecd  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00a57ed1  83eb80               sub ebx, -0x80
// 00a57ed4  33f6                 xor esi, esi
// 00a57ed6  8bcb                 mov ecx, ebx
// 00a57ed8  89742418             mov dword ptr [esp + 0x18], esi
// 00a57edc  ff155846b200         call dword ptr [0xb24658]
// 00a57ee2  83ffff               cmp edi, -1
// 00a57ee5  740c                 je 0xa57ef3
// 00a57ee7  3bf8                 cmp edi, eax
// 00a57ee9  7c0a                 jl 0xa57ef5
// 00a57eeb  8bcb                 mov ecx, ebx
// 00a57eed  ff155846b200         call dword ptr [0xb24658]
// 00a57ef3  8bf8                 mov edi, eax
// 00a57ef5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a57ef9  8bcd                 mov ecx, ebp
// 00a57efb  ff158447b200         call dword ptr [0xb24784]
// 00a57f01  89742424             mov dword ptr [esp + 0x24], esi
// 00a57f05  8b742430             mov esi, dword ptr [esp + 0x30]
// 00a57f09  3bf7                 cmp esi, edi
// 00a57f0b  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00a57f13  7d4f                 jge 0xa57f64
// 00a57f15  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00a57f19  81c584000000         add ebp, 0x84
// 00a57f1f  90                   nop 
// 00a57f20  85f6                 test esi, esi
// 00a57f22  7c35                 jl 0xa57f59
// 00a57f24  8bcd                 mov ecx, ebp
// 00a57f26  ff155846b200         call dword ptr [0xb24658]
// 00a57f2c  3bf0                 cmp esi, eax
// 00a57f2e  7d29                 jge 0xa57f59
// 00a57f30  56                   push esi
// 00a57f31  8bcd                 mov ecx, ebp
// 00a57f33  ff15e844b200         call dword ptr [0xb244e8]
// 00a57f39  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a57f3d  3a416c               cmp al, byte ptr [ecx + 0x6c]
// 00a57f40  7517                 jne 0xa57f59
// 00a57f42  56                   push esi
// 00a57f43  8bcb                 mov ecx, ebx
// 00a57f45  ff15e844b200         call dword ptr [0xb244e8]
// 00a57f4b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a57f4f  0fb6d0               movzx edx, al
// 00a57f52  52                   push edx
// 00a57f53  ff151049b200         call dword ptr [0xb24910]
// 00a57f59  46                   inc esi
// 00a57f5a  3bf7                 cmp esi, edi
// 00a57f5c  7cc2                 jl 0xa57f20
// 00a57f5e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a57f62  eb02                 jmp 0xa57f66
// 00a57f64  8bc5                 mov eax, ebp
// 00a57f66  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a57f6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00a57f71  59                   pop ecx
// 00a57f72  5f                   pop edi
// 00a57f73  5e                   pop esi
// 00a57f74  5d                   pop ebp
// 00a57f75  5b                   pop ebx
// 00a57f76  83c414               add esp, 0x14
// 00a57f79  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetMaskedText@?$CXTMaskEditT@VCEdit@@@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp