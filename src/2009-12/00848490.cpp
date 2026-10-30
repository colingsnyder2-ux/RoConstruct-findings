// roc 2009-12 00848490  unit: CXTPControls  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00848490
//
// 00848490  53                   push ebx
// 00848491  55                   push ebp
// 00848492  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00848496  57                   push edi
// 00848497  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0084849b  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 008484a1  8bd9                 mov ebx, ecx
// 008484a3  83f802               cmp eax, 2
// 008484a6  740a                 je 0x8484b2
// 008484a8  83f803               cmp eax, 3
// 008484ab  7405                 je 0x8484b2
// 008484ad  83f804               cmp eax, 4
// 008484b0  751d                 jne 0x8484cf
// 008484b2  83fd02               cmp ebp, 2
// 008484b5  740a                 je 0x8484c1
// 008484b7  83fd03               cmp ebp, 3
// 008484ba  7405                 je 0x8484c1
// 008484bc  83fd04               cmp ebp, 4
// 008484bf  750e                 jne 0x8484cf
// 008484c1  89affc000000         mov dword ptr [edi + 0xfc], ebp
// 008484c7  8bc7                 mov eax, edi
// 008484c9  5f                   pop edi
// 008484ca  5d                   pop ebp
// 008484cb  5b                   pop ebx
// 008484cc  c20800               ret 8
// 008484cf  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008484d5  56                   push esi
// 008484d6  6a00                 push 0
// 008484d8  40                   inc eax
// 008484d9  50                   push eax
// 008484da  6856fd9900           push 0x99fd56
// 008484df  6a00                 push 0
// 008484e1  55                   push ebp
// 008484e2  e879fcffff           call 0x848160
// 008484e7  8bf0                 mov esi, eax
// 008484e9  6a00                 push 0
// 008484eb  57                   push edi
// 008484ec  8bce                 mov ecx, esi
// 008484ee  e82d07fbff           call 0x7f8c20
// 008484f3  89aefc000000         mov dword ptr [esi + 0xfc], ebp
// 008484f9  8b03                 mov eax, dword ptr [ebx]
// 008484fb  8b5058               mov edx, dword ptr [eax + 0x58]
// 008484fe  57                   push edi
// 008484ff  8bcb                 mov ecx, ebx
// 00848501  ffd2                 call edx
// 00848503  8bc6                 mov eax, esi
// 00848505  5e                   pop esi
// 00848506  5f                   pop edi
// 00848507  5d                   pop ebp
// 00848508  5b                   pop ebx
// 00848509  c20800               ret 8
// copied from an identical function in another client (function ?SetControlType@CXTPControls@@QAEPAVCXTPControl@@PAV2@W4XTPControlType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp