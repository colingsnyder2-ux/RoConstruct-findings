// roc 2007-08 0071d6b0  unit: CXTPScrollBase  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071d6b0
//
// 0071d6b0  8b442408             mov eax, dword ptr [esp + 8]
// 0071d6b4  56                   push esi
// 0071d6b5  8b742408             mov esi, dword ptr [esp + 8]
// 0071d6b9  8b5640               mov edx, dword ptr [esi + 0x40]
// 0071d6bc  3bc2                 cmp eax, edx
// 0071d6be  7d04                 jge 0x71d6c4
// 0071d6c0  8b06                 mov eax, dword ptr [esi]
// 0071d6c2  5e                   pop esi
// 0071d6c3  c3                   ret 
// 0071d6c4  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0071d6c7  57                   push edi
// 0071d6c8  8d3c11               lea edi, [ecx + edx]
// 0071d6cb  3bc7                 cmp eax, edi
// 0071d6cd  7c1c                 jl 0x71d6eb
// 0071d6cf  8b4608               mov eax, dword ptr [esi + 8]
// 0071d6d2  85c0                 test eax, eax
// 0071d6d4  740b                 je 0x71d6e1
// 0071d6d6  8d48ff               lea ecx, [eax - 1]
// 0071d6d9  8b4604               mov eax, dword ptr [esi + 4]
// 0071d6dc  5f                   pop edi
// 0071d6dd  2bc1                 sub eax, ecx
// 0071d6df  5e                   pop esi
// 0071d6e0  c3                   ret 
// 0071d6e1  8b4604               mov eax, dword ptr [esi + 4]
// 0071d6e4  33c9                 xor ecx, ecx
// 0071d6e6  5f                   pop edi
// 0071d6e7  2bc1                 sub eax, ecx
// 0071d6e9  5e                   pop esi
// 0071d6ea  c3                   ret 
// 0071d6eb  85c9                 test ecx, ecx
// 0071d6ed  7425                 je 0x71d714
// 0071d6ef  8b7e08               mov edi, dword ptr [esi + 8]
// 0071d6f2  85ff                 test edi, edi
// 0071d6f4  7405                 je 0x71d6fb
// 0071d6f6  83c7ff               add edi, -1
// 0071d6f9  eb02                 jmp 0x71d6fd
// 0071d6fb  33ff                 xor edi, edi
// 0071d6fd  2bc2                 sub eax, edx
// 0071d6ff  51                   push ecx
// 0071d700  50                   push eax
// 0071d701  8b4604               mov eax, dword ptr [esi + 4]
// 0071d704  2b06                 sub eax, dword ptr [esi]
// 0071d706  2bc7                 sub eax, edi
// 0071d708  50                   push eax
// 0071d709  ff154cd27700         call dword ptr [0x77d24c]
// 0071d70f  0306                 add eax, dword ptr [esi]
// 0071d711  5f                   pop edi
// 0071d712  5e                   pop esi
// 0071d713  c3                   ret 
// 0071d714  8b06                 mov eax, dword ptr [esi]
// 0071d716  5f                   pop edi
// 0071d717  83e801               sub eax, 1
// 0071d71a  5e                   pop esi
// 0071d71b  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPScrollBar.cpp (function ?SBPosFromPx@@YAHPAUSCROLLBARPOSINFO@CXTPScrollBase@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
