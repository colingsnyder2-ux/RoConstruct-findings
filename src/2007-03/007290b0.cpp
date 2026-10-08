// roc 2007-03 007290b0  unit: seg_00720000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007290b0
//
// 007290b0  56                   push esi
// 007290b1  8bf1                 mov esi, ecx
// 007290b3  8b06                 mov eax, dword ptr [esi]
// 007290b5  85c0                 test eax, eax
// 007290b7  57                   push edi
// 007290b8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007290bc  7404                 je 0x7290c2
// 007290be  3b07                 cmp eax, dword ptr [edi]
// 007290c0  7406                 je 0x7290c8
// 007290c2  ff1544e97700         call dword ptr [0x77e944]
// 007290c8  8b4604               mov eax, dword ptr [esi + 4]
// 007290cb  33c9                 xor ecx, ecx
// 007290cd  3b4704               cmp eax, dword ptr [edi + 4]
// 007290d0  5f                   pop edi
// 007290d1  0f95c1               setne cl
// 007290d4  8ac1                 mov al, cl
// 007290d6  5e                   pop esi
// 007290d7  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ??9const_iterator@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
