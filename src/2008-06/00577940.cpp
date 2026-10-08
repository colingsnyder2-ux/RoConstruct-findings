// roc 2008-06 00577940  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577940
//
// 00577940  56                   push esi
// 00577941  8bf1                 mov esi, ecx
// 00577943  8b4608               mov eax, dword ptr [esi + 8]
// 00577946  85c0                 test eax, eax
// 00577948  7419                 je 0x577963
// 0057794a  8b00                 mov eax, dword ptr [eax]
// 0057794c  8d4e10               lea ecx, [esi + 0x10]
// 0057794f  85c0                 test eax, eax
// 00577951  7409                 je 0x57795c
// 00577953  6a01                 push 1
// 00577955  51                   push ecx
// 00577956  51                   push ecx
// 00577957  ffd0                 call eax
// 00577959  83c40c               add esp, 0xc
// 0057795c  c7460800000000       mov dword ptr [esi + 8], 0
// 00577963  5e                   pop esi
// 00577964  c3                   ret 
// library rbxgs/v8datamodel\TimerService.cpp (function ??1Item@TimerService@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
