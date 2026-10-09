// roc 2008-06 00411840  unit: ChatEnter  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411840
//
// 00411840  51                   push ecx
// 00411841  56                   push esi
// 00411842  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00411846  81c110010000         add ecx, 0x110
// 0041184c  51                   push ecx
// 0041184d  8bce                 mov ecx, esi
// 0041184f  c744240800000000     mov dword ptr [esp + 8], 0
// 00411857  ff155c248000         call dword ptr [0x80245c]
// 0041185d  8bc6                 mov eax, esi
// 0041185f  5e                   pop esi
// 00411860  59                   pop ecx
// 00411861  c20400               ret 4
// library openrbx-client/App\gui\GUI.cpp (function ?getTitle@GuiItem@RBX@@MAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
