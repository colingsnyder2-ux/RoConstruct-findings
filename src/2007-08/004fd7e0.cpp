// roc 2007-08 004fd7e0  unit: RBX::Render::AggregateChunk  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fd7e0
//
// 004fd7e0  83ec50               sub esp, 0x50
// 004fd7e3  53                   push ebx
// 004fd7e4  55                   push ebp
// 004fd7e5  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 004fd7e9  56                   push esi
// 004fd7ea  8b742464             mov esi, dword ptr [esp + 0x64]
// 004fd7ee  57                   push edi
// 004fd7ef  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 004fd7f3  57                   push edi
// 004fd7f4  56                   push esi
// 004fd7f5  ffd5                 call ebp
// 004fd7f7  83c408               add esp, 8
// 004fd7fa  84c0                 test al, al
// 004fd7fc  741e                 je 0x4fd81c
// 004fd7fe  56                   push esi
// 004fd7ff  8d4c2414             lea ecx, [esp + 0x14]
// 004fd803  e86871f7ff           call 0x474970
// 004fd808  57                   push edi
// 004fd809  8bce                 mov ecx, esi
// 004fd80b  e8c05cf7ff           call 0x4734d0
// 004fd810  8d442410             lea eax, [esp + 0x10]
// 004fd814  50                   push eax
// 004fd815  8bcf                 mov ecx, edi
// 004fd817  e8b45cf7ff           call 0x4734d0
// 004fd81c  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 004fd820  56                   push esi
// 004fd821  53                   push ebx
// 004fd822  ffd5                 call ebp
// 004fd824  83c408               add esp, 8
// 004fd827  84c0                 test al, al
// 004fd829  741e                 je 0x4fd849
// 004fd82b  53                   push ebx
// 004fd82c  8d4c2414             lea ecx, [esp + 0x14]
// 004fd830  e83b71f7ff           call 0x474970
// 004fd835  56                   push esi
// 004fd836  8bcb                 mov ecx, ebx
// 004fd838  e8935cf7ff           call 0x4734d0
// 004fd83d  8d4c2410             lea ecx, [esp + 0x10]
// 004fd841  51                   push ecx
// 004fd842  8bce                 mov ecx, esi
// 004fd844  e8875cf7ff           call 0x4734d0
// 004fd849  57                   push edi
// 004fd84a  56                   push esi
// 004fd84b  ffd5                 call ebp
// 004fd84d  83c408               add esp, 8
// 004fd850  84c0                 test al, al
// 004fd852  741e                 je 0x4fd872
// 004fd854  56                   push esi
// 004fd855  8d4c2414             lea ecx, [esp + 0x14]
// 004fd859  e81271f7ff           call 0x474970
// 004fd85e  57                   push edi
// 004fd85f  8bce                 mov ecx, esi
// 004fd861  e86a5cf7ff           call 0x4734d0
// 004fd866  8d542410             lea edx, [esp + 0x10]
// 004fd86a  52                   push edx
// 004fd86b  8bcf                 mov ecx, edi
// 004fd86d  e85e5cf7ff           call 0x4734d0
// 004fd872  5f                   pop edi
// 004fd873  5e                   pop esi
// 004fd874  5d                   pop ebp
// 004fd875  5b                   pop ebx
// 004fd876  83c450               add esp, 0x50
// 004fd879  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Med3@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
