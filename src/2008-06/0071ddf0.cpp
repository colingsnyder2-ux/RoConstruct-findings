// roc 2008-06 0071ddf0  unit: CXTPShortcutManager  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071ddf0
//
// 0071ddf0  56                   push esi
// 0071ddf1  8b742408             mov esi, dword ptr [esp + 8]
// 0071ddf5  57                   push edi
// 0071ddf6  8bf9                 mov edi, ecx
// 0071ddf8  85f6                 test esi, esi
// 0071ddfa  7d05                 jge 0x71de01
// 0071ddfc  e8432bf8ff           call 0x6a0944
// 0071de01  3b7708               cmp esi, dword ptr [edi + 8]
// 0071de04  7c0b                 jl 0x71de11
// 0071de06  6aff                 push -1
// 0071de08  8d4601               lea eax, [esi + 1]
// 0071de0b  50                   push eax
// 0071de0c  e87ffeffff           call 0x71dc90
// 0071de11  8b5704               mov edx, dword ptr [edi + 4]
// 0071de14  8d0c76               lea ecx, [esi + esi*2]
// 0071de17  8d044a               lea eax, [edx + ecx*2]
// 0071de1a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071de1e  8b11                 mov edx, dword ptr [ecx]
// 0071de20  8910                 mov dword ptr [eax], edx
// 0071de22  668b4904             mov cx, word ptr [ecx + 4]
// 0071de26  5f                   pop edi
// 0071de27  66894804             mov word ptr [eax + 4], cx
// 0071de2b  5e                   pop esi
// 0071de2c  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?SetAtGrow@?$CArray@UtagACCEL@@AAU1@@@QAEXHAAUtagACCEL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
