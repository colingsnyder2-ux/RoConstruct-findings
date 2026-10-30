// roc 2009-12 008041f0  unit: CXTPCommandBar::CCommandBarCmdUI  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008041f0
//
// 008041f0  56                   push esi
// 008041f1  8bf1                 mov esi, ecx
// 008041f3  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008041f6  c7461801000000       mov dword ptr [esi + 0x18], 1
// 008041fd  85c9                 test ecx, ecx
// 008041ff  743f                 je 0x804240
// 00804201  83b95c01000000       cmp dword ptr [ecx + 0x15c], 0
// 00804208  7414                 je 0x80421e
// 0080420a  8b542408             mov edx, dword ptr [esp + 8]
// 0080420e  8b01                 mov eax, dword ptr [ecx]
// 00804210  f7da                 neg edx
// 00804212  1bd2                 sbb edx, edx
// 00804214  5e                   pop esi
// 00804215  89542404             mov dword ptr [esp + 4], edx
// 00804219  8b4068               mov eax, dword ptr [eax + 0x68]
// 0080421c  ffe0                 jmp eax
// 0080421e  8b11                 mov edx, dword ptr [ecx]
// 00804220  8b4268               mov eax, dword ptr [edx + 0x68]
// 00804223  57                   push edi
// 00804224  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00804228  57                   push edi
// 00804229  ffd0                 call eax
// 0080422b  85ff                 test edi, edi
// 0080422d  5f                   pop edi
// 0080422e  7510                 jne 0x804240
// 00804230  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 00804234  750a                 jne 0x804240
// 00804236  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00804239  6a00                 push 0
// 0080423b  e8f0feffff           call 0x804130
// 00804240  5e                   pop esi
// 00804241  c20400               ret 4
// copied from an identical function in another client (function ?Enable@CCommandBarCmdUI@CXTPCommandBar@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp