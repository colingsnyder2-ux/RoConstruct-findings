// roc 2010-06 00815c90  unit: CXTPToolTipContext::CHTMLToolTip  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00815c90
//
// 00815c90  83ec24               sub esp, 0x24
// 00815c93  53                   push ebx
// 00815c94  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00815c98  56                   push esi
// 00815c99  57                   push edi
// 00815c9a  8d442428             lea eax, [esp + 0x28]
// 00815c9e  50                   push eax
// 00815c9f  b907000000           mov ecx, 7
// 00815ca4  8bf3                 mov esi, ebx
// 00815ca6  8d7c2418             lea edi, [esp + 0x18]
// 00815caa  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00815cac  8b742438             mov esi, dword ptr [esp + 0x38]
// 00815cb0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00815cb3  8b3d54ba9e00         mov edi, dword ptr [0x9eba54]
// 00815cb9  6a00                 push 0
// 00815cbb  6810040000           push 0x410
// 00815cc0  51                   push ecx
// 00815cc1  ffd7                 call edi
// 00815cc3  8b5314               mov edx, dword ptr [ebx + 0x14]
// 00815cc6  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 00815cc9  8954240c             mov dword ptr [esp + 0xc], edx
// 00815ccd  8b542418             mov edx, dword ptr [esp + 0x18]
// 00815cd1  81c200feffff         add edx, 0xfffffe00
// 00815cd7  89442414             mov dword ptr [esp + 0x14], eax
// 00815cdb  894c2410             mov dword ptr [esp + 0x10], ecx
// 00815cdf  83fa0a               cmp edx, 0xa
// 00815ce2  770c                 ja 0x815cf0
// 00815ce4  8d4c240c             lea ecx, [esp + 0xc]
// 00815ce8  51                   push ecx
// 00815ce9  50                   push eax
// 00815cea  ff1578bc9e00         call dword ptr [0x9ebc78]
// 00815cf0  0fb7542410           movzx edx, word ptr [esp + 0x10]
// 00815cf5  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 00815cfa  c1e210               shl edx, 0x10
// 00815cfd  8d4c2414             lea ecx, [esp + 0x14]
// 00815d01  51                   push ecx
// 00815d02  0bd0                 or edx, eax
// 00815d04  6a00                 push 0
// 00815d06  89542428             mov dword ptr [esp + 0x28], edx
// 00815d0a  8b5620               mov edx, dword ptr [esi + 0x20]
// 00815d0d  6807040000           push 0x407
// 00815d12  52                   push edx
// 00815d13  ffd7                 call edi
// 00815d15  5f                   pop edi
// 00815d16  5e                   pop esi
// 00815d17  5b                   pop ebx
// 00815d18  83c424               add esp, 0x24
// 00815d1b  c20800               ret 8
// copied from an identical function in another client (function ?RelayToolTipMessage@CXTPToolTipContext@@QAEXPAVCWnd@@PAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp