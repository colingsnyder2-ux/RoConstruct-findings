// roc 2008-06 005a33d0  unit: RBX::VFlag::?$FactoryProduct::Creator  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a33d0
//
// 005a33d0  56                   push esi
// 005a33d1  57                   push edi
// 005a33d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a33d6  57                   push edi
// 005a33d7  e874eaeeff           call 0x491e50
// 005a33dc  8bf0                 mov esi, eax
// 005a33de  83c404               add esp, 4
// 005a33e1  85f6                 test esi, esi
// 005a33e3  7410                 je 0x5a33f5
// 005a33e5  3bfe                 cmp edi, esi
// 005a33e7  740e                 je 0x5a33f7
// 005a33e9  56                   push esi
// 005a33ea  8bcf                 mov ecx, edi
// 005a33ec  e8eff6e7ff           call 0x422ae0
// 005a33f1  84c0                 test al, al
// 005a33f3  7502                 jne 0x5a33f7
// 005a33f5  33f6                 xor esi, esi
// 005a33f7  33c0                 xor eax, eax
// 005a33f9  85f6                 test esi, esi
// 005a33fb  5f                   pop edi
// 005a33fc  0f95c0               setne al
// 005a33ff  5e                   pop esi
// 005a3400  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?contextInWorkspace@Workspace@RBX@@SA_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
