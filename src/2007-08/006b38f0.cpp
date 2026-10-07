// roc 2007-08 006b38f0  unit: CXTPControlGallery  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b38f0
//
// 006b38f0  56                   push esi
// 006b38f1  8d442408             lea eax, [esp + 8]
// 006b38f5  50                   push eax
// 006b38f6  8bf1                 mov esi, ecx
// 006b38f8  e8d3dafbff           call 0x6713d0
// 006b38fd  85c0                 test eax, eax
// 006b38ff  7530                 jne 0x6b3931
// 006b3901  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b3905  8b542408             mov edx, dword ptr [esp + 8]
// 006b3909  51                   push ecx
// 006b390a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b390e  83ec10               sub esp, 0x10
// 006b3911  8bc4                 mov eax, esp
// 006b3913  8910                 mov dword ptr [eax], edx
// 006b3915  8b542424             mov edx, dword ptr [esp + 0x24]
// 006b3919  894804               mov dword ptr [eax + 4], ecx
// 006b391c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006b3920  895008               mov dword ptr [eax + 8], edx
// 006b3923  89480c               mov dword ptr [eax + 0xc], ecx
// 006b3926  8bce                 mov ecx, esi
// 006b3928  e8236bf8ff           call 0x63a450
// 006b392d  5e                   pop esi
// 006b392e  c21400               ret 0x14
// 006b3931  6874627c00           push 0x7c6274
// 006b3936  ff15f4e97700         call dword ptr [0x77e9f4]
// 006b393c  8b542418             mov edx, dword ptr [esp + 0x18]
// 006b3940  8902                 mov dword ptr [edx], eax
// 006b3942  33c0                 xor eax, eax
// 006b3944  5e                   pop esi
// 006b3945  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlGallery.cpp (function ?GetAccessibleDefaultAction@CXTPControlGallery@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlGallery.cpp
