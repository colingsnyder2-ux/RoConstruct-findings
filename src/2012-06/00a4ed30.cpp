// roc 2012-06 00a4ed30  unit: PAVCXTPTabManagerAtom::?$CArray  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4ed30
//
// 00a4ed30  83ec24               sub esp, 0x24
// 00a4ed33  55                   push ebp
// 00a4ed34  8be9                 mov ebp, ecx
// 00a4ed36  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a4ed3a  56                   push esi
// 00a4ed3b  8bb188000000         mov esi, dword ptr [ecx + 0x88]
// 00a4ed41  8b06                 mov eax, dword ptr [esi]
// 00a4ed43  c744240800000000     mov dword ptr [esp + 8], 0
// 00a4ed4b  85c0                 test eax, eax
// 00a4ed4d  0f846c010000         je 0xa4eebf
// 00a4ed53  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a4ed57  3b5604               cmp edx, dword ptr [esi + 4]
// 00a4ed5a  0f8d5f010000         jge 0xa4eebf
// 00a4ed60  53                   push ebx
// 00a4ed61  8b5cd004             mov ebx, dword ptr [eax + edx*8 + 4]
// 00a4ed65  57                   push edi
// 00a4ed66  8b3cd0               mov edi, dword ptr [eax + edx*8]
// 00a4ed69  8b85e0000000         mov eax, dword ptr [ebp + 0xe0]
// 00a4ed6f  83782000             cmp dword ptr [eax + 0x20], 0
// 00a4ed73  0f8494000000         je 0xa4ee0d
// 00a4ed79  3bfb                 cmp edi, ebx
// 00a4ed7b  0f8f3c010000         jg 0xa4eebd
// 00a4ed81  85ff                 test edi, edi
// 00a4ed83  0f8c34010000         jl 0xa4eebd
// 00a4ed89  3b795c               cmp edi, dword ptr [ecx + 0x5c]
// 00a4ed8c  0f8d2b010000         jge 0xa4eebd
// 00a4ed92  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00a4ed95  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00a4ed98  85f6                 test esi, esi
// 00a4ed9a  0f841d010000         je 0xa4eebd
// 00a4eda0  395664               cmp dword ptr [esi + 0x64], edx
// 00a4eda3  0f8514010000         jne 0xa4eebd
// 00a4eda9  8b4660               mov eax, dword ptr [esi + 0x60]
// 00a4edac  397004               cmp dword ptr [eax + 4], esi
// 00a4edaf  745c                 je 0xa4ee0d
// 00a4edb1  8bce                 mov ecx, esi
// 00a4edb3  e8c880f9ff           call 0x9e6e80
// 00a4edb8  85c0                 test eax, eax
// 00a4edba  743b                 je 0xa4edf7
// 00a4edbc  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00a4edc2  8b11                 mov edx, dword ptr [ecx]
// 00a4edc4  8b5220               mov edx, dword ptr [edx + 0x20]
// 00a4edc7  56                   push esi
// 00a4edc8  8d442418             lea eax, [esp + 0x18]
// 00a4edcc  50                   push eax
// 00a4edcd  ffd2                 call edx
// 00a4edcf  50                   push eax
// 00a4edd0  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a4edd4  50                   push eax
// 00a4edd5  8d4c242c             lea ecx, [esp + 0x2c]
// 00a4edd9  51                   push ecx
// 00a4edda  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a4ede0  85c0                 test eax, eax
// 00a4ede2  7413                 je 0xa4edf7
// 00a4ede4  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00a4edea  8b11                 mov edx, dword ptr [ecx]
// 00a4edec  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a4edf0  8b5234               mov edx, dword ptr [edx + 0x34]
// 00a4edf3  56                   push esi
// 00a4edf4  50                   push eax
// 00a4edf5  ffd2                 call edx
// 00a4edf7  47                   inc edi
// 00a4edf8  3bfb                 cmp edi, ebx
// 00a4edfa  0f8fbd000000         jg 0xa4eebd
// 00a4ee00  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a4ee04  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a4ee08  e974ffffff           jmp 0xa4ed81
// 00a4ee0d  3bdf                 cmp ebx, edi
// 00a4ee0f  0f8ca8000000         jl 0xa4eebd
// 00a4ee15  85db                 test ebx, ebx
// 00a4ee17  0f8ca0000000         jl 0xa4eebd
// 00a4ee1d  3b595c               cmp ebx, dword ptr [ecx + 0x5c]
// 00a4ee20  0f8d97000000         jge 0xa4eebd
// 00a4ee26  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00a4ee29  8b3498               mov esi, dword ptr [eax + ebx*4]
// 00a4ee2c  85f6                 test esi, esi
// 00a4ee2e  0f8489000000         je 0xa4eebd
// 00a4ee34  395664               cmp dword ptr [esi + 0x64], edx
// 00a4ee37  7566                 jne 0xa4ee9f
// 00a4ee39  8bce                 mov ecx, esi
// 00a4ee3b  e84080f9ff           call 0x9e6e80
// 00a4ee40  85c0                 test eax, eax
// 00a4ee42  7449                 je 0xa4ee8d
// 00a4ee44  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00a4ee4a  8b11                 mov edx, dword ptr [ecx]
// 00a4ee4c  8b5220               mov edx, dword ptr [edx + 0x20]
// 00a4ee4f  56                   push esi
// 00a4ee50  8d442428             lea eax, [esp + 0x28]
// 00a4ee54  50                   push eax
// 00a4ee55  ffd2                 call edx
// 00a4ee57  50                   push eax
// 00a4ee58  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a4ee5c  50                   push eax
// 00a4ee5d  8d4c241c             lea ecx, [esp + 0x1c]
// 00a4ee61  51                   push ecx
// 00a4ee62  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a4ee68  85c0                 test eax, eax
// 00a4ee6a  7421                 je 0xa4ee8d
// 00a4ee6c  8b5660               mov edx, dword ptr [esi + 0x60]
// 00a4ee6f  397204               cmp dword ptr [edx + 4], esi
// 00a4ee72  7506                 jne 0xa4ee7a
// 00a4ee74  89742410             mov dword ptr [esp + 0x10], esi
// 00a4ee78  eb13                 jmp 0xa4ee8d
// 00a4ee7a  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00a4ee80  8b01                 mov eax, dword ptr [ecx]
// 00a4ee82  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a4ee86  8b4034               mov eax, dword ptr [eax + 0x34]
// 00a4ee89  56                   push esi
// 00a4ee8a  52                   push edx
// 00a4ee8b  ffd0                 call eax
// 00a4ee8d  4b                   dec ebx
// 00a4ee8e  3bdf                 cmp ebx, edi
// 00a4ee90  7c0d                 jl 0xa4ee9f
// 00a4ee92  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a4ee96  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a4ee9a  e976ffffff           jmp 0xa4ee15
// 00a4ee9f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a4eea3  85c0                 test eax, eax
// 00a4eea5  7416                 je 0xa4eebd
// 00a4eea7  8bade0000000         mov ebp, dword ptr [ebp + 0xe0]
// 00a4eead  8b5500               mov edx, dword ptr [ebp]
// 00a4eeb0  8b5234               mov edx, dword ptr [edx + 0x34]
// 00a4eeb3  50                   push eax
// 00a4eeb4  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a4eeb8  50                   push eax
// 00a4eeb9  8bcd                 mov ecx, ebp
// 00a4eebb  ffd2                 call edx
// 00a4eebd  5f                   pop edi
// 00a4eebe  5b                   pop ebx
// 00a4eebf  5e                   pop esi
// 00a4eec0  5d                   pop ebp
// 00a4eec1  83c424               add esp, 0x24
// 00a4eec4  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawRowItems@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@ABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
