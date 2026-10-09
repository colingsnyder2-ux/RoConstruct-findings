// roc 2012-06 007cce50  unit: RBX::MegaClusterInstance  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007cce50
//
// 007cce50  51                   push ecx
// 007cce51  56                   push esi
// 007cce52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007cce56  81c1d8000000         add ecx, 0xd8
// 007cce5c  51                   push ecx
// 007cce5d  8bce                 mov ecx, esi
// 007cce5f  c744240800000000     mov dword ptr [esp + 8], 0
// 007cce67  ff154426b200         call dword ptr [0xb22644]
// 007cce6d  8bc6                 mov eax, esi
// 007cce6f  5e                   pop esi
// 007cce70  59                   pop ecx
// 007cce71  c20400               ret 4
// library openrbx-client/App\gui\GUI.cpp (function ?getTitle@GuiItem@RBX@@MAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
