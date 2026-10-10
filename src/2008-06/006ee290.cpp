// roc 2008-06 006ee290  unit: CXTPPopupBar  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee290
//
// 006ee290  56                   push esi
// 006ee291  8bf1                 mov esi, ecx
// 006ee293  83bef800000001       cmp dword ptr [esi + 0xf8], 1
// 006ee29a  752b                 jne 0x6ee2c7
// 006ee29c  8b8e00020000         mov ecx, dword ptr [esi + 0x200]
// 006ee2a2  8b442408             mov eax, dword ptr [esp + 8]
// 006ee2a6  8908                 mov dword ptr [eax], ecx
// 006ee2a8  8b9604020000         mov edx, dword ptr [esi + 0x204]
// 006ee2ae  895004               mov dword ptr [eax + 4], edx
// 006ee2b1  8b8e08020000         mov ecx, dword ptr [esi + 0x208]
// 006ee2b7  894808               mov dword ptr [eax + 8], ecx
// 006ee2ba  8b960c020000         mov edx, dword ptr [esi + 0x20c]
// 006ee2c0  89500c               mov dword ptr [eax + 0xc], edx
// 006ee2c3  5e                   pop esi
// 006ee2c4  c20400               ret 4
// 006ee2c7  e8046cfcff           call 0x6b4ed0
// 006ee2cc  8b10                 mov edx, dword ptr [eax]
// 006ee2ce  56                   push esi
// 006ee2cf  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ee2d3  8bc8                 mov ecx, eax
// 006ee2d5  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 006ee2db  56                   push esi
// 006ee2dc  ffd0                 call eax
// 006ee2de  8bc6                 mov eax, esi
// 006ee2e0  5e                   pop esi
// 006ee2e1  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?GetBorders@CXTPPopupBar@@MAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
