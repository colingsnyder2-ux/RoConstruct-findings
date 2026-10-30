// roc 2009-12 00894db0  unit: CXTPRibbonBar  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894db0
//
// 00894db0  56                   push esi
// 00894db1  8bf1                 mov esi, ecx
// 00894db3  8b06                 mov eax, dword ptr [esi]
// 00894db5  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00894dbb  57                   push edi
// 00894dbc  ffd2                 call edx
// 00894dbe  8bf8                 mov edi, eax
// 00894dc0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00894dc4  50                   push eax
// 00894dc5  8bce                 mov ecx, esi
// 00894dc7  e8c4e1f7ff           call 0x812f90
// 00894dcc  8bce                 mov ecx, esi
// 00894dce  e8fdfeffff           call 0x894cd0
// 00894dd3  85c0                 test eax, eax
// 00894dd5  7419                 je 0x894df0
// 00894dd7  8b16                 mov edx, dword ptr [esi]
// 00894dd9  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00894ddf  ffd0                 call eax
// 00894de1  3bf8                 cmp edi, eax
// 00894de3  740b                 je 0x894df0
// 00894de5  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 00894deb  e8106c0500           call 0x8eba00
// 00894df0  5f                   pop edi
// 00894df1  5e                   pop esi
// 00894df2  c20400               ret 4
// copied from an identical function in another client (function ?SetVisible@CXTPRibbonBar@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp