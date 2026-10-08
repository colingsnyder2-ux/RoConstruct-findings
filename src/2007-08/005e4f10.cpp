// roc 2007-08 005e4f10  unit: RBX::VInstance::?$FilteredSelection  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e4f10
//
// 005e4f10  6aff                 push -1
// 005e4f12  68e3ac7500           push 0x75ace3
// 005e4f17  64a100000000         mov eax, dword ptr fs:[0]
// 005e4f1d  50                   push eax
// 005e4f1e  64892500000000       mov dword ptr fs:[0], esp
// 005e4f25  51                   push ecx
// 005e4f26  55                   push ebp
// 005e4f27  56                   push esi
// 005e4f28  57                   push edi
// 005e4f29  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005e4f2d  8bf1                 mov esi, ecx
// 005e4f2f  57                   push edi
// 005e4f30  89742410             mov dword ptr [esp + 0x10], esi
// 005e4f34  e8d7edffff           call 0x5e3d10
// 005e4f39  33ed                 xor ebp, ebp
// 005e4f3b  c706c4d17b00         mov dword ptr [esi], 0x7bd1c4
// 005e4f41  c74604acd17b00       mov dword ptr [esi + 4], 0x7bd1ac
// 005e4f48  897e20               mov dword ptr [esi + 0x20], edi
// 005e4f4b  896e24               mov dword ptr [esi + 0x24], ebp
// 005e4f4e  896c2418             mov dword ptr [esp + 0x18], ebp
// 005e4f52  896e28               mov dword ptr [esi + 0x28], ebp
// 005e4f55  66896e2e             mov word ptr [esi + 0x2e], bp
// 005e4f59  66896e30             mov word ptr [esi + 0x30], bp
// 005e4f5d  8d7e38               lea edi, [esi + 0x38]
// 005e4f60  8bcf                 mov ecx, edi
// 005e4f62  c644241801           mov byte ptr [esp + 0x18], 1
// 005e4f67  66896e32             mov word ptr [esi + 0x32], bp
// 005e4f6b  66896e34             mov word ptr [esi + 0x34], bp
// 005e4f6f  e83c44fcff           call 0x5a93b0
// 005e4f74  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e4f78  894704               mov dword ptr [edi + 4], eax
// 005e4f7b  c6401101             mov byte ptr [eax + 0x11], 1
// 005e4f7f  8b4704               mov eax, dword ptr [edi + 4]
// 005e4f82  894004               mov dword ptr [eax + 4], eax
// 005e4f85  8b4704               mov eax, dword ptr [edi + 4]
// 005e4f88  8900                 mov dword ptr [eax], eax
// 005e4f8a  8b4704               mov eax, dword ptr [edi + 4]
// 005e4f8d  894008               mov dword ptr [eax + 8], eax
// 005e4f90  896f08               mov dword ptr [edi + 8], ebp
// 005e4f93  5f                   pop edi
// 005e4f94  8bc6                 mov eax, esi
// 005e4f96  5e                   pop esi
// 005e4f97  5d                   pop ebp
// 005e4f98  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4f9f  83c410               add esp, 0x10
// 005e4fa2  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ??0BoxSelectCommand@RBX@@QAE@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
