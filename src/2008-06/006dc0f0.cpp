// from server: 100% by auto
// roc 2008-06 006dc0f0  unit: CXTTreeBase  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc0f0
//
// 006dc0f0  53                   push ebx
// 006dc0f1  56                   push esi
// 006dc0f2  8bf1                 mov esi, ecx
// 006dc0f4  57                   push edi
// 006dc0f5  8b7e04               mov edi, dword ptr [esi + 4]
// 006dc0f8  33db                 xor ebx, ebx
// 006dc0fa  3bfb                 cmp edi, ebx
// 006dc0fc  7421                 je 0x6dc11f
// 006dc0fe  395e08               cmp dword ptr [esi + 8], ebx
// 006dc101  761c                 jbe 0x6dc11f
// 006dc103  8b5608               mov edx, dword ptr [esi + 8]
// 006dc106  8bcf                 mov ecx, edi
// 006dc108  8b01                 mov eax, dword ptr [ecx]
// 006dc10a  3bc3                 cmp eax, ebx
// 006dc10c  7409                 je 0x6dc117
// 006dc10e  8bff                 mov edi, edi
// 006dc110  8b4048               mov eax, dword ptr [eax + 0x48]
// 006dc113  3bc3                 cmp eax, ebx
// 006dc115  75f9                 jne 0x6dc110
// 006dc117  83c104               add ecx, 4
// 006dc11a  83ea01               sub edx, 1
// 006dc11d  75e9                 jne 0x6dc108
// 006dc11f  57                   push edi
// 006dc120  e82548fcff           call 0x6a094a
// 006dc125  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006dc128  83c404               add esp, 4
// 006dc12b  895e04               mov dword ptr [esi + 4], ebx
// 006dc12e  895e0c               mov dword ptr [esi + 0xc], ebx
// 006dc131  895e10               mov dword ptr [esi + 0x10], ebx
// 006dc134  e8df4ffcff           call 0x6a1118
// 006dc139  5f                   pop edi
// 006dc13a  895e14               mov dword ptr [esi + 0x14], ebx
// 006dc13d  5e                   pop esi
// 006dc13e  5b                   pop ebx
// 006dc13f  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?RemoveAll@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
