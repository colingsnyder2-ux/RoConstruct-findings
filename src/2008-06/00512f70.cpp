// roc 2008-06 00512f70  unit: G3D::GCamera  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512f70
//
// 00512f70  8b442404             mov eax, dword ptr [esp + 4]
// 00512f74  83781400             cmp dword ptr [eax + 0x14], 0
// 00512f78  56                   push esi
// 00512f79  57                   push edi
// 00512f7a  8bf1                 mov esi, ecx
// 00512f7c  bf10000000           mov edi, 0x10
// 00512f81  761c                 jbe 0x512f9f
// 00512f83  397818               cmp dword ptr [eax + 0x18], edi
// 00512f86  7205                 jb 0x512f8d
// 00512f88  8b4004               mov eax, dword ptr [eax + 4]
// 00512f8b  eb03                 jmp 0x512f90
// 00512f8d  83c004               add eax, 4
// 00512f90  50                   push eax
// 00512f91  6808888200           push 0x828808
// 00512f96  56                   push esi
// 00512f97  e814ffffff           call 0x512eb0
// 00512f9c  83c40c               add esp, 0xc
// 00512f9f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00512fa3  83781400             cmp dword ptr [eax + 0x14], 0
// 00512fa7  761c                 jbe 0x512fc5
// 00512fa9  397818               cmp dword ptr [eax + 0x18], edi
// 00512fac  7205                 jb 0x512fb3
// 00512fae  8b4004               mov eax, dword ptr [eax + 4]
// 00512fb1  eb03                 jmp 0x512fb6
// 00512fb3  83c004               add eax, 4
// 00512fb6  50                   push eax
// 00512fb7  6808888200           push 0x828808
// 00512fbc  56                   push esi
// 00512fbd  e8eefeffff           call 0x512eb0
// 00512fc2  83c40c               add esp, 0xc
// 00512fc5  8b442414             mov eax, dword ptr [esp + 0x14]
// 00512fc9  83781400             cmp dword ptr [eax + 0x14], 0
// 00512fcd  761c                 jbe 0x512feb
// 00512fcf  397818               cmp dword ptr [eax + 0x18], edi
// 00512fd2  7205                 jb 0x512fd9
// 00512fd4  8b4004               mov eax, dword ptr [eax + 4]
// 00512fd7  eb03                 jmp 0x512fdc
// 00512fd9  83c004               add eax, 4
// 00512fdc  50                   push eax
// 00512fdd  6808888200           push 0x828808
// 00512fe2  56                   push esi
// 00512fe3  e8c8feffff           call 0x512eb0
// 00512fe8  83c40c               add esp, 0xc
// 00512feb  8b442418             mov eax, dword ptr [esp + 0x18]
// 00512fef  83781400             cmp dword ptr [eax + 0x14], 0
// 00512ff3  761c                 jbe 0x513011
// 00512ff5  397818               cmp dword ptr [eax + 0x18], edi
// 00512ff8  7205                 jb 0x512fff
// 00512ffa  8b4004               mov eax, dword ptr [eax + 4]
// 00512ffd  eb03                 jmp 0x513002
// 00512fff  83c004               add eax, 4
// 00513002  50                   push eax
// 00513003  6808888200           push 0x828808
// 00513008  56                   push esi
// 00513009  e8a2feffff           call 0x512eb0
// 0051300e  83c40c               add esp, 0xc
// 00513011  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00513015  83781400             cmp dword ptr [eax + 0x14], 0
// 00513019  761c                 jbe 0x513037
// 0051301b  397818               cmp dword ptr [eax + 0x18], edi
// 0051301e  7205                 jb 0x513025
// 00513020  8b4004               mov eax, dword ptr [eax + 4]
// 00513023  eb03                 jmp 0x513028
// 00513025  83c004               add eax, 4
// 00513028  50                   push eax
// 00513029  6808888200           push 0x828808
// 0051302e  56                   push esi
// 0051302f  e87cfeffff           call 0x512eb0
// 00513034  83c40c               add esp, 0xc
// 00513037  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051303b  83781400             cmp dword ptr [eax + 0x14], 0
// 0051303f  762e                 jbe 0x51306f
// 00513041  397818               cmp dword ptr [eax + 0x18], edi
// 00513044  7217                 jb 0x51305d
// 00513046  8b4004               mov eax, dword ptr [eax + 4]
// 00513049  50                   push eax
// 0051304a  6808888200           push 0x828808
// 0051304f  56                   push esi
// 00513050  e85bfeffff           call 0x512eb0
// 00513055  83c40c               add esp, 0xc
// 00513058  5f                   pop edi
// 00513059  5e                   pop esi
// 0051305a  c21800               ret 0x18
// 0051305d  83c004               add eax, 4
// 00513060  50                   push eax
// 00513061  6808888200           push 0x828808
// 00513066  56                   push esi
// 00513067  e844feffff           call 0x512eb0
// 0051306c  83c40c               add esp, 0xc
// 0051306f  5f                   pop edi
// 00513070  5e                   pop esi
// 00513071  c21800               ret 0x18
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeSymbols@TextOutput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
