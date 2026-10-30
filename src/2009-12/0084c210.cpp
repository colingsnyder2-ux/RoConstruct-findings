// roc 2009-12 0084c210  unit: CXTPDrawHelpers  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084c210
//
// 0084c210  83ec28               sub esp, 0x28
// 0084c213  8b0ddcc99800         mov ecx, dword ptr [0x98c9dc]
// 0084c219  33c0                 xor eax, eax
// 0084c21b  890424               mov dword ptr [esp], eax
// 0084c21e  89442404             mov dword ptr [esp + 4], eax
// 0084c222  89442408             mov dword ptr [esp + 8], eax
// 0084c226  8944240c             mov dword ptr [esp + 0xc], eax
// 0084c22a  89442410             mov dword ptr [esp + 0x10], eax
// 0084c22e  89442414             mov dword ptr [esp + 0x14], eax
// 0084c232  89442418             mov dword ptr [esp + 0x18], eax
// 0084c236  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084c23a  89442420             mov dword ptr [esp + 0x20], eax
// 0084c23e  89442424             mov dword ptr [esp + 0x24], eax
// 0084c242  8b442434             mov eax, dword ptr [esp + 0x34]
// 0084c246  890424               mov dword ptr [esp], eax
// 0084c249  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0084c24d  894c2404             mov dword ptr [esp + 4], ecx
// 0084c251  85c0                 test eax, eax
// 0084c253  7508                 jne 0x84c25d
// 0084c255  e8c478faff           call 0x7f3b1e
// 0084c25a  8b4008               mov eax, dword ptr [eax + 8]
// 0084c25d  89442410             mov dword ptr [esp + 0x10], eax
// 0084c261  e8b878faff           call 0x7f3b1e
// 0084c266  68007f0000           push 0x7f00
// 0084c26b  6a00                 push 0
// 0084c26d  ff1548ca9800         call dword ptr [0x98ca48]
// 0084c273  8b542430             mov edx, dword ptr [esp + 0x30]
// 0084c277  89442418             mov dword ptr [esp + 0x18], eax
// 0084c27b  8b442438             mov eax, dword ptr [esp + 0x38]
// 0084c27f  8d0c24               lea ecx, [esp]
// 0084c282  51                   push ecx
// 0084c283  89542428             mov dword ptr [esp + 0x28], edx
// 0084c287  89442418             mov dword ptr [esp + 0x18], eax
// 0084c28b  e8f2a60d00           call 0x926982
// 0084c290  83c428               add esp, 0x28
// 0084c293  c3                   ret 
// copied from an identical function in another client (function ?RegisterWndClass@CXTPDrawHelpers@@SAHPAUHINSTANCE__@@PBDIPAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp