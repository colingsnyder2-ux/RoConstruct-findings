// roc 2009-06 007eeb60  unit: CXTPPropertyGridPaintManager  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eeb60
//
// 007eeb60  53                   push ebx
// 007eeb61  55                   push ebp
// 007eeb62  56                   push esi
// 007eeb63  8bd9                 mov ebx, ecx
// 007eeb65  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 007eeb68  57                   push edi
// 007eeb69  e8b243f8ff           call 0x772f20
// 007eeb6e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007eeb72  8b742418             mov esi, dword ptr [esp + 0x18]
// 007eeb76  8be8                 mov ebp, eax
// 007eeb78  85ff                 test edi, edi
// 007eeb7a  0f84f7000000         je 0x7eec77
// 007eeb80  83e801               sub eax, 1
// 007eeb83  0f84b4000000         je 0x7eec3d
// 007eeb89  83e801               sub eax, 1
// 007eeb8c  747d                 je 0x7eec0b
// 007eeb8e  83e801               sub eax, 1
// 007eeb91  0f85e0000000         jne 0x7eec77
// 007eeb97  e8845ff6ff           call 0x754b20
// 007eeb9c  6a14                 push 0x14
// 007eeb9e  8bc8                 mov ecx, eax
// 007eeba0  e8fb56f6ff           call 0x7542a0
// 007eeba5  8bd8                 mov ebx, eax
// 007eeba7  e8745ff6ff           call 0x754b20
// 007eebac  6a10                 push 0x10
// 007eebae  8bc8                 mov ecx, eax
// 007eebb0  e8eb56f6ff           call 0x7542a0
// 007eebb5  8b4e04               mov ecx, dword ptr [esi + 4]
// 007eebb8  8b16                 mov edx, dword ptr [esi]
// 007eebba  53                   push ebx
// 007eebbb  50                   push eax
// 007eebbc  8b460c               mov eax, dword ptr [esi + 0xc]
// 007eebbf  2bc1                 sub eax, ecx
// 007eebc1  50                   push eax
// 007eebc2  8b4608               mov eax, dword ptr [esi + 8]
// 007eebc5  2bc2                 sub eax, edx
// 007eebc7  50                   push eax
// 007eebc8  51                   push ecx
// 007eebc9  52                   push edx
// 007eebca  8bcf                 mov ecx, edi
// 007eebcc  e83fdb0500           call 0x84c710
// 007eebd1  e84a5ff6ff           call 0x754b20
// 007eebd6  6a0f                 push 0xf
// 007eebd8  8bc8                 mov ecx, eax
// 007eebda  e8c156f6ff           call 0x7542a0
// 007eebdf  8bd8                 mov ebx, eax
// 007eebe1  e83a5ff6ff           call 0x754b20
// 007eebe6  6a15                 push 0x15
// 007eebe8  8bc8                 mov ecx, eax
// 007eebea  e8b156f6ff           call 0x7542a0
// 007eebef  8b4e04               mov ecx, dword ptr [esi + 4]
// 007eebf2  8b16                 mov edx, dword ptr [esi]
// 007eebf4  53                   push ebx
// 007eebf5  50                   push eax
// 007eebf6  8b460c               mov eax, dword ptr [esi + 0xc]
// 007eebf9  2bc1                 sub eax, ecx
// 007eebfb  83e802               sub eax, 2
// 007eebfe  50                   push eax
// 007eebff  8b4608               mov eax, dword ptr [esi + 8]
// 007eec02  2bc2                 sub eax, edx
// 007eec04  83e802               sub eax, 2
// 007eec07  41                   inc ecx
// 007eec08  42                   inc edx
// 007eec09  eb62                 jmp 0x7eec6d
// 007eec0b  8b4344               mov eax, dword ptr [ebx + 0x44]
// 007eec0e  83f8ff               cmp eax, -1
// 007eec11  7505                 jne 0x7eec18
// 007eec13  8b5340               mov edx, dword ptr [ebx + 0x40]
// 007eec16  eb02                 jmp 0x7eec1a
// 007eec18  8bd0                 mov edx, eax
// 007eec1a  83f8ff               cmp eax, -1
// 007eec1d  7505                 jne 0x7eec24
// 007eec1f  8b5b40               mov ebx, dword ptr [ebx + 0x40]
// 007eec22  eb02                 jmp 0x7eec26
// 007eec24  8bd8                 mov ebx, eax
// 007eec26  8b4604               mov eax, dword ptr [esi + 4]
// 007eec29  8b0e                 mov ecx, dword ptr [esi]
// 007eec2b  52                   push edx
// 007eec2c  8b560c               mov edx, dword ptr [esi + 0xc]
// 007eec2f  53                   push ebx
// 007eec30  2bd0                 sub edx, eax
// 007eec32  52                   push edx
// 007eec33  8b5608               mov edx, dword ptr [esi + 8]
// 007eec36  2bd1                 sub edx, ecx
// 007eec38  52                   push edx
// 007eec39  50                   push eax
// 007eec3a  51                   push ecx
// 007eec3b  eb33                 jmp 0x7eec70
// 007eec3d  e8de5ef6ff           call 0x754b20
// 007eec42  6a06                 push 6
// 007eec44  8bc8                 mov ecx, eax
// 007eec46  e85556f6ff           call 0x7542a0
// 007eec4b  8bd8                 mov ebx, eax
// 007eec4d  e8ce5ef6ff           call 0x754b20
// 007eec52  6a06                 push 6
// 007eec54  8bc8                 mov ecx, eax
// 007eec56  e84556f6ff           call 0x7542a0
// 007eec5b  8b4e04               mov ecx, dword ptr [esi + 4]
// 007eec5e  8b16                 mov edx, dword ptr [esi]
// 007eec60  53                   push ebx
// 007eec61  50                   push eax
// 007eec62  8b460c               mov eax, dword ptr [esi + 0xc]
// 007eec65  2bc1                 sub eax, ecx
// 007eec67  50                   push eax
// 007eec68  8b4608               mov eax, dword ptr [esi + 8]
// 007eec6b  2bc2                 sub eax, edx
// 007eec6d  50                   push eax
// 007eec6e  51                   push ecx
// 007eec6f  52                   push edx
// 007eec70  8bcf                 mov ecx, edi
// 007eec72  e899da0500           call 0x84c710
// 007eec77  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007eec7c  744a                 je 0x7eecc8
// 007eec7e  83fd03               cmp ebp, 3
// 007eec81  7517                 jne 0x7eec9a
// 007eec83  b802000000           mov eax, 2
// 007eec88  0106                 add dword ptr [esi], eax
// 007eec8a  014604               add dword ptr [esi + 4], eax
// 007eec8d  294608               sub dword ptr [esi + 8], eax
// 007eec90  29460c               sub dword ptr [esi + 0xc], eax
// 007eec93  5f                   pop edi
// 007eec94  5e                   pop esi
// 007eec95  5d                   pop ebp
// 007eec96  5b                   pop ebx
// 007eec97  c20c00               ret 0xc
// 007eec9a  83fd02               cmp ebp, 2
// 007eec9d  7419                 je 0x7eecb8
// 007eec9f  83fd01               cmp ebp, 1
// 007eeca2  7414                 je 0x7eecb8
// 007eeca4  33c0                 xor eax, eax
// 007eeca6  0106                 add dword ptr [esi], eax
// 007eeca8  014604               add dword ptr [esi + 4], eax
// 007eecab  294608               sub dword ptr [esi + 8], eax
// 007eecae  29460c               sub dword ptr [esi + 0xc], eax
// 007eecb1  5f                   pop edi
// 007eecb2  5e                   pop esi
// 007eecb3  5d                   pop ebp
// 007eecb4  5b                   pop ebx
// 007eecb5  c20c00               ret 0xc
// 007eecb8  b801000000           mov eax, 1
// 007eecbd  0106                 add dword ptr [esi], eax
// 007eecbf  014604               add dword ptr [esi + 4], eax
// 007eecc2  294608               sub dword ptr [esi + 8], eax
// 007eecc5  29460c               sub dword ptr [esi + 0xc], eax
// 007eecc8  5f                   pop edi
// 007eecc9  5e                   pop esi
// 007eecca  5d                   pop ebp
// 007eeccb  5b                   pop ebx
// 007eeccc  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawPropertyGridBorder@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@AAUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
