// roc 2009-12 008f05e0  unit: CXTPRibbonControlTab  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f05e0
//
// 008f05e0  56                   push esi
// 008f05e1  8bf1                 mov esi, ecx
// 008f05e3  57                   push edi
// 008f05e4  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 008f05ea  8b87d0000000         mov eax, dword ptr [edi + 0xd0]
// 008f05f0  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 008f05f6  7529                 jne 0x8f0621
// 008f05f8  c787d0000000ffffffff mov dword ptr [edi + 0xd0], 0xffffffff
// 008f0602  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 008f0609  7416                 je 0x8f0621
// 008f060b  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 008f0611  8b11                 mov edx, dword ptr [ecx]
// 008f0613  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008f0619  6a00                 push 0
// 008f061b  6a01                 push 1
// 008f061d  6a00                 push 0
// 008f061f  ffd0                 call eax
// 008f0621  8b17                 mov edx, dword ptr [edi]
// 008f0623  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008f0629  6a00                 push 0
// 008f062b  6a00                 push 0
// 008f062d  6a01                 push 1
// 008f062f  8bcf                 mov ecx, edi
// 008f0631  ffd0                 call eax
// 008f0633  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f0637  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 008f063d  51                   push ecx
// 008f063e  52                   push edx
// 008f063f  8bcf                 mov ecx, edi
// 008f0641  e85a5ff1ff           call 0x8065a0
// 008f0646  5f                   pop edi
// 008f0647  5e                   pop esi
// 008f0648  c20400               ret 4
// copied from an identical function in another client (function ?ShowPopupBar@CXTPRibbonControlTab@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp