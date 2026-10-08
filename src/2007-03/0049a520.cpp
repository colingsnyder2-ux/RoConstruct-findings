// roc 2007-03 0049a520  unit: seg_00490000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049a520
//
// 0049a520  8b5104               mov edx, dword ptr [ecx + 4]
// 0049a523  8b4204               mov eax, dword ptr [edx + 4]
// 0049a526  83ec10               sub esp, 0x10
// 0049a529  80781500             cmp byte ptr [eax + 0x15], 0
// 0049a52d  56                   push esi
// 0049a52e  57                   push edi
// 0049a52f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0049a533  7516                 jne 0x49a54b
// 0049a535  8b37                 mov esi, dword ptr [edi]
// 0049a537  39700c               cmp dword ptr [eax + 0xc], esi
// 0049a53a  7d05                 jge 0x49a541
// 0049a53c  8b4008               mov eax, dword ptr [eax + 8]
// 0049a53f  eb04                 jmp 0x49a545
// 0049a541  8bd0                 mov edx, eax
// 0049a543  8b00                 mov eax, dword ptr [eax]
// 0049a545  80781500             cmp byte ptr [eax + 0x15], 0
// 0049a549  74ec                 je 0x49a537
// 0049a54b  8b4104               mov eax, dword ptr [ecx + 4]
// 0049a54e  3bd0                 cmp edx, eax
// 0049a550  8954240c             mov dword ptr [esp + 0xc], edx
// 0049a554  894c2408             mov dword ptr [esp + 8], ecx
// 0049a558  740d                 je 0x49a567
// 0049a55a  8b37                 mov esi, dword ptr [edi]
// 0049a55c  3b720c               cmp esi, dword ptr [edx + 0xc]
// 0049a55f  7c06                 jl 0x49a567
// 0049a561  8d4c2408             lea ecx, [esp + 8]
// 0049a565  eb0c                 jmp 0x49a573
// 0049a567  894c2410             mov dword ptr [esp + 0x10], ecx
// 0049a56b  89442414             mov dword ptr [esp + 0x14], eax
// 0049a56f  8d4c2410             lea ecx, [esp + 0x10]
// 0049a573  8b11                 mov edx, dword ptr [ecx]
// 0049a575  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049a579  8b4904               mov ecx, dword ptr [ecx + 4]
// 0049a57c  5f                   pop edi
// 0049a57d  8910                 mov dword ptr [eax], edx
// 0049a57f  894804               mov dword ptr [eax + 4], ecx
// 0049a582  5e                   pop esi
// 0049a583  83c410               add esp, 0x10
// 0049a586  c20800               ret 8
// library rbxgs/v8datamodel\BrickColor.cpp (function ?find@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4uint8@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4uint8@G3D@@@std@@@7@$0A@@std@@@std@@QAE?AViterator@12@ABW4Number@BrickColor@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
