// from server: 100% by auto
// roc 2008-06 006ae9d0  unit: CXTPPaintManager  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae9d0
//
// 006ae9d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ae9d4  0faf442410           imul eax, dword ptr [esp + 0x10]
// 006ae9d9  8a542418             mov dl, byte ptr [esp + 0x18]
// 006ae9dd  80c9ff               or cl, 0xff
// 006ae9e0  2aca                 sub cl, dl
// 006ae9e2  85c0                 test eax, eax
// 006ae9e4  7e6d                 jle 0x6aea53
// 006ae9e6  53                   push ebx
// 006ae9e7  55                   push ebp
// 006ae9e8  56                   push esi
// 006ae9e9  8b742420             mov esi, dword ptr [esp + 0x20]
// 006ae9ed  57                   push edi
// 006ae9ee  0fb6f9               movzx edi, cl
// 006ae9f1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ae9f5  89442428             mov dword ptr [esp + 0x28], eax
// 006ae9f9  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ae9fd  0fb6ea               movzx ebp, dl
// 006aea00  0fb616               movzx edx, byte ptr [esi]
// 006aea03  0fb619               movzx ebx, byte ptr [ecx]
// 006aea06  0fafd5               imul edx, ebp
// 006aea09  0fafdf               imul ebx, edi
// 006aea0c  03d3                 add edx, ebx
// 006aea0e  c1fa08               sar edx, 8
// 006aea11  8810                 mov byte ptr [eax], dl
// 006aea13  0fb65601             movzx edx, byte ptr [esi + 1]
// 006aea17  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 006aea1b  0fafd5               imul edx, ebp
// 006aea1e  0fafdf               imul ebx, edi
// 006aea21  03d3                 add edx, ebx
// 006aea23  c1fa08               sar edx, 8
// 006aea26  885001               mov byte ptr [eax + 1], dl
// 006aea29  0fb65602             movzx edx, byte ptr [esi + 2]
// 006aea2d  0fb65902             movzx ebx, byte ptr [ecx + 2]
// 006aea31  0fafd5               imul edx, ebp
// 006aea34  0fafdf               imul ebx, edi
// 006aea37  03d3                 add edx, ebx
// 006aea39  c1fa08               sar edx, 8
// 006aea3c  885002               mov byte ptr [eax + 2], dl
// 006aea3f  83c004               add eax, 4
// 006aea42  83c104               add ecx, 4
// 006aea45  83c604               add esi, 4
// 006aea48  836c242801           sub dword ptr [esp + 0x28], 1
// 006aea4d  75b1                 jne 0x6aea00
// 006aea4f  5f                   pop edi
// 006aea50  5e                   pop esi
// 006aea51  5d                   pop ebp
// 006aea52  5b                   pop ebx
// 006aea53  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?AlphaBlendU@CXTPPaintManager@@IAEXPAE0HH0E@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
