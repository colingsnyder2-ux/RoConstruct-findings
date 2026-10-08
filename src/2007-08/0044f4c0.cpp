// roc 2007-08 0044f4c0  unit: VCRobloxDoc::?$VerbBinder  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044f4c0
//
// 0044f4c0  8b5104               mov edx, dword ptr [ecx + 4]
// 0044f4c3  8b4204               mov eax, dword ptr [edx + 4]
// 0044f4c6  83ec10               sub esp, 0x10
// 0044f4c9  80781500             cmp byte ptr [eax + 0x15], 0
// 0044f4cd  56                   push esi
// 0044f4ce  57                   push edi
// 0044f4cf  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0044f4d3  7516                 jne 0x44f4eb
// 0044f4d5  8b37                 mov esi, dword ptr [edi]
// 0044f4d7  39700c               cmp dword ptr [eax + 0xc], esi
// 0044f4da  7305                 jae 0x44f4e1
// 0044f4dc  8b4008               mov eax, dword ptr [eax + 8]
// 0044f4df  eb04                 jmp 0x44f4e5
// 0044f4e1  8bd0                 mov edx, eax
// 0044f4e3  8b00                 mov eax, dword ptr [eax]
// 0044f4e5  80781500             cmp byte ptr [eax + 0x15], 0
// 0044f4e9  74ec                 je 0x44f4d7
// 0044f4eb  8b4104               mov eax, dword ptr [ecx + 4]
// 0044f4ee  3bd0                 cmp edx, eax
// 0044f4f0  8954240c             mov dword ptr [esp + 0xc], edx
// 0044f4f4  894c2408             mov dword ptr [esp + 8], ecx
// 0044f4f8  740d                 je 0x44f507
// 0044f4fa  8b37                 mov esi, dword ptr [edi]
// 0044f4fc  3b720c               cmp esi, dword ptr [edx + 0xc]
// 0044f4ff  7206                 jb 0x44f507
// 0044f501  8d4c2408             lea ecx, [esp + 8]
// 0044f505  eb0c                 jmp 0x44f513
// 0044f507  894c2410             mov dword ptr [esp + 0x10], ecx
// 0044f50b  89442414             mov dword ptr [esp + 0x14], eax
// 0044f50f  8d4c2410             lea ecx, [esp + 0x10]
// 0044f513  8b11                 mov edx, dword ptr [ecx]
// 0044f515  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044f519  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044f51c  5f                   pop edi
// 0044f51d  8910                 mov dword ptr [eax], edx
// 0044f51f  894804               mov dword ptr [eax + 4], ecx
// 0044f522  5e                   pop esi
// 0044f523  83c410               add esp, 0x10
// 0044f526  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ?find@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@std@@QAE?AViterator@12@ABQBVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
