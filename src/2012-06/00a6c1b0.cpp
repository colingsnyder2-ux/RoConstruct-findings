// from server: 100% by auto
// roc 2012-06 00a6c1b0  unit: CXTPScrollBase  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6c1b0
//
// 00a6c1b0  8b442408             mov eax, dword ptr [esp + 8]
// 00a6c1b4  56                   push esi
// 00a6c1b5  8b742408             mov esi, dword ptr [esp + 8]
// 00a6c1b9  8b5640               mov edx, dword ptr [esi + 0x40]
// 00a6c1bc  3bc2                 cmp eax, edx
// 00a6c1be  7d04                 jge 0xa6c1c4
// 00a6c1c0  8b06                 mov eax, dword ptr [esi]
// 00a6c1c2  5e                   pop esi
// 00a6c1c3  c3                   ret 
// 00a6c1c4  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00a6c1c7  57                   push edi
// 00a6c1c8  8d3c11               lea edi, [ecx + edx]
// 00a6c1cb  3bc7                 cmp eax, edi
// 00a6c1cd  7c1c                 jl 0xa6c1eb
// 00a6c1cf  8b4608               mov eax, dword ptr [esi + 8]
// 00a6c1d2  85c0                 test eax, eax
// 00a6c1d4  740b                 je 0xa6c1e1
// 00a6c1d6  8d48ff               lea ecx, [eax - 1]
// 00a6c1d9  8b4604               mov eax, dword ptr [esi + 4]
// 00a6c1dc  5f                   pop edi
// 00a6c1dd  2bc1                 sub eax, ecx
// 00a6c1df  5e                   pop esi
// 00a6c1e0  c3                   ret 
// 00a6c1e1  8b4604               mov eax, dword ptr [esi + 4]
// 00a6c1e4  33c9                 xor ecx, ecx
// 00a6c1e6  5f                   pop edi
// 00a6c1e7  2bc1                 sub eax, ecx
// 00a6c1e9  5e                   pop esi
// 00a6c1ea  c3                   ret 
// 00a6c1eb  85c9                 test ecx, ecx
// 00a6c1ed  7423                 je 0xa6c212
// 00a6c1ef  8b7e08               mov edi, dword ptr [esi + 8]
// 00a6c1f2  85ff                 test edi, edi
// 00a6c1f4  7403                 je 0xa6c1f9
// 00a6c1f6  4f                   dec edi
// 00a6c1f7  eb02                 jmp 0xa6c1fb
// 00a6c1f9  33ff                 xor edi, edi
// 00a6c1fb  2bc2                 sub eax, edx
// 00a6c1fd  51                   push ecx
// 00a6c1fe  50                   push eax
// 00a6c1ff  8b4604               mov eax, dword ptr [esi + 4]
// 00a6c202  2b06                 sub eax, dword ptr [esi]
// 00a6c204  2bc7                 sub eax, edi
// 00a6c206  50                   push eax
// 00a6c207  ff150423b200         call dword ptr [0xb22304]
// 00a6c20d  0306                 add eax, dword ptr [esi]
// 00a6c20f  5f                   pop edi
// 00a6c210  5e                   pop esi
// 00a6c211  c3                   ret 
// 00a6c212  8b06                 mov eax, dword ptr [esi]
// 00a6c214  5f                   pop edi
// 00a6c215  48                   dec eax
// 00a6c216  5e                   pop esi
// 00a6c217  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?SBPosFromPx@@YAHPAUSCROLLBARPOSINFO@CXTPScrollBase@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
