// roc 2010-06 00879f30  unit: CXTPControlCustom  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00879f30
//
// 00879f30  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 00879f37  56                   push esi
// 00879f38  743a                 je 0x879f74
// 00879f3a  83b99001000000       cmp dword ptr [ecx + 0x190], 0
// 00879f41  7431                 je 0x879f74
// 00879f43  8b9198010000         mov edx, dword ptr [ecx + 0x198]
// 00879f49  03918c010000         add edx, dword ptr [ecx + 0x18c]
// 00879f4f  8bb194010000         mov esi, dword ptr [ecx + 0x194]
// 00879f55  03b188010000         add esi, dword ptr [ecx + 0x188]
// 00879f5b  039184010000         add edx, dword ptr [ecx + 0x184]
// 00879f61  03b180010000         add esi, dword ptr [ecx + 0x180]
// 00879f67  8b442408             mov eax, dword ptr [esp + 8]
// 00879f6b  8930                 mov dword ptr [eax], esi
// 00879f6d  895004               mov dword ptr [eax + 4], edx
// 00879f70  5e                   pop esi
// 00879f71  c20800               ret 8
// 00879f74  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00879f78  8b742408             mov esi, dword ptr [esp + 8]
// 00879f7c  50                   push eax
// 00879f7d  56                   push esi
// 00879f7e  e8cd07f3ff           call 0x7aa750
// 00879f83  8bc6                 mov eax, esi
// 00879f85  5e                   pop esi
// 00879f86  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?GetSize@CXTPControlCustom@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
