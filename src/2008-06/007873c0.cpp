// roc 2008-06 007873c0  unit: CXTColorHex  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007873c0
//
// 007873c0  51                   push ecx
// 007873c1  53                   push ebx
// 007873c2  55                   push ebp
// 007873c3  894c2408             mov dword ptr [esp + 8], ecx
// 007873c7  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 007873ca  56                   push esi
// 007873cb  57                   push edi
// 007873cc  85c9                 test ecx, ecx
// 007873ce  7440                 je 0x787410
// 007873d0  8b6908               mov ebp, dword ptr [ecx + 8]
// 007873d3  85ed                 test ebp, ebp
// 007873d5  7439                 je 0x787410
// 007873d7  8b4510               mov eax, dword ptr [ebp + 0x10]
// 007873da  f7d8                 neg eax
// 007873dc  1bc0                 sbb eax, eax
// 007873de  25f5fdffff           and eax, 0xfffffdf5
// 007873e3  05b3020000           add eax, 0x2b3
// 007873e8  33f6                 xor esi, esi
// 007873ea  85c0                 test eax, eax
// 007873ec  7e1c                 jle 0x78740a
// 007873ee  8b5514               mov edx, dword ptr [ebp + 0x14]
// 007873f1  8b3a                 mov edi, dword ptr [edx]
// 007873f3  8b5a04               mov ebx, dword ptr [edx + 4]
// 007873f6  397c2418             cmp dword ptr [esp + 0x18], edi
// 007873fa  7506                 jne 0x787402
// 007873fc  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 00787400  7419                 je 0x78741b
// 00787402  46                   inc esi
// 00787403  83c208               add edx, 8
// 00787406  3bf0                 cmp esi, eax
// 00787408  7ce7                 jl 0x7873f1
// 0078740a  8b09                 mov ecx, dword ptr [ecx]
// 0078740c  85c9                 test ecx, ecx
// 0078740e  75c0                 jne 0x7873d0
// 00787410  5f                   pop edi
// 00787411  5e                   pop esi
// 00787412  5d                   pop ebp
// 00787413  83c8ff               or eax, 0xffffffff
// 00787416  5b                   pop ebx
// 00787417  59                   pop ecx
// 00787418  c20800               ret 8
// 0078741b  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0078741e  8b10                 mov edx, dword ptr [eax]
// 00787420  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00787424  895168               mov dword ptr [ecx + 0x68], edx
// 00787427  8b4004               mov eax, dword ptr [eax + 4]
// 0078742a  89416c               mov dword ptr [ecx + 0x6c], eax
// 0078742d  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00787430  5f                   pop edi
// 00787431  5e                   pop esi
// 00787432  895164               mov dword ptr [ecx + 0x64], edx
// 00787435  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00787438  5d                   pop ebp
// 00787439  5b                   pop ebx
// 0078743a  59                   pop ecx
// 0078743b  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?ColorFromPoint@CXTColorHex@@QAEKVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
