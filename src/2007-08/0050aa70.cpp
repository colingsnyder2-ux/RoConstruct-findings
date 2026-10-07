// roc 2007-08 0050aa70  unit: G3D::GCamera  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050aa70
//
// 0050aa70  56                   push esi
// 0050aa71  57                   push edi
// 0050aa72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050aa76  8bf1                 mov esi, ecx
// 0050aa78  d906                 fld dword ptr [esi]
// 0050aa7a  d907                 fld dword ptr [edi]
// 0050aa7c  dae9                 fucompp 
// 0050aa7e  dfe0                 fnstsw ax
// 0050aa80  f6c444               test ah, 0x44
// 0050aa83  0f8ad0000000         jp 0x50ab59
// 0050aa89  d94604               fld dword ptr [esi + 4]
// 0050aa8c  d94704               fld dword ptr [edi + 4]
// 0050aa8f  dae9                 fucompp 
// 0050aa91  dfe0                 fnstsw ax
// 0050aa93  f6c444               test ah, 0x44
// 0050aa96  0f8abd000000         jp 0x50ab59
// 0050aa9c  d94608               fld dword ptr [esi + 8]
// 0050aa9f  d94708               fld dword ptr [edi + 8]
// 0050aaa2  dae9                 fucompp 
// 0050aaa4  dfe0                 fnstsw ax
// 0050aaa6  f6c444               test ah, 0x44
// 0050aaa9  0f8aaa000000         jp 0x50ab59
// 0050aaaf  d9460c               fld dword ptr [esi + 0xc]
// 0050aab2  d9470c               fld dword ptr [edi + 0xc]
// 0050aab5  dae9                 fucompp 
// 0050aab7  dfe0                 fnstsw ax
// 0050aab9  f6c444               test ah, 0x44
// 0050aabc  0f8a97000000         jp 0x50ab59
// 0050aac2  d94610               fld dword ptr [esi + 0x10]
// 0050aac5  d94710               fld dword ptr [edi + 0x10]
// 0050aac8  dae9                 fucompp 
// 0050aaca  dfe0                 fnstsw ax
// 0050aacc  f6c444               test ah, 0x44
// 0050aacf  0f8a84000000         jp 0x50ab59
// 0050aad5  d94614               fld dword ptr [esi + 0x14]
// 0050aad8  d94714               fld dword ptr [edi + 0x14]
// 0050aadb  dae9                 fucompp 
// 0050aadd  dfe0                 fnstsw ax
// 0050aadf  f6c444               test ah, 0x44
// 0050aae2  7a75                 jp 0x50ab59
// 0050aae4  d94618               fld dword ptr [esi + 0x18]
// 0050aae7  d94718               fld dword ptr [edi + 0x18]
// 0050aaea  dae9                 fucompp 
// 0050aaec  dfe0                 fnstsw ax
// 0050aaee  f6c444               test ah, 0x44
// 0050aaf1  7a66                 jp 0x50ab59
// 0050aaf3  dd4720               fld qword ptr [edi + 0x20]
// 0050aaf6  dc5e20               fcomp qword ptr [esi + 0x20]
// 0050aaf9  dfe0                 fnstsw ax
// 0050aafb  f6c444               test ah, 0x44
// 0050aafe  7a59                 jp 0x50ab59
// 0050ab00  dd4728               fld qword ptr [edi + 0x28]
// 0050ab03  dc5e28               fcomp qword ptr [esi + 0x28]
// 0050ab06  dfe0                 fnstsw ax
// 0050ab08  f6c444               test ah, 0x44
// 0050ab0b  7a4c                 jp 0x50ab59
// 0050ab0d  dd4730               fld qword ptr [edi + 0x30]
// 0050ab10  dc5e30               fcomp qword ptr [esi + 0x30]
// 0050ab13  dfe0                 fnstsw ax
// 0050ab15  f6c444               test ah, 0x44
// 0050ab18  7a3f                 jp 0x50ab59
// 0050ab1a  dd4738               fld qword ptr [edi + 0x38]
// 0050ab1d  dc5e38               fcomp qword ptr [esi + 0x38]
// 0050ab20  dfe0                 fnstsw ax
// 0050ab22  f6c444               test ah, 0x44
// 0050ab25  7a32                 jp 0x50ab59
// 0050ab27  8d4740               lea eax, [edi + 0x40]
// 0050ab2a  50                   push eax
// 0050ab2b  8d4e40               lea ecx, [esi + 0x40]
// 0050ab2e  e8fd17f3ff           call 0x43c330
// 0050ab33  84c0                 test al, al
// 0050ab35  7422                 je 0x50ab59
// 0050ab37  8a4e4c               mov cl, byte ptr [esi + 0x4c]
// 0050ab3a  3a4f4c               cmp cl, byte ptr [edi + 0x4c]
// 0050ab3d  751a                 jne 0x50ab59
// 0050ab3f  8a564d               mov dl, byte ptr [esi + 0x4d]
// 0050ab42  3a574d               cmp dl, byte ptr [edi + 0x4d]
// 0050ab45  7512                 jne 0x50ab59
// 0050ab47  8a464e               mov al, byte ptr [esi + 0x4e]
// 0050ab4a  3a474e               cmp al, byte ptr [edi + 0x4e]
// 0050ab4d  750a                 jne 0x50ab59
// 0050ab4f  5f                   pop edi
// 0050ab50  b801000000           mov eax, 1
// 0050ab55  5e                   pop esi
// 0050ab56  c20400               ret 4
// 0050ab59  5f                   pop edi
// 0050ab5a  33c0                 xor eax, eax
// 0050ab5c  5e                   pop esi
// 0050ab5d  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??8GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
