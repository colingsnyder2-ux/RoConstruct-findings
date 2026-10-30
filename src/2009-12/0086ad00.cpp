// roc 2009-12 0086ad00  unit: CXTPPropertyGridItemBool  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ad00
//
// 0086ad00  6aff                 push -1
// 0086ad02  6819ba9500           push 0x95ba19
// 0086ad07  64a100000000         mov eax, dword ptr fs:[0]
// 0086ad0d  50                   push eax
// 0086ad0e  51                   push ecx
// 0086ad0f  56                   push esi
// 0086ad10  57                   push edi
// 0086ad11  a10052b600           mov eax, dword ptr [0xb65200]
// 0086ad16  33c4                 xor eax, esp
// 0086ad18  50                   push eax
// 0086ad19  8d442410             lea eax, [esp + 0x10]
// 0086ad1d  64a300000000         mov dword ptr fs:[0], eax
// 0086ad23  8bf1                 mov esi, ecx
// 0086ad25  8d4c240c             lea ecx, [esp + 0xc]
// 0086ad29  c7868c00000005000000 mov dword ptr [esi + 0x8c], 5
// 0086ad33  ff1574de9800         call dword ptr [0x98de74]
// 0086ad39  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0086ad41  e85a3b0000           call 0x86e8a0
// 0086ad46  8b10                 mov edx, dword ptr [eax]
// 0086ad48  8b5208               mov edx, dword ptr [edx + 8]
// 0086ad4b  681f250000           push 0x251f
// 0086ad50  8d4c2410             lea ecx, [esp + 0x10]
// 0086ad54  51                   push ecx
// 0086ad55  8bc8                 mov ecx, eax
// 0086ad57  ffd2                 call edx
// 0086ad59  85c0                 test eax, eax
// 0086ad5b  7449                 je 0x86ada6
// 0086ad5d  6a00                 push 0
// 0086ad5f  6a0a                 push 0xa
// 0086ad61  8d4c2414             lea ecx, [esp + 0x14]
// 0086ad65  ff1580d69800         call dword ptr [0x98d680]
// 0086ad6b  83f8ff               cmp eax, -1
// 0086ad6e  7436                 je 0x86ada6
// 0086ad70  6a0a                 push 0xa
// 0086ad72  6a00                 push 0
// 0086ad74  8d4c2414             lea ecx, [esp + 0x14]
// 0086ad78  ff1580de9800         call dword ptr [0x98de80]
// 0086ad7e  50                   push eax
// 0086ad7f  8d8614010000         lea eax, [esi + 0x114]
// 0086ad85  50                   push eax
// 0086ad86  e893b60b00           call 0x92641e
// 0086ad8b  6a0a                 push 0xa
// 0086ad8d  6a01                 push 1
// 0086ad8f  8d4c2414             lea ecx, [esp + 0x14]
// 0086ad93  ff1580de9800         call dword ptr [0x98de80]
// 0086ad99  50                   push eax
// 0086ad9a  8d8e18010000         lea ecx, [esi + 0x118]
// 0086ada0  51                   push ecx
// 0086ada1  e878b60b00           call 0x92641e
// 0086ada6  8b16                 mov edx, dword ptr [esi]
// 0086ada8  8b442420             mov eax, dword ptr [esp + 0x20]
// 0086adac  8b92e4000000         mov edx, dword ptr [edx + 0xe4]
// 0086adb2  50                   push eax
// 0086adb3  8bce                 mov ecx, esi
// 0086adb5  ffd2                 call edx
// 0086adb7  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0086adbd  8b38                 mov edi, dword ptr [eax]
// 0086adbf  6aff                 push -1
// 0086adc1  6a00                 push 0
// 0086adc3  8d8e14010000         lea ecx, [esi + 0x114]
// 0086adc9  ff1580de9800         call dword ptr [0x98de80]
// 0086adcf  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0086add5  8b5758               mov edx, dword ptr [edi + 0x58]
// 0086add8  50                   push eax
// 0086add9  ffd2                 call edx
// 0086addb  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0086ade1  8b38                 mov edi, dword ptr [eax]
// 0086ade3  6aff                 push -1
// 0086ade5  6a00                 push 0
// 0086ade7  8d8e18010000         lea ecx, [esi + 0x118]
// 0086aded  ff1580de9800         call dword ptr [0x98de80]
// 0086adf3  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0086adf9  8b5758               mov edx, dword ptr [edi + 0x58]
// 0086adfc  50                   push eax
// 0086adfd  ffd2                 call edx
// 0086adff  8d86a4000000         lea eax, [esi + 0xa4]
// 0086ae05  50                   push eax
// 0086ae06  8d8ea8000000         lea ecx, [esi + 0xa8]
// 0086ae0c  c7467c01000000       mov dword ptr [esi + 0x7c], 1
// 0086ae13  ff1538d59800         call dword ptr [0x98d538]
// 0086ae19  8d4c240c             lea ecx, [esp + 0xc]
// 0086ae1d  c7861c01000000000000 mov dword ptr [esi + 0x11c], 0
// 0086ae27  ff15c0de9800         call dword ptr [0x98dec0]
// 0086ae2d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086ae31  64890d00000000       mov dword ptr fs:[0], ecx
// 0086ae38  59                   pop ecx
// 0086ae39  5f                   pop edi
// 0086ae3a  5e                   pop esi
// 0086ae3b  83c410               add esp, 0x10
// 0086ae3e  c20400               ret 4
// copied from an identical function in another client (function ?_Init@CXTPPropertyGridItemBool@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemBool.cpp