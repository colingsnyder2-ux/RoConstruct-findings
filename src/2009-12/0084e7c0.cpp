// roc 2009-12 0084e7c0  unit: CXTPPropertyGrid  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084e7c0
//
// 0084e7c0  83ec08               sub esp, 8
// 0084e7c3  837c241001           cmp dword ptr [esp + 0x10], 1
// 0084e7c8  56                   push esi
// 0084e7c9  8bf1                 mov esi, ecx
// 0084e7cb  7576                 jne 0x84e843
// 0084e7cd  8d442404             lea eax, [esp + 4]
// 0084e7d1  50                   push eax
// 0084e7d2  ff1538cc9800         call dword ptr [0x98cc38]
// 0084e7d8  8b5620               mov edx, dword ptr [esi + 0x20]
// 0084e7db  8d4c2404             lea ecx, [esp + 4]
// 0084e7df  51                   push ecx
// 0084e7e0  52                   push edx
// 0084e7e1  ff1534cc9800         call dword ptr [0x98cc34]
// 0084e7e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084e7eb  8b06                 mov eax, dword ptr [esi]
// 0084e7ed  8b542404             mov edx, dword ptr [esp + 4]
// 0084e7f1  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 0084e7f7  51                   push ecx
// 0084e7f8  52                   push edx
// 0084e7f9  8bce                 mov ecx, esi
// 0084e7fb  ffd0                 call eax
// 0084e7fd  83f801               cmp eax, 1
// 0084e800  7428                 je 0x84e82a
// 0084e802  83f802               cmp eax, 2
// 0084e805  7423                 je 0x84e82a
// 0084e807  83f8ff               cmp eax, -1
// 0084e80a  7437                 je 0x84e843
// 0084e80c  83f803               cmp eax, 3
// 0084e80f  7c32                 jl 0x84e843
// 0084e811  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 0084e817  51                   push ecx
// 0084e818  ff1520ca9800         call dword ptr [0x98ca20]
// 0084e81e  b801000000           mov eax, 1
// 0084e823  5e                   pop esi
// 0084e824  83c408               add esp, 8
// 0084e827  c20c00               ret 0xc
// 0084e82a  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 0084e830  52                   push edx
// 0084e831  ff1520ca9800         call dword ptr [0x98ca20]
// 0084e837  b801000000           mov eax, 1
// 0084e83c  5e                   pop esi
// 0084e83d  83c408               add esp, 8
// 0084e840  c20c00               ret 0xc
// 0084e843  8bce                 mov ecx, esi
// 0084e845  e8e655faff           call 0x7f3e30
// 0084e84a  5e                   pop esi
// 0084e84b  83c408               add esp, 8
// 0084e84e  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSetCursor@CXTPPropertyGrid@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp