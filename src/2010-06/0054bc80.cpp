// roc 2010-06 0054bc80  unit: RBX::AggregateChunk  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054bc80
//
// 0054bc80  53                   push ebx
// 0054bc81  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0054bc85  8b4304               mov eax, dword ptr [ebx + 4]
// 0054bc88  55                   push ebp
// 0054bc89  57                   push edi
// 0054bc8a  6a01                 push 1
// 0054bc8c  50                   push eax
// 0054bc8d  8bf9                 mov edi, ecx
// 0054bc8f  e8fc85ffff           call 0x544290
// 0054bc94  33ed                 xor ebp, ebp
// 0054bc96  396f04               cmp dword ptr [edi + 4], ebp
// 0054bc99  7e7f                 jle 0x54bd1a
// 0054bc9b  56                   push esi
// 0054bc9c  33f6                 xor esi, esi
// 0054bc9e  8bff                 mov edi, edi
// 0054bca0  8b03                 mov eax, dword ptr [ebx]
// 0054bca2  8b0f                 mov ecx, dword ptr [edi]
// 0054bca4  d90430               fld dword ptr [eax + esi]
// 0054bca7  d91c31               fstp dword ptr [ecx + esi]
// 0054bcaa  03c6                 add eax, esi
// 0054bcac  d94004               fld dword ptr [eax + 4]
// 0054bcaf  03ce                 add ecx, esi
// 0054bcb1  d95904               fstp dword ptr [ecx + 4]
// 0054bcb4  45                   inc ebp
// 0054bcb5  d94008               fld dword ptr [eax + 8]
// 0054bcb8  83c650               add esi, 0x50
// 0054bcbb  d95908               fstp dword ptr [ecx + 8]
// 0054bcbe  d9400c               fld dword ptr [eax + 0xc]
// 0054bcc1  d9590c               fstp dword ptr [ecx + 0xc]
// 0054bcc4  d94010               fld dword ptr [eax + 0x10]
// 0054bcc7  d95910               fstp dword ptr [ecx + 0x10]
// 0054bcca  d94014               fld dword ptr [eax + 0x14]
// 0054bccd  d95914               fstp dword ptr [ecx + 0x14]
// 0054bcd0  d94018               fld dword ptr [eax + 0x18]
// 0054bcd3  d95918               fstp dword ptr [ecx + 0x18]
// 0054bcd6  dd4020               fld qword ptr [eax + 0x20]
// 0054bcd9  dd5920               fstp qword ptr [ecx + 0x20]
// 0054bcdc  dd4028               fld qword ptr [eax + 0x28]
// 0054bcdf  dd5928               fstp qword ptr [ecx + 0x28]
// 0054bce2  dd4030               fld qword ptr [eax + 0x30]
// 0054bce5  dd5930               fstp qword ptr [ecx + 0x30]
// 0054bce8  dd4038               fld qword ptr [eax + 0x38]
// 0054bceb  dd5938               fstp qword ptr [ecx + 0x38]
// 0054bcee  d94040               fld dword ptr [eax + 0x40]
// 0054bcf1  d95940               fstp dword ptr [ecx + 0x40]
// 0054bcf4  d94044               fld dword ptr [eax + 0x44]
// 0054bcf7  d95944               fstp dword ptr [ecx + 0x44]
// 0054bcfa  d94048               fld dword ptr [eax + 0x48]
// 0054bcfd  d95948               fstp dword ptr [ecx + 0x48]
// 0054bd00  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 0054bd04  88514c               mov byte ptr [ecx + 0x4c], dl
// 0054bd07  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 0054bd0b  88514d               mov byte ptr [ecx + 0x4d], dl
// 0054bd0e  8a404e               mov al, byte ptr [eax + 0x4e]
// 0054bd11  88414e               mov byte ptr [ecx + 0x4e], al
// 0054bd14  3b6f04               cmp ebp, dword ptr [edi + 4]
// 0054bd17  7c87                 jl 0x54bca0
// 0054bd19  5e                   pop esi
// 0054bd1a  8bc7                 mov eax, edi
// 0054bd1c  5f                   pop edi
// 0054bd1d  5d                   pop ebp
// 0054bd1e  5b                   pop ebx
// 0054bd1f  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??4?$Array@VGLight@G3D@@@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
