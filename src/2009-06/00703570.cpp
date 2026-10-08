// roc 2009-06 00703570  unit: RBX::AdornG3D  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00703570
//
// 00703570  6aff                 push -1
// 00703572  6808dd8500           push 0x85dd08
// 00703577  64a100000000         mov eax, dword ptr fs:[0]
// 0070357d  50                   push eax
// 0070357e  64892500000000       mov dword ptr fs:[0], esp
// 00703585  51                   push ecx
// 00703586  8d0424               lea eax, [esp]
// 00703589  56                   push esi
// 0070358a  50                   push eax
// 0070358b  e8501a0000           call 0x704fe0
// 00703590  83c404               add esp, 4
// 00703593  dd442420             fld qword ptr [esp + 0x20]
// 00703597  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0070359b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0070359f  8b742418             mov esi, dword ptr [esp + 0x18]
// 007035a3  51                   push ecx
// 007035a4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007035a8  83ec08               sub esp, 8
// 007035ab  dd1c24               fstp qword ptr [esp]
// 007035ae  52                   push edx
// 007035af  56                   push esi
// 007035b0  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007035b8  e8533e1400           call 0x847410
// 007035bd  8b442404             mov eax, dword ptr [esp + 4]
// 007035c1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007035c9  85c0                 test eax, eax
// 007035cb  7427                 je 0x7035f4
// 007035cd  83c004               add eax, 4
// 007035d0  50                   push eax
// 007035d1  ff15a4e18900         call dword ptr [0x89e1a4]
// 007035d7  85c0                 test eax, eax
// 007035d9  7519                 jne 0x7035f4
// 007035db  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007035df  e89c17d4ff           call 0x444d80
// 007035e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007035e8  85c9                 test ecx, ecx
// 007035ea  7408                 je 0x7035f4
// 007035ec  8b01                 mov eax, dword ptr [ecx]
// 007035ee  8b10                 mov edx, dword ptr [eax]
// 007035f0  6a01                 push 1
// 007035f2  ffd2                 call edx
// 007035f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007035f8  8bc6                 mov eax, esi
// 007035fa  5e                   pop esi
// 007035fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00703602  83c410               add esp, 0x10
// 00703605  c21400               ret 0x14
// library rbxgs-appdraw/AdornG3D.cpp (function ?get2DStringBounds@AdornG3D@RBX@@UBE?AVVector2@G3D@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NW4Spacing@Adorn@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
