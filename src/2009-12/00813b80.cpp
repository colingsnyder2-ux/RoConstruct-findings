// roc 2009-12 00813b80  unit: CXTPToolBar  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00813b80
//
// 00813b80  8b442404             mov eax, dword ptr [esp + 4]
// 00813b84  56                   push esi
// 00813b85  8bf1                 mov esi, ecx
// 00813b87  398694010000         cmp dword ptr [esi + 0x194], eax
// 00813b8d  742b                 je 0x813bba
// 00813b8f  898694010000         mov dword ptr [esi + 0x194], eax
// 00813b95  85c0                 test eax, eax
// 00813b97  7425                 je 0x813bbe
// 00813b99  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00813b9f  898690010000         mov dword ptr [esi + 0x190], eax
// 00813ba5  85c0                 test eax, eax
// 00813ba7  7411                 je 0x813bba
// 00813ba9  6a00                 push 0
// 00813bab  c786dc00000000000000 mov dword ptr [esi + 0xdc], 0
// 00813bb5  e88efffdff           call 0x7f3b48
// 00813bba  5e                   pop esi
// 00813bbb  c20400               ret 4
// 00813bbe  83be9001000000       cmp dword ptr [esi + 0x190], 0
// 00813bc5  74f3                 je 0x813bba
// 00813bc7  6a08                 push 8
// 00813bc9  c786dc00000001000000 mov dword ptr [esi + 0xdc], 1
// 00813bd3  e870fffdff           call 0x7f3b48
// 00813bd8  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 00813bdf  75d9                 jne 0x813bba
// 00813be1  8bce                 mov ecx, esi
// 00813be3  e8e83fffff           call 0x807bd0
// 00813be8  85c0                 test eax, eax
// 00813bea  74ce                 je 0x813bba
// 00813bec  83782000             cmp dword ptr [eax + 0x20], 0
// 00813bf0  74c8                 je 0x813bba
// 00813bf2  8b10                 mov edx, dword ptr [eax]
// 00813bf4  8bc8                 mov ecx, eax
// 00813bf6  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 00813bfc  5e                   pop esi
// 00813bfd  c744240400000000     mov dword ptr [esp + 4], 0
// 00813c05  ffe0                 jmp eax
// copied from an identical function in another client (function ?OnSetPreviewMode@CXTPToolBar@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp