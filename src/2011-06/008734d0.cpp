// roc 2011-06 008734d0  unit: CXTPToolTipContext::CHTMLToolTip  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008734d0
//
// 008734d0  83ec24               sub esp, 0x24
// 008734d3  53                   push ebx
// 008734d4  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008734d8  56                   push esi
// 008734d9  57                   push edi
// 008734da  8d442428             lea eax, [esp + 0x28]
// 008734de  50                   push eax
// 008734df  b907000000           mov ecx, 7
// 008734e4  8bf3                 mov esi, ebx
// 008734e6  8d7c2418             lea edi, [esp + 0x18]
// 008734ea  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 008734ec  8b742438             mov esi, dword ptr [esp + 0x38]
// 008734f0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008734f3  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 008734f9  6a00                 push 0
// 008734fb  6810040000           push 0x410
// 00873500  51                   push ecx
// 00873501  ffd7                 call edi
// 00873503  8b5314               mov edx, dword ptr [ebx + 0x14]
// 00873506  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 00873509  8954240c             mov dword ptr [esp + 0xc], edx
// 0087350d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00873511  81c200feffff         add edx, 0xfffffe00
// 00873517  89442414             mov dword ptr [esp + 0x14], eax
// 0087351b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0087351f  83fa0a               cmp edx, 0xa
// 00873522  770c                 ja 0x873530
// 00873524  8d4c240c             lea ecx, [esp + 0xc]
// 00873528  51                   push ecx
// 00873529  50                   push eax
// 0087352a  ff15f419a400         call dword ptr [0xa419f4]
// 00873530  0fb7542410           movzx edx, word ptr [esp + 0x10]
// 00873535  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 0087353a  c1e210               shl edx, 0x10
// 0087353d  8d4c2414             lea ecx, [esp + 0x14]
// 00873541  51                   push ecx
// 00873542  0bd0                 or edx, eax
// 00873544  6a00                 push 0
// 00873546  89542428             mov dword ptr [esp + 0x28], edx
// 0087354a  8b5620               mov edx, dword ptr [esi + 0x20]
// 0087354d  6807040000           push 0x407
// 00873552  52                   push edx
// 00873553  ffd7                 call edi
// 00873555  5f                   pop edi
// 00873556  5e                   pop esi
// 00873557  5b                   pop ebx
// 00873558  83c424               add esp, 0x24
// 0087355b  c20800               ret 8
// copied from an identical function in another client (function ?RelayToolTipMessage@CXTPToolTipContext@@QAEXPAVCWnd@@PAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp