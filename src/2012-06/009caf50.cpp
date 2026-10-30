// from server: 100% by auto
// roc 2012-06 009caf50  unit: CXTPControlButtonColor  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009caf50
//
// 009caf50  56                   push esi
// 009caf51  8bf1                 mov esi, ecx
// 009caf53  e8989afbff           call 0x9849f0
// 009caf58  8bc8                 mov ecx, eax
// 009caf5a  e8b1cafbff           call 0x987a10
// 009caf5f  83f817               cmp eax, 0x17
// 009caf62  7d16                 jge 0x9caf7a
// 009caf64  8b442408             mov eax, dword ptr [esp + 8]
// 009caf68  b917000000           mov ecx, 0x17
// 009caf6d  c70094000000         mov dword ptr [eax], 0x94
// 009caf73  894804               mov dword ptr [eax + 4], ecx
// 009caf76  5e                   pop esi
// 009caf77  c20800               ret 8
// 009caf7a  8bce                 mov ecx, esi
// 009caf7c  e86f9afbff           call 0x9849f0
// 009caf81  8bc8                 mov ecx, eax
// 009caf83  e888cafbff           call 0x987a10
// 009caf88  8bc8                 mov ecx, eax
// 009caf8a  8b442408             mov eax, dword ptr [esp + 8]
// 009caf8e  c70094000000         mov dword ptr [eax], 0x94
// 009caf94  894804               mov dword ptr [eax + 4], ecx
// 009caf97  5e                   pop esi
// 009caf98  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetSize@CXTPControlButtonColor@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlPopupColor.cpp
