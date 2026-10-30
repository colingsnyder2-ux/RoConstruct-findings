// roc 2009-12 0083c6f0  unit: CXTPAccessible  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c6f0
//
// 0083c6f0  6aff                 push -1
// 0083c6f2  6898c79500           push 0x95c798
// 0083c6f7  64a100000000         mov eax, dword ptr fs:[0]
// 0083c6fd  50                   push eax
// 0083c6fe  83ec24               sub esp, 0x24
// 0083c701  56                   push esi
// 0083c702  a10052b600           mov eax, dword ptr [0xb65200]
// 0083c707  33c4                 xor eax, esp
// 0083c709  50                   push eax
// 0083c70a  8d44242c             lea eax, [esp + 0x2c]
// 0083c70e  64a300000000         mov dword ptr fs:[0], eax
// 0083c714  a108b4b900           mov eax, dword ptr [0xb9b408]
// 0083c719  85c0                 test eax, eax
// 0083c71b  753f                 jne 0x83c75c
// 0083c71d  68e4849f00           push 0x9f84e4
// 0083c722  8d4c240c             lea ecx, [esp + 0xc]
// 0083c726  e845ffffff           call 0x83c670
// 0083c72b  8d4c2408             lea ecx, [esp + 8]
// 0083c72f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0083c737  e894f1ffff           call 0x83b8d0
// 0083c73c  a308b4b900           mov dword ptr [0xb9b408], eax
// 0083c741  85c0                 test eax, eax
// 0083c743  750a                 jne 0x83c74f
// 0083c745  b800000400           mov eax, 0x40000
// 0083c74a  a308b4b900           mov dword ptr [0xb9b408], eax
// 0083c74f  8d4c2408             lea ecx, [esp + 8]
// 0083c753  8bf0                 mov esi, eax
// 0083c755  e816fcffff           call 0x83c370
// 0083c75a  8bc6                 mov eax, esi
// 0083c75c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0083c760  64890d00000000       mov dword ptr fs:[0], ecx
// 0083c767  59                   pop ecx
// 0083c768  5e                   pop esi
// 0083c769  83c430               add esp, 0x30
// 0083c76c  c3                   ret 
// copied from an identical function in another client (function ?GetComCtlVersion@CXTPSystemVersion@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPSystemHelpers.cpp