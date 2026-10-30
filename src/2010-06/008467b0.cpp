// roc 2010-06 008467b0  unit: CXTPDockBar  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008467b0
//
// 008467b0  53                   push ebx
// 008467b1  55                   push ebp
// 008467b2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008467b6  8bd9                 mov ebx, ecx
// 008467b8  85ed                 test ebp, ebp
// 008467ba  7507                 jne 0x8467c3
// 008467bc  5d                   pop ebp
// 008467bd  33c0                 xor eax, eax
// 008467bf  5b                   pop ebx
// 008467c0  c20800               ret 8
// 008467c3  8b442410             mov eax, dword ptr [esp + 0x10]
// 008467c7  56                   push esi
// 008467c8  50                   push eax
// 008467c9  55                   push ebp
// 008467ca  e861f0ffff           call 0x845830
// 008467cf  8bf0                 mov esi, eax
// 008467d1  85f6                 test esi, esi
// 008467d3  7f08                 jg 0x8467dd
// 008467d5  5e                   pop esi
// 008467d6  5d                   pop ebp
// 008467d7  33c0                 xor eax, eax
// 008467d9  5b                   pop ebx
// 008467da  c20800               ret 8
// 008467dd  57                   push edi
// 008467de  6a01                 push 1
// 008467e0  8d7b58               lea edi, [ebx + 0x58]
// 008467e3  56                   push esi
// 008467e4  8bcf                 mov ecx, edi
// 008467e6  e85522f7ff           call 0x7b8a40
// 008467eb  8d46ff               lea eax, [esi - 1]
// 008467ee  85c0                 test eax, eax
// 008467f0  7c45                 jl 0x846837
// 008467f2  3b4708               cmp eax, dword ptr [edi + 8]
// 008467f5  7d40                 jge 0x846837
// 008467f7  8b4f04               mov ecx, dword ptr [edi + 4]
// 008467fa  833c8100             cmp dword ptr [ecx + eax*4], 0
// 008467fe  7517                 jne 0x846817
// 00846800  3b7708               cmp esi, dword ptr [edi + 8]
// 00846803  7d32                 jge 0x846837
// 00846805  8bd1                 mov edx, ecx
// 00846807  833cb200             cmp dword ptr [edx + esi*4], 0
// 0084680b  750a                 jne 0x846817
// 0084680d  6a01                 push 1
// 0084680f  56                   push esi
// 00846810  8bcf                 mov ecx, edi
// 00846812  e82922f7ff           call 0x7b8a40
// 00846817  c7858001000000000000 mov dword ptr [ebp + 0x180], 0
// 00846821  8b4b6c               mov ecx, dword ptr [ebx + 0x6c]
// 00846824  6a01                 push 1
// 00846826  e84522f8ff           call 0x7c8a70
// 0084682b  5f                   pop edi
// 0084682c  5e                   pop esi
// 0084682d  5d                   pop ebp
// 0084682e  b801000000           mov eax, 1
// 00846833  5b                   pop ebx
// 00846834  c20800               ret 8
// 00846837  e81014f6ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveCommandBar@CXTPDockBar@@IAEHPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp