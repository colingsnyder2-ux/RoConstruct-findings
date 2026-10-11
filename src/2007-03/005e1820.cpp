// roc 2007-03 005e1820  unit: seg_005e0000  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1820
//
// 005e1820  6aff                 push -1
// 005e1822  6820bd7500           push 0x75bd20
// 005e1827  64a100000000         mov eax, dword ptr fs:[0]
// 005e182d  50                   push eax
// 005e182e  64892500000000       mov dword ptr fs:[0], esp
// 005e1835  83ec14               sub esp, 0x14
// 005e1838  56                   push esi
// 005e1839  57                   push edi
// 005e183a  8bf9                 mov edi, ecx
// 005e183c  c744240800000000     mov dword ptr [esp + 8], 0
// 005e1844  8d442408             lea eax, [esp + 8]
// 005e1848  50                   push eax
// 005e1849  6a01                 push 1
// 005e184b  8d4c2414             lea ecx, [esp + 0x14]
// 005e184f  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005e1857  e8847be3ff           call 0x4193e0
// 005e185c  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e1860  85f6                 test esi, esi
// 005e1862  c744242401000000     mov dword ptr [esp + 0x24], 1
// 005e186a  740b                 je 0x5e1877
// 005e186c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e1870  2bce                 sub ecx, esi
// 005e1872  c1f902               sar ecx, 2
// 005e1875  750a                 jne 0x5e1881
// 005e1877  ff1544e97700         call dword ptr [0x77e944]
// 005e187d  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e1881  6a08                 push 8
// 005e1883  e880c80300           call 0x61e108
// 005e1888  83c404               add esp, 4
// 005e188b  85c0                 test eax, eax
// 005e188d  740f                 je 0x5e189e
// 005e188f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e1893  c700cc577a00         mov dword ptr [eax], 0x7a57cc
// 005e1899  895004               mov dword ptr [eax + 4], edx
// 005e189c  eb02                 jmp 0x5e18a0
// 005e189e  33c0                 xor eax, eax
// 005e18a0  8b0e                 mov ecx, dword ptr [esi]
// 005e18a2  85c9                 test ecx, ecx
// 005e18a4  8906                 mov dword ptr [esi], eax
// 005e18a6  7408                 je 0x5e18b0
// 005e18a8  8b01                 mov eax, dword ptr [ecx]
// 005e18aa  8b10                 mov edx, dword ptr [eax]
// 005e18ac  6a01                 push 1
// 005e18ae  ffd2                 call edx
// 005e18b0  8b0f                 mov ecx, dword ptr [edi]
// 005e18b2  8b01                 mov eax, dword ptr [ecx]
// 005e18b4  8b4004               mov eax, dword ptr [eax + 4]
// 005e18b7  8d54240c             lea edx, [esp + 0xc]
// 005e18bb  52                   push edx
// 005e18bc  ffd0                 call eax
// 005e18be  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e18c2  85f6                 test esi, esi
// 005e18c4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005e18cc  742c                 je 0x5e18fa
// 005e18ce  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e18d2  3bf0                 cmp esi, eax
// 005e18d4  8bf8                 mov edi, eax
// 005e18d6  7419                 je 0x5e18f1
// 005e18d8  8b0e                 mov ecx, dword ptr [esi]
// 005e18da  85c9                 test ecx, ecx
// 005e18dc  7408                 je 0x5e18e6
// 005e18de  8b11                 mov edx, dword ptr [ecx]
// 005e18e0  8b02                 mov eax, dword ptr [edx]
// 005e18e2  6a01                 push 1
// 005e18e4  ffd0                 call eax
// 005e18e6  83c604               add esi, 4
// 005e18e9  3bf7                 cmp esi, edi
// 005e18eb  75eb                 jne 0x5e18d8
// 005e18ed  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e18f1  56                   push esi
// 005e18f2  e8f9c70300           call 0x61e0f0
// 005e18f7  83c404               add esp, 4
// 005e18fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e18fe  5f                   pop edi
// 005e18ff  5e                   pop esi
// 005e1900  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1907  83c420               add esp, 0x20
// 005e190a  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXPBVPropertyDescriptor@Reflection@RBX@@@Z@Reflection@RBX@@QBEXPBVPropertyDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
