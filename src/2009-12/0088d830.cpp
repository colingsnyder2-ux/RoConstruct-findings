// roc 2009-12 0088d830  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088d830
//
// 0088d830  56                   push esi
// 0088d831  57                   push edi
// 0088d832  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0088d836  6a00                 push 0
// 0088d838  8d4710               lea eax, [edi + 0x10]
// 0088d83b  50                   push eax
// 0088d83c  8bf1                 mov esi, ecx
// 0088d83e  e83dffffff           call 0x88d780
// 0088d843  8b5624               mov edx, dword ptr [esi + 0x24]
// 0088d846  8d4e1c               lea ecx, [esi + 0x1c]
// 0088d849  57                   push edi
// 0088d84a  52                   push edx
// 0088d84b  e820d4fdff           call 0x86ac70
// 0088d850  837e1000             cmp dword ptr [esi + 0x10], 0
// 0088d854  7518                 jne 0x88d86e
// 0088d856  8b06                 mov eax, dword ptr [esi]
// 0088d858  8b4020               mov eax, dword ptr [eax + 0x20]
// 0088d85b  6a00                 push 0
// 0088d85d  6a32                 push 0x32
// 0088d85f  6843cd0a00           push 0xacd43
// 0088d864  50                   push eax
// 0088d865  ff1558cc9800         call dword ptr [0x98cc58]
// 0088d86b  894610               mov dword ptr [esi + 0x10], eax
// 0088d86e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088d872  57                   push edi
// 0088d873  51                   push ecx
// 0088d874  8bce                 mov ecx, esi
// 0088d876  e8d5faffff           call 0x88d350
// 0088d87b  5f                   pop edi
// 0088d87c  5e                   pop esi
// 0088d87d  c20800               ret 8
// copied from an identical function in another client (function ?AddAnimation@CXTPCommandBarAnimation@@IAEXAAVCClientDC@@PAUCAnimateInfo@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp