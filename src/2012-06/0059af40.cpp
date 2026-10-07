// roc 2012-06 0059af40  unit: VAuthoringSettings::?$FactoryProduct  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059af40
//
// 0059af40  53                   push ebx
// 0059af41  56                   push esi
// 0059af42  8bd9                 mov ebx, ecx
// 0059af44  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0059af47  3b4328               cmp eax, dword ptr [ebx + 0x28]
// 0059af4a  57                   push edi
// 0059af4b  8d7b20               lea edi, [ebx + 0x20]
// 0059af4e  7508                 jne 0x59af58
// 0059af50  33c0                 xor eax, eax
// 0059af52  5f                   pop edi
// 0059af53  5e                   pop esi
// 0059af54  5b                   pop ebx
// 0059af55  c20800               ret 8
// 0059af58  51                   push ecx
// 0059af59  8b4b50               mov ecx, dword ptr [ebx + 0x50]
// 0059af5c  8bc4                 mov eax, esp
// 0059af5e  8908                 mov dword ptr [eax], ecx
// 0059af60  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059af64  51                   push ecx
// 0059af65  8bc4                 mov eax, esp
// 0059af67  8910                 mov dword ptr [eax], edx
// 0059af69  e832d60200           call 0x5c85a0
// 0059af6e  83c408               add esp, 8
// 0059af71  84c0                 test al, al
// 0059af73  75db                 jne 0x59af50
// 0059af75  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059af79  2b7350               sub esi, dword ptr [ebx + 0x50]
// 0059af7c  8b5704               mov edx, dword ptr [edi + 4]
// 0059af7f  8b4708               mov eax, dword ptr [edi + 8]
// 0059af82  81e6ffffff00         and esi, 0xffffff
// 0059af88  3bd0                 cmp edx, eax
// 0059af8a  7706                 ja 0x59af92
// 0059af8c  2bc2                 sub eax, edx
// 0059af8e  8bc8                 mov ecx, eax
// 0059af90  eb07                 jmp 0x59af99
// 0059af92  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0059af95  2bca                 sub ecx, edx
// 0059af97  03c8                 add ecx, eax
// 0059af99  3bf1                 cmp esi, ecx
// 0059af9b  73b3                 jae 0x59af50
// 0059af9d  56                   push esi
// 0059af9e  8bcf                 mov ecx, edi
// 0059afa0  e8dbf5ffff           call 0x59a580
// 0059afa5  8b5008               mov edx, dword ptr [eax + 8]
// 0059afa8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059afac  8911                 mov dword ptr [ecx], edx
// 0059afae  8b400c               mov eax, dword ptr [eax + 0xc]
// 0059afb1  894104               mov dword ptr [ecx + 4], eax
// 0059afb4  56                   push esi
// 0059afb5  8bcf                 mov ecx, edi
// 0059afb7  e8c4f5ffff           call 0x59a580
// 0059afbc  8b00                 mov eax, dword ptr [eax]
// 0059afbe  5f                   pop edi
// 0059afbf  5e                   pop esi
// 0059afc0  5b                   pop ebx
// 0059afc1  c20800               ret 8
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?GetMessageNumberNodeByDatagramIndex@ReliabilityLayer@RakNet@@AAEPAUMessageNumberNode@12@Uuint24_t@2@PA_K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
