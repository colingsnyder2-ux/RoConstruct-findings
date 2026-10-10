// roc 2008-06 00742290  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00742290
//
// 00742290  56                   push esi
// 00742291  8bf1                 mov esi, ecx
// 00742293  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00742299  85c0                 test eax, eax
// 0074229b  7452                 je 0x7422ef
// 0074229d  83782000             cmp dword ptr [eax + 0x20], 0
// 007422a1  744c                 je 0x7422ef
// 007422a3  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 007422aa  7425                 je 0x7422d1
// 007422ac  8b06                 mov eax, dword ptr [esi]
// 007422ae  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 007422b4  6a00                 push 0
// 007422b6  ffd2                 call edx
// 007422b8  85c0                 test eax, eax
// 007422ba  7415                 je 0x7422d1
// 007422bc  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007422c2  85c0                 test eax, eax
// 007422c4  740b                 je 0x7422d1
// 007422c6  83782000             cmp dword ptr [eax + 0x20], 0
// 007422ca  b840000000           mov eax, 0x40
// 007422cf  7505                 jne 0x7422d6
// 007422d1  b880000000           mov eax, 0x80
// 007422d6  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 007422dc  83c817               or eax, 0x17
// 007422df  50                   push eax
// 007422e0  6a00                 push 0
// 007422e2  6a00                 push 0
// 007422e4  6a00                 push 0
// 007422e6  6a00                 push 0
// 007422e8  6a00                 push 0
// 007422ea  e857e7f5ff           call 0x6a0a46
// 007422ef  5e                   pop esi
// 007422f0  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlEdit.cpp (function ?ShowHideEditControl@CXTPControlEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlEdit.cpp
