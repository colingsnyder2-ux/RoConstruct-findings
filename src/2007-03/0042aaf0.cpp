// roc 2007-03 0042aaf0  unit: seg_00420000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042aaf0
//
// 0042aaf0  51                   push ecx
// 0042aaf1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0042aaf5  56                   push esi
// 0042aaf6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042aafa  57                   push edi
// 0042aafb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042aaff  c644240800           mov byte ptr [esp + 8], 0
// 0042ab04  8b442408             mov eax, dword ptr [esp + 8]
// 0042ab08  50                   push eax
// 0042ab09  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0042ab0d  52                   push edx
// 0042ab0e  51                   push ecx
// 0042ab0f  50                   push eax
// 0042ab10  56                   push esi
// 0042ab11  57                   push edi
// 0042ab12  e859fcffff           call 0x42a770
// 0042ab17  83c418               add esp, 0x18
// 0042ab1a  8d0cf500000000       lea ecx, [esi*8]
// 0042ab21  2bce                 sub ecx, esi
// 0042ab23  8d048f               lea eax, [edi + ecx*4]
// 0042ab26  5f                   pop edi
// 0042ab27  5e                   pop esi
// 0042ab28  59                   pop ecx
// 0042ab29  c20c00               ret 0xc
// library rbxgs/v8datamodel\Camera.cpp (function ?_Ufill@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PAV32@IABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
