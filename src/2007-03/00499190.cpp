// roc 2007-03 00499190  unit: seg_00490000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00499190
//
// 00499190  8b5104               mov edx, dword ptr [ecx + 4]
// 00499193  8b4204               mov eax, dword ptr [edx + 4]
// 00499196  83ec10               sub esp, 0x10
// 00499199  80782100             cmp byte ptr [eax + 0x21], 0
// 0049919d  56                   push esi
// 0049919e  57                   push edi
// 0049919f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004991a3  7516                 jne 0x4991bb
// 004991a5  8b37                 mov esi, dword ptr [edi]
// 004991a7  39700c               cmp dword ptr [eax + 0xc], esi
// 004991aa  7d05                 jge 0x4991b1
// 004991ac  8b4008               mov eax, dword ptr [eax + 8]
// 004991af  eb04                 jmp 0x4991b5
// 004991b1  8bd0                 mov edx, eax
// 004991b3  8b00                 mov eax, dword ptr [eax]
// 004991b5  80782100             cmp byte ptr [eax + 0x21], 0
// 004991b9  74ec                 je 0x4991a7
// 004991bb  8b4104               mov eax, dword ptr [ecx + 4]
// 004991be  3bd0                 cmp edx, eax
// 004991c0  8954240c             mov dword ptr [esp + 0xc], edx
// 004991c4  894c2408             mov dword ptr [esp + 8], ecx
// 004991c8  740d                 je 0x4991d7
// 004991ca  8b37                 mov esi, dword ptr [edi]
// 004991cc  3b720c               cmp esi, dword ptr [edx + 0xc]
// 004991cf  7c06                 jl 0x4991d7
// 004991d1  8d4c2408             lea ecx, [esp + 8]
// 004991d5  eb0c                 jmp 0x4991e3
// 004991d7  894c2410             mov dword ptr [esp + 0x10], ecx
// 004991db  89442414             mov dword ptr [esp + 0x14], eax
// 004991df  8d4c2410             lea ecx, [esp + 0x10]
// 004991e3  8b11                 mov edx, dword ptr [ecx]
// 004991e5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004991e9  8b4904               mov ecx, dword ptr [ecx + 4]
// 004991ec  5f                   pop edi
// 004991ed  8910                 mov dword ptr [eax], edx
// 004991ef  894804               mov dword ptr [eax + 4], ecx
// 004991f2  5e                   pop esi
// 004991f3  83c410               add esp, 0x10
// 004991f6  c20800               ret 8
// library rbxgs/v8datamodel\BrickColor.cpp (function ?find@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@QAE?AViterator@12@ABW4Number@BrickColor@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
