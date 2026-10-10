// roc 2008-06 00718ae0  unit: CXTCaption  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718ae0
//
// 00718ae0  8b442404             mov eax, dword ptr [esp + 4]
// 00718ae4  83ec10               sub esp, 0x10
// 00718ae7  56                   push esi
// 00718ae8  57                   push edi
// 00718ae9  50                   push eax
// 00718aea  8bf1                 mov esi, ecx
// 00718aec  e837350a00           call 0x7bc028
// 00718af1  8bf8                 mov edi, eax
// 00718af3  85ff                 test edi, edi
// 00718af5  743b                 je 0x718b32
// 00718af7  56                   push esi
// 00718af8  8d4c240c             lea ecx, [esp + 0xc]
// 00718afc  e82ff0fdff           call 0x6f7b30
// 00718b01  8b16                 mov edx, dword ptr [esi]
// 00718b03  8b926c010000         mov edx, dword ptr [edx + 0x16c]
// 00718b09  8d442408             lea eax, [esp + 8]
// 00718b0d  50                   push eax
// 00718b0e  57                   push edi
// 00718b0f  8bce                 mov ecx, esi
// 00718b11  ffd2                 call edx
// 00718b13  8b06                 mov eax, dword ptr [esi]
// 00718b15  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 00718b1b  57                   push edi
// 00718b1c  8bce                 mov ecx, esi
// 00718b1e  ffd2                 call edx
// 00718b20  8b06                 mov eax, dword ptr [esi]
// 00718b22  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 00718b28  8d4c2408             lea ecx, [esp + 8]
// 00718b2c  51                   push ecx
// 00718b2d  57                   push edi
// 00718b2e  8bce                 mov ecx, esi
// 00718b30  ffd2                 call edx
// 00718b32  5f                   pop edi
// 00718b33  b801000000           mov eax, 1
// 00718b38  5e                   pop esi
// 00718b39  83c410               add esp, 0x10
// 00718b3c  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaption.cpp (function ?OnPrintClient@CXTCaption@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
