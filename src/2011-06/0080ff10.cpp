// from server: 100% by auto
// roc 2011-06 0080ff10  unit: CXTPPaintManager  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080ff10
//
// 0080ff10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080ff14  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0080ff19  8a542418             mov dl, byte ptr [esp + 0x18]
// 0080ff1d  80c9ff               or cl, 0xff
// 0080ff20  2aca                 sub cl, dl
// 0080ff22  85c0                 test eax, eax
// 0080ff24  7e6d                 jle 0x80ff93
// 0080ff26  53                   push ebx
// 0080ff27  55                   push ebp
// 0080ff28  56                   push esi
// 0080ff29  8b742420             mov esi, dword ptr [esp + 0x20]
// 0080ff2d  57                   push edi
// 0080ff2e  0fb6f9               movzx edi, cl
// 0080ff31  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080ff35  89442428             mov dword ptr [esp + 0x28], eax
// 0080ff39  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080ff3d  0fb6ea               movzx ebp, dl
// 0080ff40  0fb616               movzx edx, byte ptr [esi]
// 0080ff43  0fb619               movzx ebx, byte ptr [ecx]
// 0080ff46  0fafd5               imul edx, ebp
// 0080ff49  0fafdf               imul ebx, edi
// 0080ff4c  03d3                 add edx, ebx
// 0080ff4e  c1fa08               sar edx, 8
// 0080ff51  8810                 mov byte ptr [eax], dl
// 0080ff53  0fb65601             movzx edx, byte ptr [esi + 1]
// 0080ff57  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 0080ff5b  0fafd5               imul edx, ebp
// 0080ff5e  0fafdf               imul ebx, edi
// 0080ff61  03d3                 add edx, ebx
// 0080ff63  c1fa08               sar edx, 8
// 0080ff66  885001               mov byte ptr [eax + 1], dl
// 0080ff69  0fb65602             movzx edx, byte ptr [esi + 2]
// 0080ff6d  0fb65902             movzx ebx, byte ptr [ecx + 2]
// 0080ff71  0fafd5               imul edx, ebp
// 0080ff74  0fafdf               imul ebx, edi
// 0080ff77  03d3                 add edx, ebx
// 0080ff79  c1fa08               sar edx, 8
// 0080ff7c  885002               mov byte ptr [eax + 2], dl
// 0080ff7f  83c004               add eax, 4
// 0080ff82  83c104               add ecx, 4
// 0080ff85  83c604               add esi, 4
// 0080ff88  836c242801           sub dword ptr [esp + 0x28], 1
// 0080ff8d  75b1                 jne 0x80ff40
// 0080ff8f  5f                   pop edi
// 0080ff90  5e                   pop esi
// 0080ff91  5d                   pop ebp
// 0080ff92  5b                   pop ebx
// 0080ff93  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?AlphaBlendU@CXTPPaintManager@@IAEXPAE0HH0E@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
