// roc 2009-12 0086c260  unit: CXTCaption  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c260
//
// 0086c260  8b442404             mov eax, dword ptr [esp + 4]
// 0086c264  83ec10               sub esp, 0x10
// 0086c267  56                   push esi
// 0086c268  57                   push edi
// 0086c269  50                   push eax
// 0086c26a  8bf1                 mov esi, ecx
// 0086c26c  e8bfa10b00           call 0x926430
// 0086c271  8bf8                 mov edi, eax
// 0086c273  85ff                 test edi, edi
// 0086c275  743b                 je 0x86c2b2
// 0086c277  56                   push esi
// 0086c278  8d4c240c             lea ecx, [esp + 0xc]
// 0086c27c  e84ff0fdff           call 0x84b2d0
// 0086c281  8b16                 mov edx, dword ptr [esi]
// 0086c283  8b926c010000         mov edx, dword ptr [edx + 0x16c]
// 0086c289  8d442408             lea eax, [esp + 8]
// 0086c28d  50                   push eax
// 0086c28e  57                   push edi
// 0086c28f  8bce                 mov ecx, esi
// 0086c291  ffd2                 call edx
// 0086c293  8b06                 mov eax, dword ptr [esi]
// 0086c295  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 0086c29b  57                   push edi
// 0086c29c  8bce                 mov ecx, esi
// 0086c29e  ffd2                 call edx
// 0086c2a0  8b06                 mov eax, dword ptr [esi]
// 0086c2a2  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 0086c2a8  8d4c2408             lea ecx, [esp + 8]
// 0086c2ac  51                   push ecx
// 0086c2ad  57                   push edi
// 0086c2ae  8bce                 mov ecx, esi
// 0086c2b0  ffd2                 call edx
// 0086c2b2  5f                   pop edi
// 0086c2b3  b801000000           mov eax, 1
// 0086c2b8  5e                   pop esi
// 0086c2b9  83c410               add esp, 0x10
// 0086c2bc  c20800               ret 8
// copied from an identical function in another client (function ?OnPrintClient@CXTCaption@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp