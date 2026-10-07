// roc 2012-06 009881f0  unit: CXTPPaintManager  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009881f0
//
// 009881f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009881f4  0faf442410           imul eax, dword ptr [esp + 0x10]
// 009881f9  8a542418             mov dl, byte ptr [esp + 0x18]
// 009881fd  80c9ff               or cl, 0xff
// 00988200  2aca                 sub cl, dl
// 00988202  85c0                 test eax, eax
// 00988204  7e6d                 jle 0x988273
// 00988206  53                   push ebx
// 00988207  55                   push ebp
// 00988208  56                   push esi
// 00988209  8b742420             mov esi, dword ptr [esp + 0x20]
// 0098820d  57                   push edi
// 0098820e  0fb6f9               movzx edi, cl
// 00988211  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00988215  89442428             mov dword ptr [esp + 0x28], eax
// 00988219  8b442414             mov eax, dword ptr [esp + 0x14]
// 0098821d  0fb6ea               movzx ebp, dl
// 00988220  0fb616               movzx edx, byte ptr [esi]
// 00988223  0fb619               movzx ebx, byte ptr [ecx]
// 00988226  0fafd5               imul edx, ebp
// 00988229  0fafdf               imul ebx, edi
// 0098822c  03d3                 add edx, ebx
// 0098822e  c1fa08               sar edx, 8
// 00988231  8810                 mov byte ptr [eax], dl
// 00988233  0fb65601             movzx edx, byte ptr [esi + 1]
// 00988237  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 0098823b  0fafd5               imul edx, ebp
// 0098823e  0fafdf               imul ebx, edi
// 00988241  03d3                 add edx, ebx
// 00988243  c1fa08               sar edx, 8
// 00988246  885001               mov byte ptr [eax + 1], dl
// 00988249  0fb65602             movzx edx, byte ptr [esi + 2]
// 0098824d  0fb65902             movzx ebx, byte ptr [ecx + 2]
// 00988251  0fafd5               imul edx, ebp
// 00988254  0fafdf               imul ebx, edi
// 00988257  03d3                 add edx, ebx
// 00988259  c1fa08               sar edx, 8
// 0098825c  885002               mov byte ptr [eax + 2], dl
// 0098825f  83c004               add eax, 4
// 00988262  83c104               add ecx, 4
// 00988265  83c604               add esi, 4
// 00988268  836c242801           sub dword ptr [esp + 0x28], 1
// 0098826d  75b1                 jne 0x988220
// 0098826f  5f                   pop edi
// 00988270  5e                   pop esi
// 00988271  5d                   pop ebp
// 00988272  5b                   pop ebx
// 00988273  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?AlphaBlendU@CXTPPaintManager@@IAEXPAE0HH0E@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
