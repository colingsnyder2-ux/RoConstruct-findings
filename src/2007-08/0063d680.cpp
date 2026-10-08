// from server: 100% by auto
// roc 2007-08 0063d680  unit: CXTPPaintManager  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063d680
//
// 0063d680  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063d684  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0063d689  8a542418             mov dl, byte ptr [esp + 0x18]
// 0063d68d  80c9ff               or cl, 0xff
// 0063d690  2aca                 sub cl, dl
// 0063d692  85c0                 test eax, eax
// 0063d694  7e6d                 jle 0x63d703
// 0063d696  53                   push ebx
// 0063d697  55                   push ebp
// 0063d698  56                   push esi
// 0063d699  8b742420             mov esi, dword ptr [esp + 0x20]
// 0063d69d  57                   push edi
// 0063d69e  0fb6f9               movzx edi, cl
// 0063d6a1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0063d6a5  89442428             mov dword ptr [esp + 0x28], eax
// 0063d6a9  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063d6ad  0fb6ea               movzx ebp, dl
// 0063d6b0  0fb616               movzx edx, byte ptr [esi]
// 0063d6b3  0fb619               movzx ebx, byte ptr [ecx]
// 0063d6b6  0fafd5               imul edx, ebp
// 0063d6b9  0fafdf               imul ebx, edi
// 0063d6bc  03d3                 add edx, ebx
// 0063d6be  c1fa08               sar edx, 8
// 0063d6c1  8810                 mov byte ptr [eax], dl
// 0063d6c3  0fb65601             movzx edx, byte ptr [esi + 1]
// 0063d6c7  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 0063d6cb  0fafd5               imul edx, ebp
// 0063d6ce  0fafdf               imul ebx, edi
// 0063d6d1  03d3                 add edx, ebx
// 0063d6d3  c1fa08               sar edx, 8
// 0063d6d6  885001               mov byte ptr [eax + 1], dl
// 0063d6d9  0fb65602             movzx edx, byte ptr [esi + 2]
// 0063d6dd  0fb65902             movzx ebx, byte ptr [ecx + 2]
// 0063d6e1  0fafd5               imul edx, ebp
// 0063d6e4  0fafdf               imul ebx, edi
// 0063d6e7  03d3                 add edx, ebx
// 0063d6e9  c1fa08               sar edx, 8
// 0063d6ec  885002               mov byte ptr [eax + 2], dl
// 0063d6ef  83c004               add eax, 4
// 0063d6f2  83c104               add ecx, 4
// 0063d6f5  83c604               add esi, 4
// 0063d6f8  836c242801           sub dword ptr [esp + 0x28], 1
// 0063d6fd  75b1                 jne 0x63d6b0
// 0063d6ff  5f                   pop edi
// 0063d700  5e                   pop esi
// 0063d701  5d                   pop ebp
// 0063d702  5b                   pop ebx
// 0063d703  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?AlphaBlendU@CXTPPaintManager@@IAEXPAE0HH0E@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
