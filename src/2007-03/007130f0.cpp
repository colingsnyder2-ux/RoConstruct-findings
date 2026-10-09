// roc 2007-03 007130f0  unit: seg_00710000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007130f0
//
// 007130f0  8b442408             mov eax, dword ptr [esp + 8]
// 007130f4  56                   push esi
// 007130f5  8b742408             mov esi, dword ptr [esp + 8]
// 007130f9  8b5640               mov edx, dword ptr [esi + 0x40]
// 007130fc  3bc2                 cmp eax, edx
// 007130fe  7d04                 jge 0x713104
// 00713100  8b06                 mov eax, dword ptr [esi]
// 00713102  5e                   pop esi
// 00713103  c3                   ret 
// 00713104  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00713107  57                   push edi
// 00713108  8d3c11               lea edi, [ecx + edx]
// 0071310b  3bc7                 cmp eax, edi
// 0071310d  7c1c                 jl 0x71312b
// 0071310f  8b4608               mov eax, dword ptr [esi + 8]
// 00713112  85c0                 test eax, eax
// 00713114  740b                 je 0x713121
// 00713116  8d48ff               lea ecx, [eax - 1]
// 00713119  8b4604               mov eax, dword ptr [esi + 4]
// 0071311c  5f                   pop edi
// 0071311d  2bc1                 sub eax, ecx
// 0071311f  5e                   pop esi
// 00713120  c3                   ret 
// 00713121  8b4604               mov eax, dword ptr [esi + 4]
// 00713124  33c9                 xor ecx, ecx
// 00713126  5f                   pop edi
// 00713127  2bc1                 sub eax, ecx
// 00713129  5e                   pop esi
// 0071312a  c3                   ret 
// 0071312b  85c9                 test ecx, ecx
// 0071312d  7425                 je 0x713154
// 0071312f  8b7e08               mov edi, dword ptr [esi + 8]
// 00713132  85ff                 test edi, edi
// 00713134  7405                 je 0x71313b
// 00713136  83c7ff               add edi, -1
// 00713139  eb02                 jmp 0x71313d
// 0071313b  33ff                 xor edi, edi
// 0071313d  2bc2                 sub eax, edx
// 0071313f  51                   push ecx
// 00713140  50                   push eax
// 00713141  8b4604               mov eax, dword ptr [esi + 4]
// 00713144  2b06                 sub eax, dword ptr [esi]
// 00713146  2bc7                 sub eax, edi
// 00713148  50                   push eax
// 00713149  ff1510d27700         call dword ptr [0x77d210]
// 0071314f  0306                 add eax, dword ptr [esi]
// 00713151  5f                   pop edi
// 00713152  5e                   pop esi
// 00713153  c3                   ret 
// 00713154  8b06                 mov eax, dword ptr [esi]
// 00713156  5f                   pop edi
// 00713157  83e801               sub eax, 1
// 0071315a  5e                   pop esi
// 0071315b  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPScrollBar.cpp (function ?SBPosFromPx@@YAHPAUSCROLLBARPOSINFO@CXTPScrollBase@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
