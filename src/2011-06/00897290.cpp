// roc 2011-06 00897290  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00897290
//
// 00897290  56                   push esi
// 00897291  57                   push edi
// 00897292  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00897296  8bf1                 mov esi, ecx
// 00897298  83ff03               cmp edi, 3
// 0089729b  7405                 je 0x8972a2
// 0089729d  83ff02               cmp edi, 2
// 008972a0  753c                 jne 0x8972de
// 008972a2  8d8e6c040000         lea ecx, [esi + 0x46c]
// 008972a8  e82360feff           call 0x87d2d0
// 008972ad  85c0                 test eax, eax
// 008972af  742d                 je 0x8972de
// 008972b1  8b442424             mov eax, dword ptr [esp + 0x24]
// 008972b5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008972b9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008972bd  50                   push eax
// 008972be  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008972c2  51                   push ecx
// 008972c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008972c7  52                   push edx
// 008972c8  50                   push eax
// 008972c9  57                   push edi
// 008972ca  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008972ce  51                   push ecx
// 008972cf  57                   push edi
// 008972d0  8bce                 mov ecx, esi
// 008972d2  e879b5f7ff           call 0x812850
// 008972d7  8bc7                 mov eax, edi
// 008972d9  5f                   pop edi
// 008972da  5e                   pop esi
// 008972db  c21c00               ret 0x1c
// 008972de  8b542424             mov edx, dword ptr [esp + 0x24]
// 008972e2  8b442420             mov eax, dword ptr [esp + 0x20]
// 008972e6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008972ea  52                   push edx
// 008972eb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008972ef  50                   push eax
// 008972f0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008972f4  51                   push ecx
// 008972f5  52                   push edx
// 008972f6  57                   push edi
// 008972f7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008972fb  50                   push eax
// 008972fc  57                   push edi
// 008972fd  8bce                 mov ecx, esi
// 008972ff  e80cfffeff           call 0x887210
// 00897304  8bc7                 mov eax, edi
// 00897306  5f                   pop edi
// 00897307  5e                   pop esi
// 00897308  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawSpecialControl@CXTPNativeXPTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
