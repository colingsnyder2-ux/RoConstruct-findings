// roc 2009-12 00861cb0  unit: CXTPToolTipContext::CHTMLToolTip  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861cb0
//
// 00861cb0  83ec24               sub esp, 0x24
// 00861cb3  53                   push ebx
// 00861cb4  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00861cb8  56                   push esi
// 00861cb9  57                   push edi
// 00861cba  8d442428             lea eax, [esp + 0x28]
// 00861cbe  50                   push eax
// 00861cbf  b907000000           mov ecx, 7
// 00861cc4  8bf3                 mov esi, ebx
// 00861cc6  8d7c2418             lea edi, [esp + 0x18]
// 00861cca  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00861ccc  8b742438             mov esi, dword ptr [esp + 0x38]
// 00861cd0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00861cd3  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 00861cd9  6a00                 push 0
// 00861cdb  6810040000           push 0x410
// 00861ce0  51                   push ecx
// 00861ce1  ffd7                 call edi
// 00861ce3  8b5314               mov edx, dword ptr [ebx + 0x14]
// 00861ce6  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 00861ce9  8954240c             mov dword ptr [esp + 0xc], edx
// 00861ced  8b542418             mov edx, dword ptr [esp + 0x18]
// 00861cf1  81c200feffff         add edx, 0xfffffe00
// 00861cf7  89442414             mov dword ptr [esp + 0x14], eax
// 00861cfb  894c2410             mov dword ptr [esp + 0x10], ecx
// 00861cff  83fa0a               cmp edx, 0xa
// 00861d02  770c                 ja 0x861d10
// 00861d04  8d4c240c             lea ecx, [esp + 0xc]
// 00861d08  51                   push ecx
// 00861d09  50                   push eax
// 00861d0a  ff1534cc9800         call dword ptr [0x98cc34]
// 00861d10  0fb7542410           movzx edx, word ptr [esp + 0x10]
// 00861d15  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 00861d1a  c1e210               shl edx, 0x10
// 00861d1d  8d4c2414             lea ecx, [esp + 0x14]
// 00861d21  51                   push ecx
// 00861d22  0bd0                 or edx, eax
// 00861d24  6a00                 push 0
// 00861d26  89542428             mov dword ptr [esp + 0x28], edx
// 00861d2a  8b5620               mov edx, dword ptr [esi + 0x20]
// 00861d2d  6807040000           push 0x407
// 00861d32  52                   push edx
// 00861d33  ffd7                 call edi
// 00861d35  5f                   pop edi
// 00861d36  5e                   pop esi
// 00861d37  5b                   pop ebx
// 00861d38  83c424               add esp, 0x24
// 00861d3b  c20800               ret 8
// copied from an identical function in another client (function ?RelayToolTipMessage@CXTPToolTipContext@@QAEXPAVCWnd@@PAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp