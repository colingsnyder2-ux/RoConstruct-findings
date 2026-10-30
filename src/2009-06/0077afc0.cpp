// roc 2009-06 0077afc0  unit: CXTPControlTabWorkspace  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077afc0
//
// 0077afc0  83ec08               sub esp, 8
// 0077afc3  53                   push ebx
// 0077afc4  56                   push esi
// 0077afc5  8bd9                 mov ebx, ecx
// 0077afc7  8b8378010000         mov eax, dword ptr [ebx + 0x178]
// 0077afcd  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077afd0  57                   push edi
// 0077afd1  8dbb78010000         lea edi, [ebx + 0x178]
// 0077afd7  8bcf                 mov ecx, edi
// 0077afd9  ffd2                 call edx
// 0077afdb  8bf0                 mov esi, eax
// 0077afdd  85f6                 test esi, esi
// 0077afdf  751c                 jne 0x77affd
// 0077afe1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077afe5  8b742418             mov esi, dword ptr [esp + 0x18]
// 0077afe9  50                   push eax
// 0077afea  56                   push esi
// 0077afeb  8bcb                 mov ecx, ebx
// 0077afed  e86e4ffaff           call 0x71ff60
// 0077aff2  5f                   pop edi
// 0077aff3  8bc6                 mov eax, esi
// 0077aff5  5e                   pop esi
// 0077aff6  5b                   pop ebx
// 0077aff7  83c408               add esp, 8
// 0077affa  c20800               ret 8
// 0077affd  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0077b003  57                   push edi
// 0077b004  e8a72f0800           call 0x7fdfb0
// 0077b009  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0077b00d  7403                 je 0x77b012
// 0077b00f  83c002               add eax, 2
// 0077b012  8b8b00010000         mov ecx, dword ptr [ebx + 0x100]
// 0077b018  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0077b01e  83f902               cmp ecx, 2
// 0077b021  740a                 je 0x77b02d
// 0077b023  83f903               cmp ecx, 3
// 0077b026  7405                 je 0x77b02d
// 0077b028  83f905               cmp ecx, 5
// 0077b02b  7510                 jne 0x77b03d
// 0077b02d  8b9360010000         mov edx, dword ptr [ebx + 0x160]
// 0077b033  8944240c             mov dword ptr [esp + 0xc], eax
// 0077b037  89542410             mov dword ptr [esp + 0x10], edx
// 0077b03b  eb0e                 jmp 0x77b04b
// 0077b03d  8b8b60010000         mov ecx, dword ptr [ebx + 0x160]
// 0077b043  894c240c             mov dword ptr [esp + 0xc], ecx
// 0077b047  89442410             mov dword ptr [esp + 0x10], eax
// 0077b04b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0077b04f  8d4c240c             lea ecx, [esp + 0xc]
// 0077b053  8b11                 mov edx, dword ptr [ecx]
// 0077b055  8b4904               mov ecx, dword ptr [ecx + 4]
// 0077b058  5f                   pop edi
// 0077b059  5e                   pop esi
// 0077b05a  8910                 mov dword ptr [eax], edx
// 0077b05c  894804               mov dword ptr [eax + 4], ecx
// 0077b05f  5b                   pop ebx
// 0077b060  83c408               add esp, 8
// 0077b063  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetSize@CXTPControlTabWorkspace@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
