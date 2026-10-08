// roc 2011-06 008d2bb0  unit: CXTPControlCustom  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2bb0
//
// 008d2bb0  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 008d2bb7  56                   push esi
// 008d2bb8  743a                 je 0x8d2bf4
// 008d2bba  83b99001000000       cmp dword ptr [ecx + 0x190], 0
// 008d2bc1  7431                 je 0x8d2bf4
// 008d2bc3  8b9198010000         mov edx, dword ptr [ecx + 0x198]
// 008d2bc9  03918c010000         add edx, dword ptr [ecx + 0x18c]
// 008d2bcf  8bb194010000         mov esi, dword ptr [ecx + 0x194]
// 008d2bd5  03b188010000         add esi, dword ptr [ecx + 0x188]
// 008d2bdb  039184010000         add edx, dword ptr [ecx + 0x184]
// 008d2be1  03b180010000         add esi, dword ptr [ecx + 0x180]
// 008d2be7  8b442408             mov eax, dword ptr [esp + 8]
// 008d2beb  8930                 mov dword ptr [eax], esi
// 008d2bed  895004               mov dword ptr [eax + 4], edx
// 008d2bf0  5e                   pop esi
// 008d2bf1  c20800               ret 8
// 008d2bf4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d2bf8  8b742408             mov esi, dword ptr [esp + 8]
// 008d2bfc  50                   push eax
// 008d2bfd  56                   push esi
// 008d2bfe  e83da1f3ff           call 0x80cd40
// 008d2c03  8bc6                 mov eax, esi
// 008d2c05  5e                   pop esi
// 008d2c06  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?GetSize@CXTPControlCustom@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
