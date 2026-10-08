// roc 2007-08 00625a20  unit: RBX::PartDragTool  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625a20
//
// 00625a20  6aff                 push -1
// 00625a22  68c3d17500           push 0x75d1c3
// 00625a27  64a100000000         mov eax, dword ptr fs:[0]
// 00625a2d  50                   push eax
// 00625a2e  64892500000000       mov dword ptr fs:[0], esp
// 00625a35  51                   push ecx
// 00625a36  56                   push esi
// 00625a37  8bf1                 mov esi, ecx
// 00625a39  57                   push edi
// 00625a3a  89742408             mov dword ptr [esp + 8], esi
// 00625a3e  c706f4497c00         mov dword ptr [esi], 0x7c49f4
// 00625a44  c74604dc497c00       mov dword ptr [esi + 4], 0x7c49dc
// 00625a4b  8b7e24               mov edi, dword ptr [esi + 0x24]
// 00625a4e  85ff                 test edi, edi
// 00625a50  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00625a58  7410                 je 0x625a6a
// 00625a5a  8bcf                 mov ecx, edi
// 00625a5c  e88fb4fbff           call 0x5e0ef0
// 00625a61  57                   push edi
// 00625a62  e8fba10000           call 0x62fc62
// 00625a67  83c404               add esp, 4
// 00625a6a  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00625a6d  85ff                 test edi, edi
// 00625a6f  c644241400           mov byte ptr [esp + 0x14], 0
// 00625a74  7410                 je 0x625a86
// 00625a76  8bcf                 mov ecx, edi
// 00625a78  e8e3570000           call 0x62b260
// 00625a7d  57                   push edi
// 00625a7e  e8dfa10000           call 0x62fc62
// 00625a83  83c404               add esp, 4
// 00625a86  8bce                 mov ecx, esi
// 00625a88  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00625a90  e8bbe2fbff           call 0x5e3d50
// 00625a95  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00625a99  5f                   pop edi
// 00625a9a  5e                   pop esi
// 00625a9b  64890d00000000       mov dword ptr fs:[0], ecx
// 00625aa2  83c410               add esp, 0x10
// 00625aa5  c3                   ret 
// library rbxgs/tool\PartDragTool.cpp (function ??1PartDragTool@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/PartDragTool.cpp
