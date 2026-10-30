// roc 2009-12 008dff80  unit: CXTPRichRender::XTextHost  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dff80
//
// 008dff80  6aff                 push -1
// 008dff82  68395a9600           push 0x965a39
// 008dff87  64a100000000         mov eax, dword ptr fs:[0]
// 008dff8d  50                   push eax
// 008dff8e  53                   push ebx
// 008dff8f  56                   push esi
// 008dff90  57                   push edi
// 008dff91  a10052b600           mov eax, dword ptr [0xb65200]
// 008dff96  33c4                 xor eax, esp
// 008dff98  50                   push eax
// 008dff99  8d442410             lea eax, [esp + 0x10]
// 008dff9d  64a300000000         mov dword ptr fs:[0], eax
// 008dffa3  8bd9                 mov ebx, ecx
// 008dffa5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008dffa9  8b07                 mov eax, dword ptr [edi]
// 008dffab  85c0                 test eax, eax
// 008dffad  7470                 je 0x8e001f
// 008dffaf  6a0d                 push 0xd
// 008dffb1  50                   push eax
// 008dffb2  ff1530b89800         call dword ptr [0x98b830]
// 008dffb8  8bf0                 mov esi, eax
// 008dffba  83c408               add esp, 8
// 008dffbd  85f6                 test esi, esi
// 008dffbf  745e                 je 0x8e001f
// 008dffc1  3b730c               cmp esi, dword ptr [ebx + 0xc]
// 008dffc4  7759                 ja 0x8e001f
// 008dffc6  8b07                 mov eax, dword ptr [edi]
// 008dffc8  8bce                 mov ecx, esi
// 008dffca  2bc8                 sub ecx, eax
// 008dffcc  51                   push ecx
// 008dffcd  50                   push eax
// 008dffce  8d54242c             lea edx, [esp + 0x2c]
// 008dffd2  52                   push edx
// 008dffd3  e8e8fdffff           call 0x8dfdc0
// 008dffd8  83c40c               add esp, 0xc
// 008dffdb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dffdf  50                   push eax
// 008dffe0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008dffe8  ff1538d59800         call dword ptr [0x98d538]
// 008dffee  8d4c2424             lea ecx, [esp + 0x24]
// 008dfff2  ff15c0de9800         call dword ptr [0x98dec0]
// 008dfff8  8d4601               lea eax, [esi + 1]
// 008dfffb  8907                 mov dword ptr [edi], eax
// 008dfffd  80380a               cmp byte ptr [eax], 0xa
// 008e0000  7503                 jne 0x8e0005
// 008e0002  40                   inc eax
// 008e0003  8907                 mov dword ptr [edi], eax
// 008e0005  b801000000           mov eax, 1
// 008e000a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e000e  64890d00000000       mov dword ptr fs:[0], ecx
// 008e0015  59                   pop ecx
// 008e0016  5f                   pop edi
// 008e0017  5e                   pop esi
// 008e0018  5b                   pop ebx
// 008e0019  83c40c               add esp, 0xc
// 008e001c  c20800               ret 8
// 008e001f  33c0                 xor eax, eax
// 008e0021  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e0025  64890d00000000       mov dword ptr fs:[0], ecx
// 008e002c  59                   pop ecx
// 008e002d  5f                   pop edi
// 008e002e  5e                   pop esi
// 008e002f  5b                   pop ebx
// 008e0030  83c40c               add esp, 0xc
// 008e0033  c20800               ret 8
// copied from an identical function in another client (function ?ReadString@CXTPOffice2007Images@@AAEHAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@AAPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp