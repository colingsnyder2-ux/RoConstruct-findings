// roc 2009-12 0083c070  unit: CXTPAccessible  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c070
//
// 0083c070  8b542408             mov edx, dword ptr [esp + 8]
// 0083c074  83ec38               sub esp, 0x38
// 0083c077  56                   push esi
// 0083c078  8d442414             lea eax, [esp + 0x14]
// 0083c07c  50                   push eax
// 0083c07d  52                   push edx
// 0083c07e  e86df7ffff           call 0x83b7f0
// 0083c083  85c0                 test eax, eax
// 0083c085  7419                 je 0x83c0a0
// 0083c087  8b742440             mov esi, dword ptr [esp + 0x40]
// 0083c08b  8d442428             lea eax, [esp + 0x28]
// 0083c08f  50                   push eax
// 0083c090  56                   push esi
// 0083c091  ff1564cc9800         call dword ptr [0x98cc64]
// 0083c097  8bc6                 mov eax, esi
// 0083c099  5e                   pop esi
// 0083c09a  83c438               add esp, 0x38
// 0083c09d  c20800               ret 8
// 0083c0a0  6a00                 push 0
// 0083c0a2  8d4c2408             lea ecx, [esp + 8]
// 0083c0a6  51                   push ecx
// 0083c0a7  6a00                 push 0
// 0083c0a9  6a30                 push 0x30
// 0083c0ab  ff1500cc9800         call dword ptr [0x98cc00]
// 0083c0b1  8b742440             mov esi, dword ptr [esp + 0x40]
// 0083c0b5  8d542404             lea edx, [esp + 4]
// 0083c0b9  52                   push edx
// 0083c0ba  56                   push esi
// 0083c0bb  ff1564cc9800         call dword ptr [0x98cc64]
// 0083c0c1  8bc6                 mov eax, esi
// 0083c0c3  5e                   pop esi
// 0083c0c4  83c438               add esp, 0x38
// 0083c0c7  c20800               ret 8
// copied from an identical function in another client (function ?GetWorkArea@CXTPMultiMonitor@@AAE?AVCRect@@PAUXTP_HMONITOR__@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPSystemHelpers.cpp