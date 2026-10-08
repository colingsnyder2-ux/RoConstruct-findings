// roc 2007-03 00604980  unit: seg_00600000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00604980
//
// 00604980  6aff                 push -1
// 00604982  68a3ca7500           push 0x75caa3
// 00604987  64a100000000         mov eax, dword ptr fs:[0]
// 0060498d  50                   push eax
// 0060498e  64892500000000       mov dword ptr fs:[0], esp
// 00604995  51                   push ecx
// 00604996  56                   push esi
// 00604997  8bf1                 mov esi, ecx
// 00604999  57                   push edi
// 0060499a  89742408             mov dword ptr [esp + 8], esi
// 0060499e  c706f40e7c00         mov dword ptr [esi], 0x7c0ef4
// 006049a4  c74604dc0e7c00       mov dword ptr [esi + 4], 0x7c0edc
// 006049ab  8b7e24               mov edi, dword ptr [esi + 0x24]
// 006049ae  85ff                 test edi, edi
// 006049b0  c744241401000000     mov dword ptr [esp + 0x14], 1
// 006049b8  7410                 je 0x6049ca
// 006049ba  8bcf                 mov ecx, edi
// 006049bc  e88f4ffdff           call 0x5d9950
// 006049c1  57                   push edi
// 006049c2  e829970100           call 0x61e0f0
// 006049c7  83c404               add esp, 4
// 006049ca  8b7e20               mov edi, dword ptr [esi + 0x20]
// 006049cd  85ff                 test edi, edi
// 006049cf  c644241400           mov byte ptr [esp + 0x14], 0
// 006049d4  7410                 je 0x6049e6
// 006049d6  8bcf                 mov ecx, edi
// 006049d8  e8131a0100           call 0x6163f0
// 006049dd  57                   push edi
// 006049de  e80d970100           call 0x61e0f0
// 006049e3  83c404               add esp, 4
// 006049e6  8bce                 mov ecx, esi
// 006049e8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006049f0  e8fb3ffdff           call 0x5d89f0
// 006049f5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006049f9  5f                   pop edi
// 006049fa  5e                   pop esi
// 006049fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00604a02  83c410               add esp, 0x10
// 00604a05  c3                   ret 
// library rbxgs/tool\PartDragTool.cpp (function ??1PartDragTool@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/PartDragTool.cpp
