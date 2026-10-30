// roc 2009-12 0083c0d0  unit: CXTPAccessible  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c0d0
//
// 0083c0d0  8b542408             mov edx, dword ptr [esp + 8]
// 0083c0d4  83ec28               sub esp, 0x28
// 0083c0d7  56                   push esi
// 0083c0d8  8d442404             lea eax, [esp + 4]
// 0083c0dc  50                   push eax
// 0083c0dd  52                   push edx
// 0083c0de  e80df7ffff           call 0x83b7f0
// 0083c0e3  85c0                 test eax, eax
// 0083c0e5  7419                 je 0x83c100
// 0083c0e7  8b742430             mov esi, dword ptr [esp + 0x30]
// 0083c0eb  8d442408             lea eax, [esp + 8]
// 0083c0ef  50                   push eax
// 0083c0f0  56                   push esi
// 0083c0f1  ff1564cc9800         call dword ptr [0x98cc64]
// 0083c0f7  8bc6                 mov eax, esi
// 0083c0f9  5e                   pop esi
// 0083c0fa  83c428               add esp, 0x28
// 0083c0fd  c20800               ret 8
// 0083c100  8b35dccb9800         mov esi, dword ptr [0x98cbdc]
// 0083c106  57                   push edi
// 0083c107  6a01                 push 1
// 0083c109  ffd6                 call esi
// 0083c10b  6a00                 push 0
// 0083c10d  8bf8                 mov edi, eax
// 0083c10f  ffd6                 call esi
// 0083c111  8bc8                 mov ecx, eax
// 0083c113  8b442434             mov eax, dword ptr [esp + 0x34]
// 0083c117  89780c               mov dword ptr [eax + 0xc], edi
// 0083c11a  5f                   pop edi
// 0083c11b  c70000000000         mov dword ptr [eax], 0
// 0083c121  c7400400000000       mov dword ptr [eax + 4], 0
// 0083c128  894808               mov dword ptr [eax + 8], ecx
// 0083c12b  5e                   pop esi
// 0083c12c  83c428               add esp, 0x28
// 0083c12f  c20800               ret 8
// copied from an identical function in another client (function ?GetScreenArea@CXTPMultiMonitor@@AAE?AVCRect@@PAUXTP_HMONITOR__@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPSystemHelpers.cpp