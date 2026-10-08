// roc 2007-03 004977e0  unit: seg_00490000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004977e0
//
// 004977e0  56                   push esi
// 004977e1  57                   push edi
// 004977e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004977e6  81ff00010000         cmp edi, 0x100
// 004977ec  8bf1                 mov esi, ecx
// 004977ee  c70600000000         mov dword ptr [esi], 0
// 004977f4  c7460800000000       mov dword ptr [esi + 8], 0
// 004977fb  7f18                 jg 0x497815
// 004977fd  8d4611               lea eax, [esi + 0x11]
// 00497800  89460c               mov dword ptr [esi + 0xc], eax
// 00497803  5f                   pop edi
// 00497804  c7460400080000       mov dword ptr [esi + 4], 0x800
// 0049780b  8bc6                 mov eax, esi
// 0049780d  c6461001             mov byte ptr [esi + 0x10], 1
// 00497811  5e                   pop esi
// 00497812  c20400               ret 4
// 00497815  57                   push edi
// 00497816  e8e3761800           call 0x61eefe
// 0049781b  83c404               add esp, 4
// 0049781e  8d0cfd00000000       lea ecx, [edi*8]
// 00497825  89460c               mov dword ptr [esi + 0xc], eax
// 00497828  5f                   pop edi
// 00497829  894e04               mov dword ptr [esi + 4], ecx
// 0049782c  8bc6                 mov eax, esi
// 0049782e  c6461001             mov byte ptr [esi + 0x10], 1
// 00497832  5e                   pop esi
// 00497833  c20400               ret 4
// library rbxgs-raknet/BitStream.cpp (function ??0BitStream@RakNet@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
