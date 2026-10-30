// roc 2009-12 008d1670  unit: PAVCXTPTabManagerAtom::?$CArray  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d1670
//
// 008d1670  6aff                 push -1
// 008d1672  684e519600           push 0x96514e
// 008d1677  64a100000000         mov eax, dword ptr fs:[0]
// 008d167d  50                   push eax
// 008d167e  51                   push ecx
// 008d167f  56                   push esi
// 008d1680  a10052b600           mov eax, dword ptr [0xb65200]
// 008d1685  33c4                 xor eax, esp
// 008d1687  50                   push eax
// 008d1688  8d44240c             lea eax, [esp + 0xc]
// 008d168c  64a300000000         mov dword ptr fs:[0], eax
// 008d1692  8bf1                 mov esi, ecx
// 008d1694  89742408             mov dword ptr [esp + 8], esi
// 008d1698  c7064caba000         mov dword ptr [esi], 0xa0ab4c
// 008d169e  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 008d16a4  c744241405000000     mov dword ptr [esp + 0x14], 5
// 008d16ac  85c9                 test ecx, ecx
// 008d16ae  7408                 je 0x8d16b8
// 008d16b0  8b01                 mov eax, dword ptr [ecx]
// 008d16b2  8b10                 mov edx, dword ptr [eax]
// 008d16b4  6a01                 push 1
// 008d16b6  ffd2                 call edx
// 008d16b8  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 008d16be  85c9                 test ecx, ecx
// 008d16c0  7408                 je 0x8d16ca
// 008d16c2  8b01                 mov eax, dword ptr [ecx]
// 008d16c4  8b10                 mov edx, dword ptr [eax]
// 008d16c6  6a01                 push 1
// 008d16c8  ffd2                 call edx
// 008d16ca  8d8e24010000         lea ecx, [esi + 0x124]
// 008d16d0  c644241404           mov byte ptr [esp + 0x14], 4
// 008d16d5  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 008d16db  e850dbb3ff           call 0x40f230
// 008d16e0  8d8e1c010000         lea ecx, [esi + 0x11c]
// 008d16e6  c644241403           mov byte ptr [esp + 0x14], 3
// 008d16eb  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 008d16f1  e83adbb3ff           call 0x40f230
// 008d16f6  8d8e14010000         lea ecx, [esi + 0x114]
// 008d16fc  c644241402           mov byte ptr [esp + 0x14], 2
// 008d1701  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 008d1707  e824dbb3ff           call 0x40f230
// 008d170c  8d8e0c010000         lea ecx, [esi + 0x10c]
// 008d1712  c644241401           mov byte ptr [esp + 0x14], 1
// 008d1717  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 008d171d  e80edbb3ff           call 0x40f230
// 008d1722  8d8ee8000000         lea ecx, [esi + 0xe8]
// 008d1728  c644241400           mov byte ptr [esp + 0x14], 0
// 008d172d  e8fefeffff           call 0x8d1630
// 008d1732  8bce                 mov ecx, esi
// 008d1734  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008d173c  e8a12cf2ff           call 0x7f43e2
// 008d1741  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d1745  64890d00000000       mov dword ptr fs:[0], ecx
// 008d174c  59                   pop ecx
// 008d174d  5e                   pop esi
// 008d174e  83c410               add esp, 0x10
// 008d1751  c3                   ret 
// copied from an identical function in another client (function ??1CXTPTabPaintManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabPaintManager.cpp