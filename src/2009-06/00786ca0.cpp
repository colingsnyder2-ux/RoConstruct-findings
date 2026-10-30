// roc 2009-06 00786ca0  unit: CXTPToolTipContext::CHTMLToolTip  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00786ca0
//
// 00786ca0  83ec24               sub esp, 0x24
// 00786ca3  53                   push ebx
// 00786ca4  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00786ca8  56                   push esi
// 00786ca9  57                   push edi
// 00786caa  8d442428             lea eax, [esp + 0x28]
// 00786cae  50                   push eax
// 00786caf  b907000000           mov ecx, 7
// 00786cb4  8bf3                 mov esi, ebx
// 00786cb6  8d7c2418             lea edi, [esp + 0x18]
// 00786cba  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00786cbc  8b742438             mov esi, dword ptr [esp + 0x38]
// 00786cc0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00786cc3  8b3d90ee8900         mov edi, dword ptr [0x89ee90]
// 00786cc9  6a00                 push 0
// 00786ccb  6810040000           push 0x410
// 00786cd0  51                   push ecx
// 00786cd1  ffd7                 call edi
// 00786cd3  8b5314               mov edx, dword ptr [ebx + 0x14]
// 00786cd6  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 00786cd9  8954240c             mov dword ptr [esp + 0xc], edx
// 00786cdd  8b542418             mov edx, dword ptr [esp + 0x18]
// 00786ce1  81c200feffff         add edx, 0xfffffe00
// 00786ce7  89442414             mov dword ptr [esp + 0x14], eax
// 00786ceb  894c2410             mov dword ptr [esp + 0x10], ecx
// 00786cef  83fa0a               cmp edx, 0xa
// 00786cf2  770c                 ja 0x786d00
// 00786cf4  8d4c240c             lea ecx, [esp + 0xc]
// 00786cf8  51                   push ecx
// 00786cf9  50                   push eax
// 00786cfa  ff1530ee8900         call dword ptr [0x89ee30]
// 00786d00  0fb7542410           movzx edx, word ptr [esp + 0x10]
// 00786d05  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 00786d0a  c1e210               shl edx, 0x10
// 00786d0d  8d4c2414             lea ecx, [esp + 0x14]
// 00786d11  51                   push ecx
// 00786d12  0bd0                 or edx, eax
// 00786d14  6a00                 push 0
// 00786d16  89542428             mov dword ptr [esp + 0x28], edx
// 00786d1a  8b5620               mov edx, dword ptr [esi + 0x20]
// 00786d1d  6807040000           push 0x407
// 00786d22  52                   push edx
// 00786d23  ffd7                 call edi
// 00786d25  5f                   pop edi
// 00786d26  5e                   pop esi
// 00786d27  5b                   pop ebx
// 00786d28  83c424               add esp, 0x24
// 00786d2b  c20800               ret 8
// copied from an identical function in another client (function ?RelayToolTipMessage@CXTPToolTipContext@@QAEXPAVCWnd@@PAUtagMSG@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp