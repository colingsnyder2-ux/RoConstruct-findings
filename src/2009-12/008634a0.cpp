// roc 2009-12 008634a0  unit: CXTPToolTipContext::COffice2007ToolTip  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008634a0
//
// 008634a0  83ec1c               sub esp, 0x1c
// 008634a3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008634a7  8b542424             mov edx, dword ptr [esp + 0x24]
// 008634ab  56                   push esi
// 008634ac  8bf1                 mov esi, ecx
// 008634ae  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008634b2  57                   push edi
// 008634b3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008634b7  894c2414             mov dword ptr [esp + 0x14], ecx
// 008634bb  89442410             mov dword ptr [esp + 0x10], eax
// 008634bf  8b4720               mov eax, dword ptr [edi + 0x20]
// 008634c2  8d4c241c             lea ecx, [esp + 0x1c]
// 008634c6  51                   push ecx
// 008634c7  89542410             mov dword ptr [esp + 0x10], edx
// 008634cb  8944240c             mov dword ptr [esp + 0xc], eax
// 008634cf  ff1538cc9800         call dword ptr [0x98cc38]
// 008634d5  8d542408             lea edx, [esp + 8]
// 008634d9  52                   push edx
// 008634da  57                   push edi
// 008634db  8bce                 mov ecx, esi
// 008634dd  e8cef8ffff           call 0x862db0
// 008634e2  5f                   pop edi
// 008634e3  5e                   pop esi
// 008634e4  83c41c               add esp, 0x1c
// 008634e7  c21000               ret 0x10
// copied from an identical function in another client (function ?FilterToolTipMessage@CXTPToolTipContext@@QAEXPAVCWnd@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp