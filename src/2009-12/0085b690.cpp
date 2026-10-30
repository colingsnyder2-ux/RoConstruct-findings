// roc 2009-12 0085b690  unit: CXTPStatusBar  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b690
//
// 0085b690  83ec28               sub esp, 0x28
// 0085b693  56                   push esi
// 0085b694  8bf1                 mov esi, ecx
// 0085b696  57                   push edi
// 0085b697  8d4c2408             lea ecx, [esp + 8]
// 0085b69b  e85c8bf9ff           call 0x7f41fc
// 0085b6a0  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0085b6a6  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0085b6aa  33c0                 xor eax, eax
// 0085b6ac  c74424084cd29f00     mov dword ptr [esp + 8], 0x9fd24c
// 0085b6b4  8974241c             mov dword ptr [esp + 0x1c], esi
// 0085b6b8  894c2428             mov dword ptr [esp + 0x28], ecx
// 0085b6bc  89442410             mov dword ptr [esp + 0x10], eax
// 0085b6c0  85c9                 test ecx, ecx
// 0085b6c2  763e                 jbe 0x85b702
// 0085b6c4  50                   push eax
// 0085b6c5  8bce                 mov ecx, esi
// 0085b6c7  e834fcffff           call 0x85b300
// 0085b6cc  8b4020               mov eax, dword ptr [eax + 0x20]
// 0085b6cf  6a00                 push 0
// 0085b6d1  8d4c240c             lea ecx, [esp + 0xc]
// 0085b6d5  51                   push ecx
// 0085b6d6  6aff                 push -1
// 0085b6d8  50                   push eax
// 0085b6d9  8bce                 mov ecx, esi
// 0085b6db  8944241c             mov dword ptr [esp + 0x1c], eax
// 0085b6df  e88089f9ff           call 0x7f4064
// 0085b6e4  85c0                 test eax, eax
// 0085b6e6  750b                 jne 0x85b6f3
// 0085b6e8  50                   push eax
// 0085b6e9  57                   push edi
// 0085b6ea  8d4c2410             lea ecx, [esp + 0x10]
// 0085b6ee  e8ebad0c00           call 0x9264de
// 0085b6f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085b6f7  40                   inc eax
// 0085b6f8  89442410             mov dword ptr [esp + 0x10], eax
// 0085b6fc  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0085b700  72c2                 jb 0x85b6c4
// 0085b702  8b542438             mov edx, dword ptr [esp + 0x38]
// 0085b706  52                   push edx
// 0085b707  57                   push edi
// 0085b708  8bce                 mov ecx, esi
// 0085b70a  e8c9ad0c00           call 0x9264d8
// 0085b70f  5f                   pop edi
// 0085b710  5e                   pop esi
// 0085b711  83c428               add esp, 0x28
// 0085b714  c20800               ret 8
// copied from an identical function in another client (function ?OnUpdateCmdUI@CXTPStatusBar@@MAEXPAVCFrameWnd@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp