// roc 2012-06 009e92b0  unit: CXTColorDialog  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e92b0
//
// 009e92b0  53                   push ebx
// 009e92b1  56                   push esi
// 009e92b2  8bf1                 mov esi, ecx
// 009e92b4  e855090b00           call 0xa99c0e
// 009e92b9  8bd8                 mov ebx, eax
// 009e92bb  8b06                 mov eax, dword ptr [esi]
// 009e92bd  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 009e92c3  8bce                 mov ecx, esi
// 009e92c5  ffd2                 call edx
// 009e92c7  6a00                 push 0
// 009e92c9  8bce                 mov ecx, esi
// 009e92cb  e838090b00           call 0xa99c08
// 009e92d0  8d86b0000000         lea eax, [esi + 0xb0]
// 009e92d6  85c0                 test eax, eax
// 009e92d8  7449                 je 0x9e9323
// 009e92da  83782000             cmp dword ptr [eax + 0x20], 0
// 009e92de  7443                 je 0x9e9323
// 009e92e0  8b4620               mov eax, dword ptr [esi + 0x20]
// 009e92e3  57                   push edi
// 009e92e4  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 009e92ea  6a00                 push 0
// 009e92ec  6a00                 push 0
// 009e92ee  6a31                 push 0x31
// 009e92f0  50                   push eax
// 009e92f1  ffd7                 call edi
// 009e92f3  50                   push eax
// 009e92f4  e8f598f9ff           call 0x982bee
// 009e92f9  85c0                 test eax, eax
// 009e92fb  7514                 jne 0x9e9311
// 009e92fd  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 009e9303  6a01                 push 1
// 009e9305  50                   push eax
// 009e9306  6a30                 push 0x30
// 009e9308  51                   push ecx
// 009e9309  ffd7                 call edi
// 009e930b  5f                   pop edi
// 009e930c  5e                   pop esi
// 009e930d  8bc3                 mov eax, ebx
// 009e930f  5b                   pop ebx
// 009e9310  c3                   ret 
// 009e9311  8b4004               mov eax, dword ptr [eax + 4]
// 009e9314  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 009e931a  6a01                 push 1
// 009e931c  50                   push eax
// 009e931d  6a30                 push 0x30
// 009e931f  51                   push ecx
// 009e9320  ffd7                 call edi
// 009e9322  5f                   pop edi
// 009e9323  5e                   pop esi
// 009e9324  8bc3                 mov eax, ebx
// 009e9326  5b                   pop ebx
// 009e9327  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Controls\Dialog\XTPColorDialog.cpp (function ?OnInitDialog@CXTPColorDialog@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Dialog/XTPColorDialog.cpp
