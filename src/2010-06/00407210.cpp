// roc 2010-06 00407210  unit: VCApp::?$CComObject  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00407210
//
// 00407210  6aff                 push -1
// 00407212  68ebdb9700           push 0x97dbeb
// 00407217  64a100000000         mov eax, dword ptr fs:[0]
// 0040721d  50                   push eax
// 0040721e  64892500000000       mov dword ptr fs:[0], esp
// 00407225  51                   push ecx
// 00407226  33c0                 xor eax, eax
// 00407228  56                   push esi
// 00407229  8bf1                 mov esi, ecx
// 0040722b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0040722f  894604               mov dword ptr [esi + 4], eax
// 00407232  c706e007a000         mov dword ptr [esi], 0xa007e0
// 00407238  c7460c6804a000       mov dword ptr [esi + 0xc], 0xa00468
// 0040723f  894610               mov dword ptr [esi + 0x10], eax
// 00407242  894618               mov dword ptr [esi + 0x18], eax
// 00407245  89742404             mov dword ptr [esp + 4], esi
// 00407249  c74608cc07a000       mov dword ptr [esi + 8], 0xa007cc
// 00407250  c7460cb407a000       mov dword ptr [esi + 0xc], 0xa007b4
// 00407257  c746149807a000       mov dword ptr [esi + 0x14], 0xa00798
// 0040725e  c7461c6407a000       mov dword ptr [esi + 0x1c], 0xa00764
// 00407265  894e20               mov dword ptr [esi + 0x20], ecx
// 00407268  8b0db0fabf00         mov ecx, dword ptr [0xbffab0]
// 0040726e  8b11                 mov edx, dword ptr [ecx]
// 00407270  89442410             mov dword ptr [esp + 0x10], eax
// 00407274  8b4204               mov eax, dword ptr [edx + 4]
// 00407277  ffd0                 call eax
// 00407279  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040727d  8bc6                 mov eax, esi
// 0040727f  5e                   pop esi
// 00407280  64890d00000000       mov dword ptr fs:[0], ecx
// 00407287  83c410               add esp, 0x10
// 0040728a  c20400               ret 4
// copied from an identical function in another client (function ??0?$CComAggObject@VCApp@@@ATL@@QAE@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp