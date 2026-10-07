// roc 2008-06 0079e390  unit: CXTPScrollBase  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079e390
//
// 0079e390  8b442408             mov eax, dword ptr [esp + 8]
// 0079e394  56                   push esi
// 0079e395  8b742408             mov esi, dword ptr [esp + 8]
// 0079e399  8b5640               mov edx, dword ptr [esi + 0x40]
// 0079e39c  3bc2                 cmp eax, edx
// 0079e39e  7d04                 jge 0x79e3a4
// 0079e3a0  8b06                 mov eax, dword ptr [esi]
// 0079e3a2  5e                   pop esi
// 0079e3a3  c3                   ret 
// 0079e3a4  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0079e3a7  57                   push edi
// 0079e3a8  8d3c11               lea edi, [ecx + edx]
// 0079e3ab  3bc7                 cmp eax, edi
// 0079e3ad  7c1c                 jl 0x79e3cb
// 0079e3af  8b4608               mov eax, dword ptr [esi + 8]
// 0079e3b2  85c0                 test eax, eax
// 0079e3b4  740b                 je 0x79e3c1
// 0079e3b6  8d48ff               lea ecx, [eax - 1]
// 0079e3b9  8b4604               mov eax, dword ptr [esi + 4]
// 0079e3bc  5f                   pop edi
// 0079e3bd  2bc1                 sub eax, ecx
// 0079e3bf  5e                   pop esi
// 0079e3c0  c3                   ret 
// 0079e3c1  8b4604               mov eax, dword ptr [esi + 4]
// 0079e3c4  33c9                 xor ecx, ecx
// 0079e3c6  5f                   pop edi
// 0079e3c7  2bc1                 sub eax, ecx
// 0079e3c9  5e                   pop esi
// 0079e3ca  c3                   ret 
// 0079e3cb  85c9                 test ecx, ecx
// 0079e3cd  7423                 je 0x79e3f2
// 0079e3cf  8b7e08               mov edi, dword ptr [esi + 8]
// 0079e3d2  85ff                 test edi, edi
// 0079e3d4  7403                 je 0x79e3d9
// 0079e3d6  4f                   dec edi
// 0079e3d7  eb02                 jmp 0x79e3db
// 0079e3d9  33ff                 xor edi, edi
// 0079e3db  2bc2                 sub eax, edx
// 0079e3dd  51                   push ecx
// 0079e3de  50                   push eax
// 0079e3df  8b4604               mov eax, dword ptr [esi + 4]
// 0079e3e2  2b06                 sub eax, dword ptr [esi]
// 0079e3e4  2bc7                 sub eax, edi
// 0079e3e6  50                   push eax
// 0079e3e7  ff1528228000         call dword ptr [0x802228]
// 0079e3ed  0306                 add eax, dword ptr [esi]
// 0079e3ef  5f                   pop edi
// 0079e3f0  5e                   pop esi
// 0079e3f1  c3                   ret 
// 0079e3f2  8b06                 mov eax, dword ptr [esi]
// 0079e3f4  5f                   pop edi
// 0079e3f5  48                   dec eax
// 0079e3f6  5e                   pop esi
// 0079e3f7  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?SBPosFromPx@@YAHPAUSCROLLBARPOSINFO@CXTPScrollBase@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
