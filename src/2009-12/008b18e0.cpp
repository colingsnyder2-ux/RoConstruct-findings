// roc 2009-12 008b18e0  unit: CXTPDockingPaneTabbedContainer  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b18e0
//
// 008b18e0  83ec10               sub esp, 0x10
// 008b18e3  56                   push esi
// 008b18e4  8bf1                 mov esi, ecx
// 008b18e6  57                   push edi
// 008b18e7  56                   push esi
// 008b18e8  8d4c240c             lea ecx, [esp + 0xc]
// 008b18ec  e8df99f9ff           call 0x84b2d0
// 008b18f1  8bce                 mov ecx, esi
// 008b18f3  e808f5ffff           call 0x8b0e00
// 008b18f8  85c0                 test eax, eax
// 008b18fa  7454                 je 0x8b1950
// 008b18fc  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b1900  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b1904  8b3d5cca9800         mov edi, dword ptr [0x98ca5c]
// 008b190a  50                   push eax
// 008b190b  51                   push ecx
// 008b190c  8d542410             lea edx, [esp + 0x10]
// 008b1910  52                   push edx
// 008b1911  ffd7                 call edi
// 008b1913  85c0                 test eax, eax
// 008b1915  7439                 je 0x8b1950
// 008b1917  8d4e54               lea ecx, [esi + 0x54]
// 008b191a  e831efffff           call 0x8b0850
// 008b191f  8b10                 mov edx, dword ptr [eax]
// 008b1921  8b5270               mov edx, dword ptr [edx + 0x70]
// 008b1924  8d4c2408             lea ecx, [esp + 8]
// 008b1928  51                   push ecx
// 008b1929  56                   push esi
// 008b192a  8bc8                 mov ecx, eax
// 008b192c  ffd2                 call edx
// 008b192e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b1932  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b1936  50                   push eax
// 008b1937  51                   push ecx
// 008b1938  8d542410             lea edx, [esp + 0x10]
// 008b193c  52                   push edx
// 008b193d  ffd7                 call edi
// 008b193f  85c0                 test eax, eax
// 008b1941  750d                 jne 0x8b1950
// 008b1943  5f                   pop edi
// 008b1944  b8feffffff           mov eax, 0xfffffffe
// 008b1949  5e                   pop esi
// 008b194a  83c410               add esp, 0x10
// 008b194d  c20800               ret 8
// 008b1950  8b06                 mov eax, dword ptr [esi]
// 008b1952  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008b1958  8bce                 mov ecx, esi
// 008b195a  ffd2                 call edx
// 008b195c  85c0                 test eax, eax
// 008b195e  7424                 je 0x8b1984
// 008b1960  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b1964  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b1968  50                   push eax
// 008b1969  51                   push ecx
// 008b196a  8d8ea8000000         lea ecx, [esi + 0xa8]
// 008b1970  e81bdd0100           call 0x8cf690
// 008b1975  85c0                 test eax, eax
// 008b1977  740b                 je 0x8b1984
// 008b1979  8b402c               mov eax, dword ptr [eax + 0x2c]
// 008b197c  5f                   pop edi
// 008b197d  5e                   pop esi
// 008b197e  83c410               add esp, 0x10
// 008b1981  c20800               ret 8
// 008b1984  5f                   pop edi
// 008b1985  83c8ff               or eax, 0xffffffff
// 008b1988  5e                   pop esi
// 008b1989  83c410               add esp, 0x10
// 008b198c  c20800               ret 8
// copied from an identical function in another client (function ?HitTest@CXTPDockingPaneTabbedContainer@@IBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp