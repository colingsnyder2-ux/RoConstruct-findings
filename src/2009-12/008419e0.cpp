// roc 2009-12 008419e0  unit: CXTPPopupBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008419e0
//
// 008419e0  56                   push esi
// 008419e1  57                   push edi
// 008419e2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008419e6  8bf1                 mov esi, ecx
// 008419e8  85ff                 test edi, edi
// 008419ea  750b                 jne 0x8419f7
// 008419ec  89beb0010000         mov dword ptr [esi + 0x1b0], edi
// 008419f2  5f                   pop edi
// 008419f3  5e                   pop esi
// 008419f4  c20c00               ret 0xc
// 008419f7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008419fb  50                   push eax
// 008419fc  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00841a02  c786b001000001000000 mov dword ptr [esi + 0x1b0], 1
// 00841a0c  ff155cde9800         call dword ptr [0x98de5c]
// 00841a12  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00841a16  89bef4010000         mov dword ptr [esi + 0x1f4], edi
// 00841a1c  5f                   pop edi
// 00841a1d  898ef8010000         mov dword ptr [esi + 0x1f8], ecx
// 00841a23  5e                   pop esi
// 00841a24  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetTearOffPopup@CXTPPopupBar@@QAEXPBDIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp