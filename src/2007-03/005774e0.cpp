// roc 2007-03 005774e0  unit: seg_00570000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005774e0
//
// 005774e0  8b5104               mov edx, dword ptr [ecx + 4]
// 005774e3  8b4204               mov eax, dword ptr [edx + 4]
// 005774e6  83ec10               sub esp, 0x10
// 005774e9  80781500             cmp byte ptr [eax + 0x15], 0
// 005774ed  56                   push esi
// 005774ee  57                   push edi
// 005774ef  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005774f3  7516                 jne 0x57750b
// 005774f5  8b37                 mov esi, dword ptr [edi]
// 005774f7  39700c               cmp dword ptr [eax + 0xc], esi
// 005774fa  7305                 jae 0x577501
// 005774fc  8b4008               mov eax, dword ptr [eax + 8]
// 005774ff  eb04                 jmp 0x577505
// 00577501  8bd0                 mov edx, eax
// 00577503  8b00                 mov eax, dword ptr [eax]
// 00577505  80781500             cmp byte ptr [eax + 0x15], 0
// 00577509  74ec                 je 0x5774f7
// 0057750b  8b4104               mov eax, dword ptr [ecx + 4]
// 0057750e  3bd0                 cmp edx, eax
// 00577510  8954240c             mov dword ptr [esp + 0xc], edx
// 00577514  894c2408             mov dword ptr [esp + 8], ecx
// 00577518  740d                 je 0x577527
// 0057751a  8b37                 mov esi, dword ptr [edi]
// 0057751c  3b720c               cmp esi, dword ptr [edx + 0xc]
// 0057751f  7206                 jb 0x577527
// 00577521  8d4c2408             lea ecx, [esp + 8]
// 00577525  eb0c                 jmp 0x577533
// 00577527  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057752b  89442414             mov dword ptr [esp + 0x14], eax
// 0057752f  8d4c2410             lea ecx, [esp + 0x10]
// 00577533  8b11                 mov edx, dword ptr [ecx]
// 00577535  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00577539  8b4904               mov ecx, dword ptr [ecx + 4]
// 0057753c  5f                   pop edi
// 0057753d  8910                 mov dword ptr [eax], edx
// 0057753f  894804               mov dword ptr [eax + 4], ecx
// 00577542  5e                   pop esi
// 00577543  83c410               add esp, 0x10
// 00577546  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ?find@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@std@@QAE?AViterator@12@ABQBVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
