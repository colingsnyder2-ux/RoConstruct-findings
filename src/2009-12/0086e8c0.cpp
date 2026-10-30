// roc 2009-12 0086e8c0  unit: CXTPResourceManager  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e8c0
//
// 0086e8c0  57                   push edi
// 0086e8c1  8bf9                 mov edi, ecx
// 0086e8c3  e8d8ffffff           call 0x86e8a0
// 0086e8c8  8bc8                 mov ecx, eax
// 0086e8ca  e8f1f7ffff           call 0x86e0c0
// 0086e8cf  85c0                 test eax, eax
// 0086e8d1  7504                 jne 0x86e8d7
// 0086e8d3  8807                 mov byte ptr [edi], al
// 0086e8d5  5f                   pop edi
// 0086e8d6  c3                   ret 
// 0086e8d7  56                   push esi
// 0086e8d8  e84152f8ff           call 0x7f3b1e
// 0086e8dd  8bf0                 mov esi, eax
// 0086e8df  8b460c               mov eax, dword ptr [esi + 0xc]
// 0086e8e2  894704               mov dword ptr [edi + 4], eax
// 0086e8e5  e8b6ffffff           call 0x86e8a0
// 0086e8ea  8bc8                 mov ecx, eax
// 0086e8ec  e8cff7ffff           call 0x86e0c0
// 0086e8f1  89460c               mov dword ptr [esi + 0xc], eax
// 0086e8f4  5e                   pop esi
// 0086e8f5  c60701               mov byte ptr [edi], 1
// 0086e8f8  5f                   pop edi
// 0086e8f9  c3                   ret 
// copied from an identical function in another client (function ?Redo@CManageState@CXTPResourceManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp