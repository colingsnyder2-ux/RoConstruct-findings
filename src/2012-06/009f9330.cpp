// roc 2012-06 009f9330  unit: PAUHWND__::?$CArray  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9330
//
// 009f9330  56                   push esi
// 009f9331  8bf1                 mov esi, ecx
// 009f9333  57                   push edi
// 009f9334  8d7e08               lea edi, [esi + 8]
// 009f9337  8bcf                 mov ecx, edi
// 009f9339  c706f8b0c100         mov dword ptr [esi], 0xc1b0f8
// 009f933f  e88c95faff           call 0x9a28d0
// 009f9344  c707c8b0c100         mov dword ptr [edi], 0xc1b0c8
// 009f934a  8d7e2c               lea edi, [esi + 0x2c]
// 009f934d  8bcf                 mov ecx, edi
// 009f934f  e8dcf8ffff           call 0x9f8c30
// 009f9354  33c0                 xor eax, eax
// 009f9356  c707e0b0c100         mov dword ptr [edi], 0xc1b0e0
// 009f935c  6a01                 push 1
// 009f935e  8bce                 mov ecx, esi
// 009f9360  89461c               mov dword ptr [esi + 0x1c], eax
// 009f9363  894604               mov dword ptr [esi + 4], eax
// 009f9366  894624               mov dword ptr [esi + 0x24], eax
// 009f9369  894628               mov dword ptr [esi + 0x28], eax
// 009f936c  894620               mov dword ptr [esi + 0x20], eax
// 009f936f  894640               mov dword ptr [esi + 0x40], eax
// 009f9372  894644               mov dword ptr [esi + 0x44], eax
// 009f9375  e8c6feffff           call 0x9f9240
// 009f937a  5f                   pop edi
// 009f937b  8bc6                 mov eax, esi
// 009f937d  5e                   pop esi
// 009f937e  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPMouseManager.cpp (function ??0CXTPMouseManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPMouseManager.cpp
