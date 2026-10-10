// from server: 100% by tester
// roc 2008-06 0071d790  unit: PAUHWND__::?$CArray  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071d790
//
// 0071d790  56                   push esi
// 0071d791  8bf1                 mov esi, ecx
// 0071d793  57                   push edi
// 0071d794  8d7e08               lea edi, [esi + 8]
// 0071d797  8bcf                 mov ecx, edi
// 0071d799  c70670f48500         mov dword ptr [esi], 0x85f470
// 0071d79f  e81c59f8ff           call 0x6a30c0
// 0071d7a4  c70740f48500         mov dword ptr [edi], 0x85f440
// 0071d7aa  8d7e2c               lea edi, [esi + 0x2c]
// 0071d7ad  8bcf                 mov ecx, edi
// 0071d7af  e89cf8ffff           call 0x71d050
// 0071d7b4  33c0                 xor eax, eax
// 0071d7b6  c70758f48500         mov dword ptr [edi], 0x85f458
// 0071d7bc  6a01                 push 1
// 0071d7be  8bce                 mov ecx, esi
// 0071d7c0  89461c               mov dword ptr [esi + 0x1c], eax
// 0071d7c3  894604               mov dword ptr [esi + 4], eax
// 0071d7c6  894624               mov dword ptr [esi + 0x24], eax
// 0071d7c9  894628               mov dword ptr [esi + 0x28], eax
// 0071d7cc  894620               mov dword ptr [esi + 0x20], eax
// 0071d7cf  894640               mov dword ptr [esi + 0x40], eax
// 0071d7d2  894644               mov dword ptr [esi + 0x44], eax
// 0071d7d5  e8c6feffff           call 0x71d6a0
// 0071d7da  5f                   pop edi
// 0071d7db  8bc6                 mov eax, esi
// 0071d7dd  5e                   pop esi
// 0071d7de  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPMouseManager.cpp (function ??0CXTPMouseManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMouseManager.cpp
