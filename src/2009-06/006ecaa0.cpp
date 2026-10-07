// roc 2009-06 006ecaa0  unit: RBX::PartDropTool  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ecaa0
//
// 006ecaa0  55                   push ebp
// 006ecaa1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006ecaa5  8d4701               lea eax, [edi + 1]
// 006ecaa8  56                   push esi
// 006ecaa9  83f8ed               cmp eax, -0x13
// 006ecaac  7609                 jbe 0x6ecab7
// 006ecaae  53                   push ebx
// 006ecaaf  e88c0c0000           call 0x6ed740
// 006ecab4  83c404               add esp, 4
// 006ecab7  8d4f11               lea ecx, [edi + 0x11]
// 006ecaba  51                   push ecx
// 006ecabb  6a00                 push 0
// 006ecabd  6a00                 push 0
// 006ecabf  53                   push ebx
// 006ecac0  e89b0c0000           call 0x6ed760
// 006ecac5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ecac9  8bf0                 mov esi, eax
// 006ecacb  897e0c               mov dword ptr [esi + 0xc], edi
// 006ecace  896e08               mov dword ptr [esi + 8], ebp
// 006ecad1  8b5310               mov edx, dword ptr [ebx + 0x10]
// 006ecad4  8a4214               mov al, byte ptr [edx + 0x14]
// 006ecad7  57                   push edi
// 006ecad8  51                   push ecx
// 006ecad9  8d5610               lea edx, [esi + 0x10]
// 006ecadc  2403                 and al, 3
// 006ecade  52                   push edx
// 006ecadf  884605               mov byte ptr [esi + 5], al
// 006ecae2  c6460404             mov byte ptr [esi + 4], 4
// 006ecae6  c6460600             mov byte ptr [esi + 6], 0
// 006ecaea  e8c7d30200           call 0x719eb6
// 006ecaef  c6443e1000           mov byte ptr [esi + edi + 0x10], 0
// 006ecaf4  8b4310               mov eax, dword ptr [ebx + 0x10]
// 006ecaf7  8b4808               mov ecx, dword ptr [eax + 8]
// 006ecafa  8b10                 mov edx, dword ptr [eax]
// 006ecafc  49                   dec ecx
// 006ecafd  23e9                 and ebp, ecx
// 006ecaff  8b0caa               mov ecx, dword ptr [edx + ebp*4]
// 006ecb02  890e                 mov dword ptr [esi], ecx
// 006ecb04  8b10                 mov edx, dword ptr [eax]
// 006ecb06  8934aa               mov dword ptr [edx + ebp*4], esi
// 006ecb09  ff4004               inc dword ptr [eax + 4]
// 006ecb0c  8b4804               mov ecx, dword ptr [eax + 4]
// 006ecb0f  8b4008               mov eax, dword ptr [eax + 8]
// 006ecb12  83c41c               add esp, 0x1c
// 006ecb15  3bc8                 cmp ecx, eax
// 006ecb17  7613                 jbe 0x6ecb2c
// 006ecb19  3dfeffff3f           cmp eax, 0x3ffffffe
// 006ecb1e  7f0c                 jg 0x6ecb2c
// 006ecb20  03c0                 add eax, eax
// 006ecb22  50                   push eax
// 006ecb23  53                   push ebx
// 006ecb24  e8b7feffff           call 0x6ec9e0
// 006ecb29  83c408               add esp, 8
// 006ecb2c  8bc6                 mov eax, esi
// 006ecb2e  5e                   pop esi
// 006ecb2f  5d                   pop ebp
// 006ecb30  c3                   ret 
// library lua-5.1.4/lstring.c (function _newlstr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
