// roc 2009-12 004078c0  unit: VCApp::?$CComObject  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004078c0
//
// 004078c0  6aff                 push -1
// 004078c2  68db729200           push 0x9272db
// 004078c7  64a100000000         mov eax, dword ptr fs:[0]
// 004078cd  50                   push eax
// 004078ce  64892500000000       mov dword ptr fs:[0], esp
// 004078d5  51                   push ecx
// 004078d6  33c0                 xor eax, eax
// 004078d8  56                   push esi
// 004078d9  8bf1                 mov esi, ecx
// 004078db  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004078df  894604               mov dword ptr [esi + 4], eax
// 004078e2  c70678fc9900         mov dword ptr [esi], 0x99fc78
// 004078e8  c7460cc8f89900       mov dword ptr [esi + 0xc], 0x99f8c8
// 004078ef  894610               mov dword ptr [esi + 0x10], eax
// 004078f2  894618               mov dword ptr [esi + 0x18], eax
// 004078f5  89742404             mov dword ptr [esp + 4], esi
// 004078f9  c7460828fc9900       mov dword ptr [esi + 8], 0x99fc28
// 00407900  c7460c10fc9900       mov dword ptr [esi + 0xc], 0x99fc10
// 00407907  c74614f4fb9900       mov dword ptr [esi + 0x14], 0x99fbf4
// 0040790e  c7461cc0fb9900       mov dword ptr [esi + 0x1c], 0x99fbc0
// 00407915  894e20               mov dword ptr [esi + 0x20], ecx
// 00407918  8b0d0095b700         mov ecx, dword ptr [0xb79500]
// 0040791e  8b11                 mov edx, dword ptr [ecx]
// 00407920  89442410             mov dword ptr [esp + 0x10], eax
// 00407924  8b4204               mov eax, dword ptr [edx + 4]
// 00407927  ffd0                 call eax
// 00407929  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040792d  8bc6                 mov eax, esi
// 0040792f  5e                   pop esi
// 00407930  64890d00000000       mov dword ptr fs:[0], ecx
// 00407937  83c410               add esp, 0x10
// 0040793a  c20400               ret 4
// copied from an identical function in another client (function ??0?$CComAggObject@VCApp@@@ATL@@QAE@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp