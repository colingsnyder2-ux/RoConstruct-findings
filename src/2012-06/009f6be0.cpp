// roc 2012-06 009f6be0  unit: CXTCaption  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f6be0
//
// 009f6be0  8b442404             mov eax, dword ptr [esp + 4]
// 009f6be4  83ec10               sub esp, 0x10
// 009f6be7  56                   push esi
// 009f6be8  57                   push edi
// 009f6be9  50                   push eax
// 009f6bea  8bf1                 mov esi, ecx
// 009f6bec  e881290a00           call 0xa99572
// 009f6bf1  8bf8                 mov edi, eax
// 009f6bf3  85ff                 test edi, edi
// 009f6bf5  743b                 je 0x9f6c32
// 009f6bf7  56                   push esi
// 009f6bf8  8d4c240c             lea ecx, [esp + 0xc]
// 009f6bfc  e89fe5fdff           call 0x9d51a0
// 009f6c01  8b16                 mov edx, dword ptr [esi]
// 009f6c03  8b926c010000         mov edx, dword ptr [edx + 0x16c]
// 009f6c09  8d442408             lea eax, [esp + 8]
// 009f6c0d  50                   push eax
// 009f6c0e  57                   push edi
// 009f6c0f  8bce                 mov ecx, esi
// 009f6c11  ffd2                 call edx
// 009f6c13  8b06                 mov eax, dword ptr [esi]
// 009f6c15  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 009f6c1b  57                   push edi
// 009f6c1c  8bce                 mov ecx, esi
// 009f6c1e  ffd2                 call edx
// 009f6c20  8b06                 mov eax, dword ptr [esi]
// 009f6c22  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 009f6c28  8d4c2408             lea ecx, [esp + 8]
// 009f6c2c  51                   push ecx
// 009f6c2d  57                   push edi
// 009f6c2e  8bce                 mov ecx, esi
// 009f6c30  ffd2                 call edx
// 009f6c32  5f                   pop edi
// 009f6c33  b801000000           mov eax, 1
// 009f6c38  5e                   pop esi
// 009f6c39  83c410               add esp, 0x10
// 009f6c3c  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\Controls\Static\XTPCaption.cpp (function ?OnPrintClient@CXTPCaption@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Static/XTPCaption.cpp
