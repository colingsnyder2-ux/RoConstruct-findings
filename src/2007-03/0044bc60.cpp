// roc 2007-03 0044bc60  unit: seg_00440000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044bc60
//
// 0044bc60  56                   push esi
// 0044bc61  8bf1                 mov esi, ecx
// 0044bc63  8b06                 mov eax, dword ptr [esi]
// 0044bc65  85c0                 test eax, eax
// 0044bc67  57                   push edi
// 0044bc68  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0044bc6c  7404                 je 0x44bc72
// 0044bc6e  3b07                 cmp eax, dword ptr [edi]
// 0044bc70  7406                 je 0x44bc78
// 0044bc72  ff1544e97700         call dword ptr [0x77e944]
// 0044bc78  8b4604               mov eax, dword ptr [esi + 4]
// 0044bc7b  33c9                 xor ecx, ecx
// 0044bc7d  3b4704               cmp eax, dword ptr [edi + 4]
// 0044bc80  5f                   pop edi
// 0044bc81  0f94c1               sete cl
// 0044bc84  8ac1                 mov al, cl
// 0044bc86  5e                   pop esi
// 0044bc87  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ??8const_iterator@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
