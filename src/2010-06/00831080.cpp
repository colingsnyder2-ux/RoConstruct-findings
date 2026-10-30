// roc 2010-06 00831080  unit: CXTPRibbonTheme  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00831080
//
// 00831080  8b442420             mov eax, dword ptr [esp + 0x20]
// 00831084  83ec30               sub esp, 0x30
// 00831087  53                   push ebx
// 00831088  55                   push ebp
// 00831089  33db                 xor ebx, ebx
// 0083108b  56                   push esi
// 0083108c  57                   push edi
// 0083108d  3bc3                 cmp eax, ebx
// 0083108f  7433                 je 0x8310c4
// 00831091  8b542458             mov edx, dword ptr [esp + 0x58]
// 00831095  50                   push eax
// 00831096  8b442460             mov eax, dword ptr [esp + 0x60]
// 0083109a  50                   push eax
// 0083109b  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0083109f  52                   push edx
// 008310a0  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008310a4  50                   push eax
// 008310a5  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008310a9  52                   push edx
// 008310aa  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008310ae  50                   push eax
// 008310af  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008310b3  52                   push edx
// 008310b4  50                   push eax
// 008310b5  e836dbf7ff           call 0x7aebf0
// 008310ba  5f                   pop edi
// 008310bb  5e                   pop esi
// 008310bc  5d                   pop ebp
// 008310bd  5b                   pop ebx
// 008310be  83c430               add esp, 0x30
// 008310c1  c22000               ret 0x20
// 008310c4  683461a600           push 0xa66134
// 008310c9  e832110000           call 0x832200
// 008310ce  8bf8                 mov edi, eax
// 008310d0  3bfb                 cmp edi, ebx
// 008310d2  0f84b2000000         je 0x83118a
// 008310d8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008310dc  8d48fe               lea ecx, [eax - 2]
// 008310df  894c2410             mov dword ptr [esp + 0x10], ecx
// 008310e3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008310e7  8d51fe               lea edx, [ecx - 2]
// 008310ea  83c003               add eax, 3
// 008310ed  83c102               add ecx, 2
// 008310f0  89542414             mov dword ptr [esp + 0x14], edx
// 008310f4  89442418             mov dword ptr [esp + 0x18], eax
// 008310f8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008310fc  395c245c             cmp dword ptr [esp + 0x5c], ebx
// 00831100  7507                 jne 0x831109
// 00831102  bd03000000           mov ebp, 3
// 00831107  eb0b                 jmp 0x831114
// 00831109  33c0                 xor eax, eax
// 0083110b  395c2454             cmp dword ptr [esp + 0x54], ebx
// 0083110f  0f95c0               setne al
// 00831112  8be8                 mov ebp, eax
// 00831114  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00831118  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0083111e  8d542410             lea edx, [esp + 0x10]
// 00831122  52                   push edx
// 00831123  50                   push eax
// 00831124  e857bbffff           call 0x82cc80
// 00831129  83c408               add esp, 8
// 0083112c  8bf0                 mov esi, eax
// 0083112e  6a04                 push 4
// 00831130  f7de                 neg esi
// 00831132  55                   push ebp
// 00831133  8d442438             lea eax, [esp + 0x38]
// 00831137  1bf6                 sbb esi, esi
// 00831139  50                   push eax
// 0083113a  8bcf                 mov ecx, edi
// 0083113c  f7de                 neg esi
// 0083113e  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00831142  895c2430             mov dword ptr [esp + 0x30], ebx
// 00831146  895c2434             mov dword ptr [esp + 0x34], ebx
// 0083114a  895c2438             mov dword ptr [esp + 0x38], ebx
// 0083114e  e8dd390600           call 0x894b30
// 00831153  8b10                 mov edx, dword ptr [eax]
// 00831155  56                   push esi
// 00831156  68ff00ff00           push 0xff00ff
// 0083115b  8d4c2428             lea ecx, [esp + 0x28]
// 0083115f  51                   push ecx
// 00831160  83ec10               sub esp, 0x10
// 00831163  8bcc                 mov ecx, esp
// 00831165  8911                 mov dword ptr [ecx], edx
// 00831167  8b5004               mov edx, dword ptr [eax + 4]
// 0083116a  895104               mov dword ptr [ecx + 4], edx
// 0083116d  8b5008               mov edx, dword ptr [eax + 8]
// 00831170  8b400c               mov eax, dword ptr [eax + 0xc]
// 00831173  895108               mov dword ptr [ecx + 8], edx
// 00831176  8b542460             mov edx, dword ptr [esp + 0x60]
// 0083117a  89410c               mov dword ptr [ecx + 0xc], eax
// 0083117d  8d4c242c             lea ecx, [esp + 0x2c]
// 00831181  51                   push ecx
// 00831182  52                   push edx
// 00831183  8bcf                 mov ecx, edi
// 00831185  e8b6430600           call 0x895540
// 0083118a  5f                   pop edi
// 0083118b  5e                   pop esi
// 0083118c  5d                   pop ebp
// 0083118d  5b                   pop ebx
// 0083118e  83c430               add esp, 0x30
// 00831191  c22000               ret 0x20
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawDropDownGlyph@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@VCPoint@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
