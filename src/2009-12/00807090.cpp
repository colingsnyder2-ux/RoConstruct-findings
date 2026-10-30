// roc 2009-12 00807090  unit: CXTPCommandBar  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00807090
//
// 00807090  56                   push esi
// 00807091  8bf1                 mov esi, ecx
// 00807093  e838d4ffff           call 0x8044d0
// 00807098  85c0                 test eax, eax
// 0080709a  7408                 je 0x8070a4
// 0080709c  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008070a2  5e                   pop esi
// 008070a3  c3                   ret 
// 008070a4  8bce                 mov ecx, esi
// 008070a6  e8f5d3ffff           call 0x8044a0
// 008070ab  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008070b1  85c9                 test ecx, ecx
// 008070b3  7404                 je 0x8070b9
// 008070b5  8bc1                 mov eax, ecx
// 008070b7  5e                   pop esi
// 008070b8  c3                   ret 
// 008070b9  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008070bc  85c9                 test ecx, ecx
// 008070be  7416                 je 0x8070d6
// 008070c0  8b4038               mov eax, dword ptr [eax + 0x38]
// 008070c3  85c0                 test eax, eax
// 008070c5  7507                 jne 0x8070ce
// 008070c7  51                   push ecx
// 008070c8  ff15bccb9800         call dword ptr [0x98cbbc]
// 008070ce  50                   push eax
// 008070cf  e856cafeff           call 0x7f3b2a
// 008070d4  5e                   pop esi
// 008070d5  c3                   ret 
// 008070d6  e83bcffeff           call 0x7f4016
// 008070db  85c0                 test eax, eax
// 008070dd  740a                 je 0x8070e9
// 008070df  8b10                 mov edx, dword ptr [eax]
// 008070e1  8bc8                 mov ecx, eax
// 008070e3  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008070e6  5e                   pop esi
// 008070e7  ffe0                 jmp eax
// 008070e9  33c0                 xor eax, eax
// 008070eb  5e                   pop esi
// 008070ec  c3                   ret 
// copied from an identical function in another client (function ?GetSite@CXTPCommandBar@@QBEPAVCWnd@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp