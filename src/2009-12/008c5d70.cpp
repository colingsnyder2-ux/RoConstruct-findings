// roc 2009-12 008c5d70  unit: CXTPControlCustom  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5d70
//
// 008c5d70  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 008c5d77  56                   push esi
// 008c5d78  743a                 je 0x8c5db4
// 008c5d7a  83b99001000000       cmp dword ptr [ecx + 0x190], 0
// 008c5d81  7431                 je 0x8c5db4
// 008c5d83  8b9198010000         mov edx, dword ptr [ecx + 0x198]
// 008c5d89  03918c010000         add edx, dword ptr [ecx + 0x18c]
// 008c5d8f  8bb194010000         mov esi, dword ptr [ecx + 0x194]
// 008c5d95  03b188010000         add esi, dword ptr [ecx + 0x188]
// 008c5d9b  039184010000         add edx, dword ptr [ecx + 0x184]
// 008c5da1  03b180010000         add esi, dword ptr [ecx + 0x180]
// 008c5da7  8b442408             mov eax, dword ptr [esp + 8]
// 008c5dab  8930                 mov dword ptr [eax], esi
// 008c5dad  895004               mov dword ptr [eax + 4], edx
// 008c5db0  5e                   pop esi
// 008c5db1  c20800               ret 8
// 008c5db4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c5db8  8b742408             mov esi, dword ptr [esp + 8]
// 008c5dbc  50                   push eax
// 008c5dbd  56                   push esi
// 008c5dbe  e8ad08f3ff           call 0x7f6670
// 008c5dc3  8bc6                 mov eax, esi
// 008c5dc5  5e                   pop esi
// 008c5dc6  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?GetSize@CXTPControlCustom@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
