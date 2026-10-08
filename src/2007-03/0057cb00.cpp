// roc 2007-03 0057cb00  unit: seg_00570000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057cb00
//
// 0057cb00  56                   push esi
// 0057cb01  57                   push edi
// 0057cb02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057cb06  57                   push edi
// 0057cb07  e8e45ceeff           call 0x4627f0
// 0057cb0c  8bf0                 mov esi, eax
// 0057cb0e  83c404               add esp, 4
// 0057cb11  85f6                 test esi, esi
// 0057cb13  7419                 je 0x57cb2e
// 0057cb15  3bfe                 cmp edi, esi
// 0057cb17  740c                 je 0x57cb25
// 0057cb19  56                   push esi
// 0057cb1a  8bcf                 mov ecx, edi
// 0057cb1c  e86f51eaff           call 0x421c90
// 0057cb21  84c0                 test al, al
// 0057cb23  7409                 je 0x57cb2e
// 0057cb25  8b8684020000         mov eax, dword ptr [esi + 0x284]
// 0057cb2b  5f                   pop edi
// 0057cb2c  5e                   pop esi
// 0057cb2d  c3                   ret 
// 0057cb2e  5f                   pop edi
// 0057cb2f  33c0                 xor eax, eax
// 0057cb31  5e                   pop esi
// 0057cb32  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?getWorldIfInWorkspace@Workspace@RBX@@SAPAVWorld@2@PBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
