// roc 2007-08 0053f020  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053f020
//
// 0053f020  51                   push ecx
// 0053f021  56                   push esi
// 0053f022  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053f026  56                   push esi
// 0053f027  81c1c0000000         add ecx, 0xc0
// 0053f02d  c744240800000000     mov dword ptr [esp + 8], 0
// 0053f035  e8b688edff           call 0x4178f0
// 0053f03a  8bc6                 mov eax, esi
// 0053f03c  5e                   pop esi
// 0053f03d  59                   pop ecx
// 0053f03e  c20400               ret 4
// library rbxgs/v8tree\Instance.cpp (function ?getChildren2@Instance@RBX@@QAE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
