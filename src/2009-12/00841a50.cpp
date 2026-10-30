// roc 2009-12 00841a50  unit: CXTPPopupBar  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841a50
//
// 00841a50  56                   push esi
// 00841a51  8bf1                 mov esi, ecx
// 00841a53  83bef800000001       cmp dword ptr [esi + 0xf8], 1
// 00841a5a  752b                 jne 0x841a87
// 00841a5c  8b8e00020000         mov ecx, dword ptr [esi + 0x200]
// 00841a62  8b442408             mov eax, dword ptr [esp + 8]
// 00841a66  8908                 mov dword ptr [eax], ecx
// 00841a68  8b9604020000         mov edx, dword ptr [esi + 0x204]
// 00841a6e  895004               mov dword ptr [eax + 4], edx
// 00841a71  8b8e08020000         mov ecx, dword ptr [esi + 0x208]
// 00841a77  894808               mov dword ptr [eax + 8], ecx
// 00841a7a  8b960c020000         mov edx, dword ptr [esi + 0x20c]
// 00841a80  89500c               mov dword ptr [eax + 0xc], edx
// 00841a83  5e                   pop esi
// 00841a84  c20400               ret 4
// 00841a87  e8042bfcff           call 0x804590
// 00841a8c  8b10                 mov edx, dword ptr [eax]
// 00841a8e  56                   push esi
// 00841a8f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00841a93  8bc8                 mov ecx, eax
// 00841a95  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00841a9b  56                   push esi
// 00841a9c  ffd0                 call eax
// 00841a9e  8bc6                 mov eax, esi
// 00841aa0  5e                   pop esi
// 00841aa1  c20400               ret 4
// copied from an identical function in another client (function ?GetBorders@CXTPPopupBar@@MAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp