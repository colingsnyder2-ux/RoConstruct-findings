// roc 2007-03 005531a0  unit: seg_00550000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005531a0
//
// 005531a0  56                   push esi
// 005531a1  57                   push edi
// 005531a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005531a6  8b07                 mov eax, dword ptr [edi]
// 005531a8  8bf1                 mov esi, ecx
// 005531aa  3b86f4000000         cmp eax, dword ptr [esi + 0xf4]
// 005531b0  7505                 jne 0x5531b7
// 005531b2  e879ffffff           call 0x553130
// 005531b7  57                   push edi
// 005531b8  8bce                 mov ecx, esi
// 005531ba  e861eefeff           call 0x542020
// 005531bf  5f                   pop edi
// 005531c0  5e                   pop esi
// 005531c1  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?onDescendentRemoving@GuiItem@RBX@@EAEXABV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
