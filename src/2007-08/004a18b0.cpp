// roc 2007-08 004a18b0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a18b0
//
// 004a18b0  8b5104               mov edx, dword ptr [ecx + 4]
// 004a18b3  8b4204               mov eax, dword ptr [edx + 4]
// 004a18b6  83ec10               sub esp, 0x10
// 004a18b9  80782100             cmp byte ptr [eax + 0x21], 0
// 004a18bd  56                   push esi
// 004a18be  57                   push edi
// 004a18bf  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004a18c3  7516                 jne 0x4a18db
// 004a18c5  8b37                 mov esi, dword ptr [edi]
// 004a18c7  39700c               cmp dword ptr [eax + 0xc], esi
// 004a18ca  7d05                 jge 0x4a18d1
// 004a18cc  8b4008               mov eax, dword ptr [eax + 8]
// 004a18cf  eb04                 jmp 0x4a18d5
// 004a18d1  8bd0                 mov edx, eax
// 004a18d3  8b00                 mov eax, dword ptr [eax]
// 004a18d5  80782100             cmp byte ptr [eax + 0x21], 0
// 004a18d9  74ec                 je 0x4a18c7
// 004a18db  8b4104               mov eax, dword ptr [ecx + 4]
// 004a18de  3bd0                 cmp edx, eax
// 004a18e0  8954240c             mov dword ptr [esp + 0xc], edx
// 004a18e4  894c2408             mov dword ptr [esp + 8], ecx
// 004a18e8  740d                 je 0x4a18f7
// 004a18ea  8b37                 mov esi, dword ptr [edi]
// 004a18ec  3b720c               cmp esi, dword ptr [edx + 0xc]
// 004a18ef  7c06                 jl 0x4a18f7
// 004a18f1  8d4c2408             lea ecx, [esp + 8]
// 004a18f5  eb0c                 jmp 0x4a1903
// 004a18f7  894c2410             mov dword ptr [esp + 0x10], ecx
// 004a18fb  89442414             mov dword ptr [esp + 0x14], eax
// 004a18ff  8d4c2410             lea ecx, [esp + 0x10]
// 004a1903  8b11                 mov edx, dword ptr [ecx]
// 004a1905  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a1909  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a190c  5f                   pop edi
// 004a190d  8910                 mov dword ptr [eax], edx
// 004a190f  894804               mov dword ptr [eax + 4], ecx
// 004a1912  5e                   pop esi
// 004a1913  83c410               add esp, 0x10
// 004a1916  c20800               ret 8
// library rbxgs/v8datamodel\BrickColor.cpp (function ?find@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@QAE?AViterator@12@ABW4Number@BrickColor@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
