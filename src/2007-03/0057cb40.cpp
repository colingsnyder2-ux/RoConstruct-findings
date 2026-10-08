// roc 2007-03 0057cb40  unit: seg_00570000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057cb40
//
// 0057cb40  56                   push esi
// 0057cb41  57                   push edi
// 0057cb42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057cb46  57                   push edi
// 0057cb47  e8a45ceeff           call 0x4627f0
// 0057cb4c  8bf0                 mov esi, eax
// 0057cb4e  83c404               add esp, 4
// 0057cb51  85f6                 test esi, esi
// 0057cb53  7410                 je 0x57cb65
// 0057cb55  3bfe                 cmp edi, esi
// 0057cb57  740e                 je 0x57cb67
// 0057cb59  56                   push esi
// 0057cb5a  8bcf                 mov ecx, edi
// 0057cb5c  e82f51eaff           call 0x421c90
// 0057cb61  84c0                 test al, al
// 0057cb63  7502                 jne 0x57cb67
// 0057cb65  33f6                 xor esi, esi
// 0057cb67  33c0                 xor eax, eax
// 0057cb69  85f6                 test esi, esi
// 0057cb6b  5f                   pop edi
// 0057cb6c  0f95c0               setne al
// 0057cb6f  5e                   pop esi
// 0057cb70  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?contextInWorkspace@Workspace@RBX@@SA_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
