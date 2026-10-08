// roc 2007-03 00580c90  unit: seg_00580000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00580c90
//
// 00580c90  8b5104               mov edx, dword ptr [ecx + 4]
// 00580c93  8b4204               mov eax, dword ptr [edx + 4]
// 00580c96  83ec10               sub esp, 0x10
// 00580c99  80782d00             cmp byte ptr [eax + 0x2d], 0
// 00580c9d  56                   push esi
// 00580c9e  57                   push edi
// 00580c9f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00580ca3  7516                 jne 0x580cbb
// 00580ca5  8b37                 mov esi, dword ptr [edi]
// 00580ca7  39700c               cmp dword ptr [eax + 0xc], esi
// 00580caa  7d05                 jge 0x580cb1
// 00580cac  8b4008               mov eax, dword ptr [eax + 8]
// 00580caf  eb04                 jmp 0x580cb5
// 00580cb1  8bd0                 mov edx, eax
// 00580cb3  8b00                 mov eax, dword ptr [eax]
// 00580cb5  80782d00             cmp byte ptr [eax + 0x2d], 0
// 00580cb9  74ec                 je 0x580ca7
// 00580cbb  8b4104               mov eax, dword ptr [ecx + 4]
// 00580cbe  3bd0                 cmp edx, eax
// 00580cc0  8954240c             mov dword ptr [esp + 0xc], edx
// 00580cc4  894c2408             mov dword ptr [esp + 8], ecx
// 00580cc8  740d                 je 0x580cd7
// 00580cca  8b37                 mov esi, dword ptr [edi]
// 00580ccc  3b720c               cmp esi, dword ptr [edx + 0xc]
// 00580ccf  7c06                 jl 0x580cd7
// 00580cd1  8d4c2408             lea ecx, [esp + 8]
// 00580cd5  eb0c                 jmp 0x580ce3
// 00580cd7  894c2410             mov dword ptr [esp + 0x10], ecx
// 00580cdb  89442414             mov dword ptr [esp + 0x14], eax
// 00580cdf  8d4c2410             lea ecx, [esp + 0x10]
// 00580ce3  8b11                 mov edx, dword ptr [ecx]
// 00580ce5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00580ce9  8b4904               mov ecx, dword ptr [ecx + 4]
// 00580cec  5f                   pop edi
// 00580ced  8910                 mov dword ptr [eax], edx
// 00580cef  894804               mov dword ptr [eax + 4], ecx
// 00580cf2  5e                   pop esi
// 00580cf3  83c410               add esp, 0x10
// 00580cf6  c20800               ret 8
// library rbxgs/v8datamodel\BrickColor.cpp (function ?find@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@W4Number@BrickColor@RBX@@@5@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@5@$0A@@std@@@std@@QAE?AViterator@12@ABW4Number@BrickColor@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
