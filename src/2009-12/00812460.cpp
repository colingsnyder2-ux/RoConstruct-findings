// roc 2009-12 00812460  unit: CXTPToolBar  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00812460
//
// 00812460  83ec18               sub esp, 0x18
// 00812463  56                   push esi
// 00812464  8bf1                 mov esi, ecx
// 00812466  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 0081246d  751b                 jne 0x81248a
// 0081246f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00812473  b903000000           mov ecx, 3
// 00812478  8908                 mov dword ptr [eax], ecx
// 0081247a  894804               mov dword ptr [eax + 4], ecx
// 0081247d  894808               mov dword ptr [eax + 8], ecx
// 00812480  89480c               mov dword ptr [eax + 0xc], ecx
// 00812483  5e                   pop esi
// 00812484  83c418               add esp, 0x18
// 00812487  c20400               ret 4
// 0081248a  e80121ffff           call 0x804590
// 0081248f  8b10                 mov edx, dword ptr [eax]
// 00812491  8b92b4000000         mov edx, dword ptr [edx + 0xb4]
// 00812497  56                   push esi
// 00812498  8d4c2410             lea ecx, [esp + 0x10]
// 0081249c  51                   push ecx
// 0081249d  8bc8                 mov ecx, eax
// 0081249f  ffd2                 call edx
// 008124a1  8bce                 mov ecx, esi
// 008124a3  e8081fffff           call 0x8043b0
// 008124a8  85c0                 test eax, eax
// 008124aa  742a                 je 0x8124d6
// 008124ac  8bce                 mov ecx, esi
// 008124ae  e8dd20ffff           call 0x804590
// 008124b3  8b10                 mov edx, dword ptr [eax]
// 008124b5  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 008124bb  6a00                 push 0
// 008124bd  56                   push esi
// 008124be  6a00                 push 0
// 008124c0  8d4c2410             lea ecx, [esp + 0x10]
// 008124c4  51                   push ecx
// 008124c5  8bc8                 mov ecx, eax
// 008124c7  ffd2                 call edx
// 008124c9  8b08                 mov ecx, dword ptr [eax]
// 008124cb  8b4004               mov eax, dword ptr [eax + 4]
// 008124ce  014c240c             add dword ptr [esp + 0xc], ecx
// 008124d2  01442410             add dword ptr [esp + 0x10], eax
// 008124d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 008124da  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008124de  8b542410             mov edx, dword ptr [esp + 0x10]
// 008124e2  8908                 mov dword ptr [eax], ecx
// 008124e4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008124e8  895004               mov dword ptr [eax + 4], edx
// 008124eb  8b542418             mov edx, dword ptr [esp + 0x18]
// 008124ef  894808               mov dword ptr [eax + 8], ecx
// 008124f2  89500c               mov dword ptr [eax + 0xc], edx
// 008124f5  5e                   pop esi
// 008124f6  83c418               add esp, 0x18
// 008124f9  c20400               ret 4
// copied from an identical function in another client (function ?GetBorders@CXTPToolBar@@MAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp