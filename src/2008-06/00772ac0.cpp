// roc 2008-06 00772ac0  unit: CXTPControlCustom  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772ac0
//
// 00772ac0  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 00772ac7  56                   push esi
// 00772ac8  743a                 je 0x772b04
// 00772aca  83b99001000000       cmp dword ptr [ecx + 0x190], 0
// 00772ad1  7431                 je 0x772b04
// 00772ad3  8b9198010000         mov edx, dword ptr [ecx + 0x198]
// 00772ad9  03918c010000         add edx, dword ptr [ecx + 0x18c]
// 00772adf  8bb194010000         mov esi, dword ptr [ecx + 0x194]
// 00772ae5  03b188010000         add esi, dword ptr [ecx + 0x188]
// 00772aeb  039184010000         add edx, dword ptr [ecx + 0x184]
// 00772af1  03b180010000         add esi, dword ptr [ecx + 0x180]
// 00772af7  8b442408             mov eax, dword ptr [esp + 8]
// 00772afb  8930                 mov dword ptr [eax], esi
// 00772afd  895004               mov dword ptr [eax + 4], edx
// 00772b00  5e                   pop esi
// 00772b01  c20800               ret 8
// 00772b04  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00772b08  8b742408             mov esi, dword ptr [esp + 8]
// 00772b0c  50                   push eax
// 00772b0d  56                   push esi
// 00772b0e  e86d8df3ff           call 0x6ab880
// 00772b13  8bc6                 mov eax, esi
// 00772b15  5e                   pop esi
// 00772b16  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?GetSize@CXTPControlCustom@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
