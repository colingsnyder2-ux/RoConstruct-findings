// roc 2010-06 00800250  unit: CXTPDrawHelpers  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00800250
//
// 00800250  83ec28               sub esp, 0x28
// 00800253  8b0d7cbb9e00         mov ecx, dword ptr [0x9ebb7c]
// 00800259  33c0                 xor eax, eax
// 0080025b  890424               mov dword ptr [esp], eax
// 0080025e  89442404             mov dword ptr [esp + 4], eax
// 00800262  89442408             mov dword ptr [esp + 8], eax
// 00800266  8944240c             mov dword ptr [esp + 0xc], eax
// 0080026a  89442410             mov dword ptr [esp + 0x10], eax
// 0080026e  89442414             mov dword ptr [esp + 0x14], eax
// 00800272  89442418             mov dword ptr [esp + 0x18], eax
// 00800276  8944241c             mov dword ptr [esp + 0x1c], eax
// 0080027a  89442420             mov dword ptr [esp + 0x20], eax
// 0080027e  89442424             mov dword ptr [esp + 0x24], eax
// 00800282  8b442434             mov eax, dword ptr [esp + 0x34]
// 00800286  890424               mov dword ptr [esp], eax
// 00800289  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0080028d  894c2404             mov dword ptr [esp + 4], ecx
// 00800291  85c0                 test eax, eax
// 00800293  7508                 jne 0x80029d
// 00800295  e8c479faff           call 0x7a7c5e
// 0080029a  8b4008               mov eax, dword ptr [eax + 8]
// 0080029d  89442410             mov dword ptr [esp + 0x10], eax
// 008002a1  e8b879faff           call 0x7a7c5e
// 008002a6  68007f0000           push 0x7f00
// 008002ab  6a00                 push 0
// 008002ad  ff15ccbb9e00         call dword ptr [0x9ebbcc]
// 008002b3  8b542430             mov edx, dword ptr [esp + 0x30]
// 008002b7  89442418             mov dword ptr [esp + 0x18], eax
// 008002bb  8b442438             mov eax, dword ptr [esp + 0x38]
// 008002bf  8d0c24               lea ecx, [esp]
// 008002c2  51                   push ecx
// 008002c3  89542428             mov dword ptr [esp + 0x28], edx
// 008002c7  89442418             mov dword ptr [esp + 0x18], eax
// 008002cb  e8f4cf1700           call 0x97d2c4
// 008002d0  83c428               add esp, 0x28
// 008002d3  c3                   ret 
// copied from an identical function in another client (function ?RegisterWndClass@CXTPDrawHelpers@@SAHPAUHINSTANCE__@@PBDIPAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp