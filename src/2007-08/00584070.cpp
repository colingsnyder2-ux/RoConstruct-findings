// from server: 100% by auto
// roc 2007-08 00584070  unit: RBX::VHat::?$FactoryProduct  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00584070
//
// 00584070  8b5104               mov edx, dword ptr [ecx + 4]
// 00584073  8b4204               mov eax, dword ptr [edx + 4]
// 00584076  83ec10               sub esp, 0x10
// 00584079  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0058407d  56                   push esi
// 0058407e  57                   push edi
// 0058407f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00584083  7516                 jne 0x58409b
// 00584085  8b37                 mov esi, dword ptr [edi]
// 00584087  39700c               cmp dword ptr [eax + 0xc], esi
// 0058408a  7d05                 jge 0x584091
// 0058408c  8b4008               mov eax, dword ptr [eax + 8]
// 0058408f  eb04                 jmp 0x584095
// 00584091  8bd0                 mov edx, eax
// 00584093  8b00                 mov eax, dword ptr [eax]
// 00584095  80782d00             cmp byte ptr [eax + 0x2d], 0
// 00584099  74ec                 je 0x584087
// 0058409b  8b4104               mov eax, dword ptr [ecx + 4]
// 0058409e  3bd0                 cmp edx, eax
// 005840a0  8954240c             mov dword ptr [esp + 0xc], edx
// 005840a4  894c2408             mov dword ptr [esp + 8], ecx
// 005840a8  740d                 je 0x5840b7
// 005840aa  8b37                 mov esi, dword ptr [edi]
// 005840ac  3b720c               cmp esi, dword ptr [edx + 0xc]
// 005840af  7c06                 jl 0x5840b7
// 005840b1  8d4c2408             lea ecx, [esp + 8]
// 005840b5  eb0c                 jmp 0x5840c3
// 005840b7  894c2410             mov dword ptr [esp + 0x10], ecx
// 005840bb  89442414             mov dword ptr [esp + 0x14], eax
// 005840bf  8d4c2410             lea ecx, [esp + 0x10]
// 005840c3  8b11                 mov edx, dword ptr [ecx]
// 005840c5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005840c9  8b4904               mov ecx, dword ptr [ecx + 4]
// 005840cc  5f                   pop edi
// 005840cd  8910                 mov dword ptr [eax], edx
// 005840cf  894804               mov dword ptr [eax + 4], ecx
// 005840d2  5e                   pop esi
// 005840d3  83c410               add esp, 0x10
// 005840d6  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?find@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
