// roc 2012-06 009fa1c0  unit: CXTPControlGallery  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fa1c0
//
// 009fa1c0  56                   push esi
// 009fa1c1  8d442408             lea eax, [esp + 8]
// 009fa1c5  50                   push eax
// 009fa1c6  8bf1                 mov esi, ecx
// 009fa1c8  e823f6fcff           call 0x9c97f0
// 009fa1cd  85c0                 test eax, eax
// 009fa1cf  7530                 jne 0x9fa201
// 009fa1d1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009fa1d5  8b542408             mov edx, dword ptr [esp + 8]
// 009fa1d9  51                   push ecx
// 009fa1da  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009fa1de  83ec10               sub esp, 0x10
// 009fa1e1  8bc4                 mov eax, esp
// 009fa1e3  8910                 mov dword ptr [eax], edx
// 009fa1e5  8b542424             mov edx, dword ptr [esp + 0x24]
// 009fa1e9  894804               mov dword ptr [eax + 4], ecx
// 009fa1ec  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009fa1f0  895008               mov dword ptr [eax + 8], edx
// 009fa1f3  89480c               mov dword ptr [eax + 0xc], ecx
// 009fa1f6  8bce                 mov ecx, esi
// 009fa1f8  e8d3abf8ff           call 0x984dd0
// 009fa1fd  5e                   pop esi
// 009fa1fe  c21400               ret 0x14
// 009fa201  68f0cdc000           push 0xc0cdf0
// 009fa206  ff15482bb200         call dword ptr [0xb22b48]
// 009fa20c  8b542418             mov edx, dword ptr [esp + 0x18]
// 009fa210  8902                 mov dword ptr [edx], eax
// 009fa212  33c0                 xor eax, eax
// 009fa214  5e                   pop esi
// 009fa215  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControlGallery.cpp (function ?GetAccessibleDefaultAction@CXTPControlGallery@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlGallery.cpp
