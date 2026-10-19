// from server: 69% by colin
// from server: 43% by colin
// roc 2008-06 00614670  unit: RBX::RevoluteLink  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614670
//
// 00614670  83ec48               sub esp, 0x48
// 00614673  56                   push esi
// 00614674  8bf1                 mov esi, ecx
// 00614676  e8e54cf8ff           call 0x599360
// 0061467b  8d4668               lea eax, [esi + 0x68]
// 0061467e  50                   push eax
// 0061467f  8d4c242c             lea ecx, [esp + 0x2c]
// 00614683  e898ebefff           call 0x513220
// 00614688  8d8e94000000         lea ecx, [esi + 0x94]
// 0061468e  51                   push ecx
// 0061468f  8d54242c             lea edx, [esp + 0x2c]
// 00614693  52                   push edx
// 00614694  8d44240c             lea eax, [esp + 0xc]
// 00614698  50                   push eax
// 00614699  e8d294fcff           call 0x5ddb70
// 0061469e  d986d4000000         fld dword ptr [esi + 0xd4]
// 006146a4  d84c2414             fmul dword ptr [esp + 0x14]
// 006146a8  83c40c               add esp, 0xc
// 006146ab  d986d0000000         fld dword ptr [esi + 0xd0]
// 006146b1  d84c2404             fmul dword ptr [esp + 4]
// 006146b5  dec1                 faddp st(1)
// 006146b7  d944240c             fld dword ptr [esp + 0xc]
// 006146bb  d88ed8000000         fmul dword ptr [esi + 0xd8]
// 006146c1  dec1                 faddp st(1)
// 006146c3  d986d4000000         fld dword ptr [esi + 0xd4]
// 006146c9  d84c2414             fmul dword ptr [esp + 0x14]
// 006146cd  d986d0000000         fld dword ptr [esi + 0xd0]
// 006146d3  d84c2410             fmul dword ptr [esp + 0x10]
// 006146d7  dec1                 faddp st(1)
// 006146d9  d9442418             fld dword ptr [esp + 0x18]
// 006146dd  d88ed8000000         fmul dword ptr [esi + 0xd8]
// 006146e3  dec1                 faddp st(1)
// 006146e5  d986d4000000         fld dword ptr [esi + 0xd4]
// 006146eb  d84c2420             fmul dword ptr [esp + 0x20]
// 006146ef  d986d0000000         fld dword ptr [esi + 0xd0]
// 006146f5  d84c241c             fmul dword ptr [esp + 0x1c]
// 006146f9  dec1                 faddp st(1)
// 006146fb  d9442424             fld dword ptr [esp + 0x24]
// 006146ff  d88ed8000000         fmul dword ptr [esi + 0xd8]
// 00614705  dec1                 faddp st(1)
// 00614707  d986cc000000         fld dword ptr [esi + 0xcc]

// from server: 62% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/v8kernel/Body.cpp