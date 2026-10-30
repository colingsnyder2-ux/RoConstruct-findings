// from server: 100% by auto
// roc 2008-06 00743fc0  unit: CXTPControlEditCtrl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00743fc0
//
// 00743fc0  56                   push esi
// 00743fc1  8b742408             mov esi, dword ptr [esp + 8]
// 00743fc5  57                   push edi
// 00743fc6  8bf9                 mov edi, ecx
// 00743fc8  85f6                 test esi, esi
// 00743fca  7d05                 jge 0x743fd1
// 00743fcc  e873c9f5ff           call 0x6a0944
// 00743fd1  3b7708               cmp esi, dword ptr [edi + 8]
// 00743fd4  7c0b                 jl 0x743fe1
// 00743fd6  6aff                 push -1
// 00743fd8  8d4601               lea eax, [esi + 1]
// 00743fdb  50                   push eax
// 00743fdc  e88ffeffff           call 0x743e70
// 00743fe1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00743fe5  8b08                 mov ecx, dword ptr [eax]
// 00743fe7  c1e604               shl esi, 4
// 00743fea  037704               add esi, dword ptr [edi + 4]
// 00743fed  5f                   pop edi
// 00743fee  890e                 mov dword ptr [esi], ecx
// 00743ff0  8b5004               mov edx, dword ptr [eax + 4]
// 00743ff3  895604               mov dword ptr [esi + 4], edx
// 00743ff6  8b4808               mov ecx, dword ptr [eax + 8]
// 00743ff9  894e08               mov dword ptr [esi + 8], ecx
// 00743ffc  8b500c               mov edx, dword ptr [eax + 0xc]
// 00743fff  89560c               mov dword ptr [esi + 0xc], edx
// 00744002  5e                   pop esi
// 00744003  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?SetAtGrow@?$CArray@UtagRECT@@AAU1@@@QAEXHAAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBarAnimation.cpp
