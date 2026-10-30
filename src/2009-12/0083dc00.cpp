// roc 2009-12 0083dc00  unit: CXTPCustomizeSheet  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083dc00
//
// 0083dc00  56                   push esi
// 0083dc01  8bf1                 mov esi, ecx
// 0083dc03  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 0083dc0a  743f                 je 0x83dc4b
// 0083dc0c  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083dc12  e88967fdff           call 0x8143a0
// 0083dc17  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083dc1d  8b91a0000000         mov edx, dword ptr [ecx + 0xa0]
// 0083dc23  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083dc27  56                   push esi
// 0083dc28  6a00                 push 0
// 0083dc2a  f7d8                 neg eax
// 0083dc2c  52                   push edx
// 0083dc2d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0083dc31  1bc0                 sbb eax, eax
// 0083dc33  51                   push ecx
// 0083dc34  83e008               and eax, 8
// 0083dc37  52                   push edx
// 0083dc38  83c801               or eax, 1
// 0083dc3b  50                   push eax
// 0083dc3c  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0083dc42  50                   push eax
// 0083dc43  e8f888fdff           call 0x816540
// 0083dc48  83c41c               add esp, 0x1c
// 0083dc4b  5e                   pop esi
// 0083dc4c  c20800               ret 8
// copied from an identical function in another client (function ?ContextMenu@CXTPCustomizeSheet@@QAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp