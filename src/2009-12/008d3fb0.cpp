// roc 2009-12 008d3fb0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d3fb0
//
// 008d3fb0  8b542408             mov edx, dword ptr [esp + 8]
// 008d3fb4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d3fb8  83ec10               sub esp, 0x10
// 008d3fbb  53                   push ebx
// 008d3fbc  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008d3fc0  55                   push ebp
// 008d3fc1  8b29                 mov ebp, dword ptr [ecx]
// 008d3fc3  56                   push esi
// 008d3fc4  8b742420             mov esi, dword ptr [esp + 0x20]
// 008d3fc8  8916                 mov dword ptr [esi], edx
// 008d3fca  57                   push edi
// 008d3fcb  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008d3fcf  895e04               mov dword ptr [esi + 4], ebx
// 008d3fd2  894608               mov dword ptr [esi + 8], eax
// 008d3fd5  8b442434             mov eax, dword ptr [esp + 0x34]
// 008d3fd9  57                   push edi
// 008d3fda  83ec10               sub esp, 0x10
// 008d3fdd  89460c               mov dword ptr [esi + 0xc], eax
// 008d3fe0  8bc4                 mov eax, esp
// 008d3fe2  8910                 mov dword ptr [eax], edx
// 008d3fe4  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d3fe8  895804               mov dword ptr [eax + 4], ebx
// 008d3feb  895008               mov dword ptr [eax + 8], edx
// 008d3fee  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d3ff2  89500c               mov dword ptr [eax + 0xc], edx
// 008d3ff5  8b5508               mov edx, dword ptr [ebp + 8]
// 008d3ff8  8d442424             lea eax, [esp + 0x24]
// 008d3ffc  50                   push eax
// 008d3ffd  ffd2                 call edx
// 008d3fff  8b07                 mov eax, dword ptr [edi]
// 008d4001  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d4004  8bcf                 mov ecx, edi
// 008d4006  ffd2                 call edx
// 008d4008  83f803               cmp eax, 3
// 008d400b  774a                 ja 0x8d4057
// 008d400d  ff248564408d00       jmp dword ptr [eax*4 + 0x8d4064]
// 008d4014  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d4018  48                   dec eax
// 008d4019  894604               mov dword ptr [esi + 4], eax
// 008d401c  8bc6                 mov eax, esi
// 008d401e  5f                   pop edi
// 008d401f  5e                   pop esi
// 008d4020  5d                   pop ebp
// 008d4021  5b                   pop ebx
// 008d4022  83c410               add esp, 0x10
// 008d4025  c21800               ret 0x18
// 008d4028  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d402c  49                   dec ecx
// 008d402d  890e                 mov dword ptr [esi], ecx
// 008d402f  8bc6                 mov eax, esi
// 008d4031  5f                   pop edi
// 008d4032  5e                   pop esi
// 008d4033  5d                   pop ebp
// 008d4034  5b                   pop ebx
// 008d4035  83c410               add esp, 0x10
// 008d4038  c21800               ret 0x18
// 008d403b  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d403f  42                   inc edx
// 008d4040  89560c               mov dword ptr [esi + 0xc], edx
// 008d4043  8bc6                 mov eax, esi
// 008d4045  5f                   pop edi
// 008d4046  5e                   pop esi
// 008d4047  5d                   pop ebp
// 008d4048  5b                   pop ebx
// 008d4049  83c410               add esp, 0x10
// 008d404c  c21800               ret 0x18
// 008d404f  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d4053  40                   inc eax
// 008d4054  894608               mov dword ptr [esi + 8], eax
// 008d4057  5f                   pop edi
// 008d4058  8bc6                 mov eax, esi
// 008d405a  5e                   pop esi
// 008d405b  5d                   pop ebp
// 008d405c  5b                   pop ebx
// 008d405d  83c410               add esp, 0x10
// 008d4060  c21800               ret 0x18
// 008d4063  90                   nop 
// 008d4064  1440                 adc al, 0x40
// 008d4066  8d00                 lea eax, [eax]
// 008d4068  28408d               sub byte ptr [eax - 0x73], al
// 008d406b  003b                 add byte ptr [ebx], bh
// 008d406d  40                   inc eax
// 008d406e  8d00                 lea eax, [eax]
// 008d4070  4f                   dec edi
// 008d4071  40                   inc eax
// 008d4072  8d00                 lea eax, [eax]
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
