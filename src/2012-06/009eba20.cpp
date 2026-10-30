// roc 2012-06 009eba20  unit: CXTPToolTipContext::CHTMLToolTip  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009eba20
//
// 009eba20  83ec24               sub esp, 0x24
// 009eba23  53                   push ebx
// 009eba24  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 009eba28  56                   push esi
// 009eba29  57                   push edi
// 009eba2a  8d442428             lea eax, [esp + 0x28]
// 009eba2e  50                   push eax
// 009eba2f  b907000000           mov ecx, 7
// 009eba34  8bf3                 mov esi, ebx
// 009eba36  8d7c2418             lea edi, [esp + 0x18]
// 009eba3a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 009eba3c  8b742438             mov esi, dword ptr [esp + 0x38]
// 009eba40  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009eba43  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 009eba49  6a00                 push 0
// 009eba4b  6810040000           push 0x410
// 009eba50  51                   push ecx
// 009eba51  ffd7                 call edi
// 009eba53  8b5314               mov edx, dword ptr [ebx + 0x14]
// 009eba56  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 009eba59  8954240c             mov dword ptr [esp + 0xc], edx
// 009eba5d  8b542418             mov edx, dword ptr [esp + 0x18]
// 009eba61  81c200feffff         add edx, 0xfffffe00
// 009eba67  89442414             mov dword ptr [esp + 0x14], eax
// 009eba6b  894c2410             mov dword ptr [esp + 0x10], ecx
// 009eba6f  83fa0a               cmp edx, 0xa
// 009eba72  770c                 ja 0x9eba80
// 009eba74  8d4c240c             lea ecx, [esp + 0xc]
// 009eba78  51                   push ecx
// 009eba79  50                   push eax
// 009eba7a  ff15883ab200         call dword ptr [0xb23a88]
// 009eba80  0fb7542410           movzx edx, word ptr [esp + 0x10]
// 009eba85  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 009eba8a  c1e210               shl edx, 0x10
// 009eba8d  8d4c2414             lea ecx, [esp + 0x14]
// 009eba91  51                   push ecx
// 009eba92  0bd0                 or edx, eax
// 009eba94  6a00                 push 0
// 009eba96  89542428             mov dword ptr [esp + 0x28], edx
// 009eba9a  8b5620               mov edx, dword ptr [esi + 0x20]
// 009eba9d  6807040000           push 0x407
// 009ebaa2  52                   push edx
// 009ebaa3  ffd7                 call edi
// 009ebaa5  5f                   pop edi
// 009ebaa6  5e                   pop esi
// 009ebaa7  5b                   pop ebx
// 009ebaa8  83c424               add esp, 0x24
// 009ebaab  c20800               ret 8
// copied from an identical function in another client (function ?RelayToolTipMessage@CXTPToolTipContext@@QAEXPAVCWnd@@PAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp