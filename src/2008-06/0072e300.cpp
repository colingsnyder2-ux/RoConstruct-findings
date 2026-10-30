// from server: 100% by auto
// roc 2008-06 0072e300  unit: CXTPControlGallery  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e300
//
// 0072e300  56                   push esi
// 0072e301  8d442408             lea eax, [esp + 8]
// 0072e305  50                   push eax
// 0072e306  8bf1                 mov esi, ecx
// 0072e308  e8939ffbff           call 0x6e82a0
// 0072e30d  85c0                 test eax, eax
// 0072e30f  7530                 jne 0x72e341
// 0072e311  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072e315  8b542408             mov edx, dword ptr [esp + 8]
// 0072e319  51                   push ecx
// 0072e31a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072e31e  83ec10               sub esp, 0x10
// 0072e321  8bc4                 mov eax, esp
// 0072e323  8910                 mov dword ptr [eax], edx
// 0072e325  8b542424             mov edx, dword ptr [esp + 0x24]
// 0072e329  894804               mov dword ptr [eax + 4], ecx
// 0072e32c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0072e330  895008               mov dword ptr [eax + 8], edx
// 0072e333  89480c               mov dword ptr [eax + 0xc], ecx
// 0072e336  8bce                 mov ecx, esi
// 0072e338  e833d3f7ff           call 0x6ab670
// 0072e33d  5e                   pop esi
// 0072e33e  c21400               ret 0x14
// 0072e341  68a4168500           push 0x8516a4
// 0072e346  ff1500298000         call dword ptr [0x802900]
// 0072e34c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072e350  8902                 mov dword ptr [edx], eax
// 0072e352  33c0                 xor eax, eax
// 0072e354  5e                   pop esi
// 0072e355  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetAccessibleDefaultAction@CXTPControlGallery@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
