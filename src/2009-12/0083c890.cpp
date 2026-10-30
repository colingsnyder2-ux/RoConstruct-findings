// roc 2009-12 0083c890  unit: CXTPControlPopupColor  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c890
//
// 0083c890  6aff                 push -1
// 0083c892  68e8639600           push 0x9663e8
// 0083c897  64a100000000         mov eax, dword ptr fs:[0]
// 0083c89d  50                   push eax
// 0083c89e  51                   push ecx
// 0083c89f  56                   push esi
// 0083c8a0  a10052b600           mov eax, dword ptr [0xb65200]
// 0083c8a5  33c4                 xor eax, esp
// 0083c8a7  50                   push eax
// 0083c8a8  8d44240c             lea eax, [esp + 0xc]
// 0083c8ac  64a300000000         mov dword ptr fs:[0], eax
// 0083c8b2  8bf1                 mov esi, ecx
// 0083c8b4  89742408             mov dword ptr [esp + 8], esi
// 0083c8b8  e813e2ffff           call 0x83aad0
// 0083c8bd  8bce                 mov ecx, esi
// 0083c8bf  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0083c8c7  c706c4859f00         mov dword ptr [esi], 0x9f85c4
// 0083c8cd  c7462064859f00       mov dword ptr [esi + 0x20], 0x9f8564
// 0083c8d4  c786fc00000004000000 mov dword ptr [esi + 0xfc], 4
// 0083c8de  c78684010000ffffffff mov dword ptr [esi + 0x184], 0xffffffff
// 0083c8e8  e85b9b0e00           call 0x926448
// 0083c8ed  8bc6                 mov eax, esi
// 0083c8ef  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083c8f3  64890d00000000       mov dword ptr fs:[0], ecx
// 0083c8fa  59                   pop ecx
// 0083c8fb  5e                   pop esi
// 0083c8fc  83c410               add esp, 0x10
// 0083c8ff  c3                   ret 
// copied from an identical function in another client (function ??0CXTPControlPopupColor@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlPopupColor.cpp