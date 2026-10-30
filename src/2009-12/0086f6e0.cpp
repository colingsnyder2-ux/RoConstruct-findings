// roc 2009-12 0086f6e0  unit: PAVCXTPCommandBar::?$CArray  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f6e0
//
// 0086f6e0  56                   push esi
// 0086f6e1  8bf1                 mov esi, ecx
// 0086f6e3  57                   push edi
// 0086f6e4  8d7e08               lea edi, [esi + 8]
// 0086f6e7  8bcf                 mov ecx, edi
// 0086f6e9  c706a80ba000         mov dword ptr [esi], 0xa00ba8
// 0086f6ef  e86c50faff           call 0x814760
// 0086f6f4  c707780ba000         mov dword ptr [edi], 0xa00b78
// 0086f6fa  8d7e2c               lea edi, [esi + 0x2c]
// 0086f6fd  8bcf                 mov ecx, edi
// 0086f6ff  e8dcf8ffff           call 0x86efe0
// 0086f704  33c0                 xor eax, eax
// 0086f706  c707900ba000         mov dword ptr [edi], 0xa00b90
// 0086f70c  6a01                 push 1
// 0086f70e  8bce                 mov ecx, esi
// 0086f710  89461c               mov dword ptr [esi + 0x1c], eax
// 0086f713  894604               mov dword ptr [esi + 4], eax
// 0086f716  894624               mov dword ptr [esi + 0x24], eax
// 0086f719  894628               mov dword ptr [esi + 0x28], eax
// 0086f71c  894620               mov dword ptr [esi + 0x20], eax
// 0086f71f  894640               mov dword ptr [esi + 0x40], eax
// 0086f722  894644               mov dword ptr [esi + 0x44], eax
// 0086f725  e8c6feffff           call 0x86f5f0
// 0086f72a  5f                   pop edi
// 0086f72b  8bc6                 mov eax, esi
// 0086f72d  5e                   pop esi
// 0086f72e  c3                   ret 
// copied from an identical function in another client (function ??0CXTPMouseManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp