// roc 2009-12 00814190  unit: CXTPCommandBars  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814190
//
// 00814190  57                   push edi
// 00814191  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00814195  85ff                 test edi, edi
// 00814197  7506                 jne 0x81419f
// 00814199  33c0                 xor eax, eax
// 0081419b  5f                   pop edi
// 0081419c  c20c00               ret 0xc
// 0081419f  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 008141a5  56                   push esi
// 008141a6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008141aa  8b06                 mov eax, dword ptr [esi]
// 008141ac  8b900c020000         mov edx, dword ptr [eax + 0x20c]
// 008141b2  6a00                 push 0
// 008141b4  51                   push ecx
// 008141b5  8bce                 mov ecx, esi
// 008141b7  ffd2                 call edx
// 008141b9  85c0                 test eax, eax
// 008141bb  7505                 jne 0x8141c2
// 008141bd  5e                   pop esi
// 008141be  5f                   pop edi
// 008141bf  c20c00               ret 0xc
// 008141c2  8b442410             mov eax, dword ptr [esp + 0x10]
// 008141c6  50                   push eax
// 008141c7  56                   push esi
// 008141c8  8bcf                 mov ecx, edi
// 008141ca  e861e60700           call 0x892830
// 008141cf  8bcf                 mov ecx, edi
// 008141d1  e87acd0700           call 0x890f50
// 008141d6  898600010000         mov dword ptr [esi + 0x100], eax
// 008141dc  5e                   pop esi
// 008141dd  b801000000           mov eax, 1
// 008141e2  5f                   pop edi
// 008141e3  c20c00               ret 0xc
// copied from an identical function in another client (function ?DockCommandBar@CXTPCommandBars@@QAEHPAVCXTPToolBar@@PAUtagRECT@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp