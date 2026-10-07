// roc 2011-06 00881bb0  unit: CXTPControlGallery  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881bb0
//
// 00881bb0  56                   push esi
// 00881bb1  8d442408             lea eax, [esp + 8]
// 00881bb5  50                   push eax
// 00881bb6  8bf1                 mov esi, ecx
// 00881bb8  e873f7fcff           call 0x851330
// 00881bbd  85c0                 test eax, eax
// 00881bbf  7530                 jne 0x881bf1
// 00881bc1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00881bc5  8b542408             mov edx, dword ptr [esp + 8]
// 00881bc9  51                   push ecx
// 00881bca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00881bce  83ec10               sub esp, 0x10
// 00881bd1  8bc4                 mov eax, esp
// 00881bd3  8910                 mov dword ptr [eax], edx
// 00881bd5  8b542424             mov edx, dword ptr [esp + 0x24]
// 00881bd9  894804               mov dword ptr [eax + 4], ecx
// 00881bdc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00881be0  895008               mov dword ptr [eax + 8], edx
// 00881be3  89480c               mov dword ptr [eax + 0xc], ecx
// 00881be6  8bce                 mov ecx, esi
// 00881be8  e833aff8ff           call 0x80cb20
// 00881bed  5e                   pop esi
// 00881bee  c21400               ret 0x14
// 00881bf1  680817ac00           push 0xac1708
// 00881bf6  ff15bc0aa400         call dword ptr [0xa40abc]
// 00881bfc  8b542418             mov edx, dword ptr [esp + 0x18]
// 00881c00  8902                 mov dword ptr [edx], eax
// 00881c02  33c0                 xor eax, eax
// 00881c04  5e                   pop esi
// 00881c05  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControlGallery.cpp (function ?GetAccessibleDefaultAction@CXTPControlGallery@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlGallery.cpp
