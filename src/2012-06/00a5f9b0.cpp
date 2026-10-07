// roc 2012-06 00a5f9b0  unit: CXTColorHex  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5f9b0
//
// 00a5f9b0  51                   push ecx
// 00a5f9b1  53                   push ebx
// 00a5f9b2  55                   push ebp
// 00a5f9b3  894c2408             mov dword ptr [esp + 8], ecx
// 00a5f9b7  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 00a5f9ba  56                   push esi
// 00a5f9bb  57                   push edi
// 00a5f9bc  85c9                 test ecx, ecx
// 00a5f9be  7440                 je 0xa5fa00
// 00a5f9c0  8b6908               mov ebp, dword ptr [ecx + 8]
// 00a5f9c3  85ed                 test ebp, ebp
// 00a5f9c5  7439                 je 0xa5fa00
// 00a5f9c7  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00a5f9ca  f7d8                 neg eax
// 00a5f9cc  1bc0                 sbb eax, eax
// 00a5f9ce  25f5fdffff           and eax, 0xfffffdf5
// 00a5f9d3  05b3020000           add eax, 0x2b3
// 00a5f9d8  33f6                 xor esi, esi
// 00a5f9da  85c0                 test eax, eax
// 00a5f9dc  7e1c                 jle 0xa5f9fa
// 00a5f9de  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00a5f9e1  8b3a                 mov edi, dword ptr [edx]
// 00a5f9e3  8b5a04               mov ebx, dword ptr [edx + 4]
// 00a5f9e6  397c2418             cmp dword ptr [esp + 0x18], edi
// 00a5f9ea  7506                 jne 0xa5f9f2
// 00a5f9ec  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 00a5f9f0  7419                 je 0xa5fa0b
// 00a5f9f2  46                   inc esi
// 00a5f9f3  83c208               add edx, 8
// 00a5f9f6  3bf0                 cmp esi, eax
// 00a5f9f8  7ce7                 jl 0xa5f9e1
// 00a5f9fa  8b09                 mov ecx, dword ptr [ecx]
// 00a5f9fc  85c9                 test ecx, ecx
// 00a5f9fe  75c0                 jne 0xa5f9c0
// 00a5fa00  5f                   pop edi
// 00a5fa01  5e                   pop esi
// 00a5fa02  5d                   pop ebp
// 00a5fa03  83c8ff               or eax, 0xffffffff
// 00a5fa06  5b                   pop ebx
// 00a5fa07  59                   pop ecx
// 00a5fa08  c20800               ret 8
// 00a5fa0b  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00a5fa0e  8b10                 mov edx, dword ptr [eax]
// 00a5fa10  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5fa14  895168               mov dword ptr [ecx + 0x68], edx
// 00a5fa17  8b4004               mov eax, dword ptr [eax + 4]
// 00a5fa1a  89416c               mov dword ptr [ecx + 0x6c], eax
// 00a5fa1d  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00a5fa20  5f                   pop edi
// 00a5fa21  5e                   pop esi
// 00a5fa22  895164               mov dword ptr [ecx + 0x64], edx
// 00a5fa25  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00a5fa28  5d                   pop ebp
// 00a5fa29  5b                   pop ebx
// 00a5fa2a  59                   pop ecx
// 00a5fa2b  c20800               ret 8
// library xtp-13.2.1/Source\Controls\XTColorPageStandard.cpp (function ?ColorFromPoint@CXTColorHex@@QAEKVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorPageStandard.cpp
