// from server: 100% by auto
// roc 2012-06 009bf6d0  unit: CXTTreeBase  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf6d0
//
// 009bf6d0  53                   push ebx
// 009bf6d1  56                   push esi
// 009bf6d2  8bf1                 mov esi, ecx
// 009bf6d4  57                   push edi
// 009bf6d5  8b7e04               mov edi, dword ptr [esi + 4]
// 009bf6d8  33db                 xor ebx, ebx
// 009bf6da  3bfb                 cmp edi, ebx
// 009bf6dc  7421                 je 0x9bf6ff
// 009bf6de  395e08               cmp dword ptr [esi + 8], ebx
// 009bf6e1  761c                 jbe 0x9bf6ff
// 009bf6e3  8b5608               mov edx, dword ptr [esi + 8]
// 009bf6e6  8bcf                 mov ecx, edi
// 009bf6e8  8b01                 mov eax, dword ptr [ecx]
// 009bf6ea  3bc3                 cmp eax, ebx
// 009bf6ec  7409                 je 0x9bf6f7
// 009bf6ee  8bff                 mov edi, edi
// 009bf6f0  8b4048               mov eax, dword ptr [eax + 0x48]
// 009bf6f3  3bc3                 cmp eax, ebx
// 009bf6f5  75f9                 jne 0x9bf6f0
// 009bf6f7  83c104               add ecx, 4
// 009bf6fa  83ea01               sub edx, 1
// 009bf6fd  75e9                 jne 0x9bf6e8
// 009bf6ff  57                   push edi
// 009bf700  e8b52cfcff           call 0x9823ba
// 009bf705  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 009bf708  83c404               add esp, 4
// 009bf70b  895e04               mov dword ptr [esi + 4], ebx
// 009bf70e  895e0c               mov dword ptr [esi + 0xc], ebx
// 009bf711  895e10               mov dword ptr [esi + 0x10], ebx
// 009bf714  e83535fcff           call 0x982c4e
// 009bf719  5f                   pop edi
// 009bf71a  895e14               mov dword ptr [esi + 0x14], ebx
// 009bf71d  5e                   pop esi
// 009bf71e  5b                   pop ebx
// 009bf71f  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?RemoveAll@?$CMap@PAXPAXUCLRFONT@CXTPTreeBase@@AAU12@@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
