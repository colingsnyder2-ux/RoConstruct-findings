// roc 2012-06 00a4aee0  unit: CXTPControlCustom  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4aee0
//
// 00a4aee0  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 00a4aee7  56                   push esi
// 00a4aee8  743a                 je 0xa4af24
// 00a4aeea  83b99001000000       cmp dword ptr [ecx + 0x190], 0
// 00a4aef1  7431                 je 0xa4af24
// 00a4aef3  8b9198010000         mov edx, dword ptr [ecx + 0x198]
// 00a4aef9  03918c010000         add edx, dword ptr [ecx + 0x18c]
// 00a4aeff  8bb194010000         mov esi, dword ptr [ecx + 0x194]
// 00a4af05  03b188010000         add esi, dword ptr [ecx + 0x188]
// 00a4af0b  039184010000         add edx, dword ptr [ecx + 0x184]
// 00a4af11  03b180010000         add esi, dword ptr [ecx + 0x180]
// 00a4af17  8b442408             mov eax, dword ptr [esp + 8]
// 00a4af1b  8930                 mov dword ptr [eax], esi
// 00a4af1d  895004               mov dword ptr [eax + 4], edx
// 00a4af20  5e                   pop esi
// 00a4af21  c20800               ret 8
// 00a4af24  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a4af28  8b742408             mov esi, dword ptr [esp + 8]
// 00a4af2c  50                   push eax
// 00a4af2d  56                   push esi
// 00a4af2e  e8ada0f3ff           call 0x984fe0
// 00a4af33  8bc6                 mov eax, esi
// 00a4af35  5e                   pop esi
// 00a4af36  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?GetSize@CXTPControlCustom@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
