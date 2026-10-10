// roc 2008-06 006c2e60  unit: CXTPToolBar  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c2e60
//
// 006c2e60  83ec18               sub esp, 0x18
// 006c2e63  56                   push esi
// 006c2e64  8bf1                 mov esi, ecx
// 006c2e66  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 006c2e6d  751b                 jne 0x6c2e8a
// 006c2e6f  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c2e73  b903000000           mov ecx, 3
// 006c2e78  8908                 mov dword ptr [eax], ecx
// 006c2e7a  894804               mov dword ptr [eax + 4], ecx
// 006c2e7d  894808               mov dword ptr [eax + 8], ecx
// 006c2e80  89480c               mov dword ptr [eax + 0xc], ecx
// 006c2e83  5e                   pop esi
// 006c2e84  83c418               add esp, 0x18
// 006c2e87  c20400               ret 4
// 006c2e8a  e84120ffff           call 0x6b4ed0
// 006c2e8f  8b10                 mov edx, dword ptr [eax]
// 006c2e91  8b92b4000000         mov edx, dword ptr [edx + 0xb4]
// 006c2e97  56                   push esi
// 006c2e98  8d4c2410             lea ecx, [esp + 0x10]
// 006c2e9c  51                   push ecx
// 006c2e9d  8bc8                 mov ecx, eax
// 006c2e9f  ffd2                 call edx
// 006c2ea1  8bce                 mov ecx, esi
// 006c2ea3  e8481effff           call 0x6b4cf0
// 006c2ea8  85c0                 test eax, eax
// 006c2eaa  742a                 je 0x6c2ed6
// 006c2eac  8bce                 mov ecx, esi
// 006c2eae  e81d20ffff           call 0x6b4ed0
// 006c2eb3  8b10                 mov edx, dword ptr [eax]
// 006c2eb5  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 006c2ebb  6a00                 push 0
// 006c2ebd  56                   push esi
// 006c2ebe  6a00                 push 0
// 006c2ec0  8d4c2410             lea ecx, [esp + 0x10]
// 006c2ec4  51                   push ecx
// 006c2ec5  8bc8                 mov ecx, eax
// 006c2ec7  ffd2                 call edx
// 006c2ec9  8b08                 mov ecx, dword ptr [eax]
// 006c2ecb  8b4004               mov eax, dword ptr [eax + 4]
// 006c2ece  014c240c             add dword ptr [esp + 0xc], ecx
// 006c2ed2  01442410             add dword ptr [esp + 0x10], eax
// 006c2ed6  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c2eda  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c2ede  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c2ee2  8908                 mov dword ptr [eax], ecx
// 006c2ee4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c2ee8  895004               mov dword ptr [eax + 4], edx
// 006c2eeb  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c2eef  894808               mov dword ptr [eax + 8], ecx
// 006c2ef2  89500c               mov dword ptr [eax + 0xc], edx
// 006c2ef5  5e                   pop esi
// 006c2ef6  83c418               add esp, 0x18
// 006c2ef9  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?GetBorders@CXTPToolBar@@MAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
