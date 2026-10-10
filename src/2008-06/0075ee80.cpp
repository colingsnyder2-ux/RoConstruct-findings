// roc 2008-06 0075ee80  unit: CXTPDockingPaneTabbedContainer  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ee80
//
// 0075ee80  53                   push ebx
// 0075ee81  56                   push esi
// 0075ee82  8bf1                 mov esi, ecx
// 0075ee84  8d5eac               lea ebx, [esi - 0x54]
// 0075ee87  85db                 test ebx, ebx
// 0075ee89  0f84e4000000         je 0x75ef73
// 0075ee8f  837b2000             cmp dword ptr [ebx + 0x20], 0
// 0075ee93  0f84da000000         je 0x75ef73
// 0075ee99  8b06                 mov eax, dword ptr [esi]
// 0075ee9b  8b5014               mov edx, dword ptr [eax + 0x14]
// 0075ee9e  ffd2                 call edx
// 0075eea0  85c0                 test eax, eax
// 0075eea2  0f85cb000000         jne 0x75ef73
// 0075eea8  57                   push edi
// 0075eea9  ff15102e8000         call dword ptr [0x802e10]
// 0075eeaf  50                   push eax
// 0075eeb0  e8291df4ff           call 0x6a0bde
// 0075eeb5  8bf8                 mov edi, eax
// 0075eeb7  85ff                 test edi, edi
// 0075eeb9  7444                 je 0x75eeff
// 0075eebb  837f2000             cmp dword ptr [edi + 0x20], 0
// 0075eebf  743e                 je 0x75eeff
// 0075eec1  8d46ac               lea eax, [esi - 0x54]
// 0075eec4  3bf8                 cmp edi, eax
// 0075eec6  7430                 je 0x75eef8
// 0075eec8  57                   push edi
// 0075eec9  8bcb                 mov ecx, ebx
// 0075eecb  e8402ffaff           call 0x701e10
// 0075eed0  85c0                 test eax, eax
// 0075eed2  7524                 jne 0x75eef8
// 0075eed4  8bcf                 mov ecx, edi
// 0075eed6  e8357df5ff           call 0x6b6c10
// 0075eedb  85c0                 test eax, eax
// 0075eedd  7420                 je 0x75eeff
// 0075eedf  83782000             cmp dword ptr [eax + 0x20], 0
// 0075eee3  741a                 je 0x75eeff
// 0075eee5  8bcf                 mov ecx, edi
// 0075eee7  e8247df5ff           call 0x6b6c10
// 0075eeec  50                   push eax
// 0075eeed  8bcb                 mov ecx, ebx
// 0075eeef  e81c2ffaff           call 0x701e10
// 0075eef4  85c0                 test eax, eax
// 0075eef6  7407                 je 0x75eeff
// 0075eef8  bf01000000           mov edi, 1
// 0075eefd  eb02                 jmp 0x75ef01
// 0075eeff  33ff                 xor edi, edi
// 0075ef01  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 0075ef07  3bf8                 cmp edi, eax
// 0075ef09  7433                 je 0x75ef3e
// 0075ef0b  8bce                 mov ecx, esi
// 0075ef0d  89be40010000         mov dword ptr [esi + 0x140], edi
// 0075ef13  e888e5ffff           call 0x75d4a0
// 0075ef18  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 0075ef1e  8b10                 mov edx, dword ptr [eax]
// 0075ef20  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 0075ef26  51                   push ecx
// 0075ef27  57                   push edi
// 0075ef28  8bc8                 mov ecx, eax
// 0075ef2a  ffd2                 call edx
// 0075ef2c  8b46cc               mov eax, dword ptr [esi - 0x34]
// 0075ef2f  6a00                 push 0
// 0075ef31  6a00                 push 0
// 0075ef33  50                   push eax
// 0075ef34  ff15182e8000         call dword ptr [0x802e18]
// 0075ef3a  5f                   pop edi
// 0075ef3b  5e                   pop esi
// 0075ef3c  5b                   pop ebx
// 0075ef3d  c3                   ret 
// 0075ef3e  85c0                 test eax, eax
// 0075ef40  7430                 je 0x75ef72
// 0075ef42  8bce                 mov ecx, esi
// 0075ef44  e857e5ffff           call 0x75d4a0
// 0075ef49  8b88d8000000         mov ecx, dword ptr [eax + 0xd8]
// 0075ef4f  3b8e50010000         cmp ecx, dword ptr [esi + 0x150]
// 0075ef55  741b                 je 0x75ef72
// 0075ef57  8bce                 mov ecx, esi
// 0075ef59  e842e5ffff           call 0x75d4a0
// 0075ef5e  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 0075ef64  8b10                 mov edx, dword ptr [eax]
// 0075ef66  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 0075ef6c  51                   push ecx
// 0075ef6d  57                   push edi
// 0075ef6e  8bc8                 mov ecx, eax
// 0075ef70  ffd2                 call edx
// 0075ef72  5f                   pop edi
// 0075ef73  5e                   pop esi
// 0075ef74  5b                   pop ebx
// 0075ef75  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnFocusChanged@CXTPDockingPaneTabbedContainer@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
