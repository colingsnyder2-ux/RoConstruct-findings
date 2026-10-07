// roc 2012-06 0059c970  unit: VAuthoringSettings::?$FactoryProduct  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059c970
//
// 0059c970  56                   push esi
// 0059c971  8bf1                 mov esi, ecx
// 0059c973  8b4608               mov eax, dword ptr [esi + 8]
// 0059c976  57                   push edi
// 0059c977  394604               cmp dword ptr [esi + 4], eax
// 0059c97a  7578                 jne 0x59c9f4
// 0059c97c  85c0                 test eax, eax
// 0059c97e  7509                 jne 0x59c989
// 0059c980  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0059c987  eb05                 jmp 0x59c98e
// 0059c989  03c0                 add eax, eax
// 0059c98b  894608               mov dword ptr [esi + 8], eax
// 0059c98e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059c992  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059c996  8b4608               mov eax, dword ptr [esi + 8]
// 0059c999  53                   push ebx
// 0059c99a  51                   push ecx
// 0059c99b  52                   push edx
// 0059c99c  50                   push eax
// 0059c99d  e88ee0ffff           call 0x59aa30
// 0059c9a2  33d2                 xor edx, edx
// 0059c9a4  83c40c               add esp, 0xc
// 0059c9a7  8bf8                 mov edi, eax
// 0059c9a9  395604               cmp dword ptr [esi + 4], edx
// 0059c9ac  7620                 jbe 0x59c9ce
// 0059c9ae  8bff                 mov edi, edi
// 0059c9b0  8b06                 mov eax, dword ptr [esi]
// 0059c9b2  8d0cd500000000       lea ecx, [edx*8]
// 0059c9b9  8b1c08               mov ebx, dword ptr [eax + ecx]
// 0059c9bc  03c1                 add eax, ecx
// 0059c9be  891c39               mov dword ptr [ecx + edi], ebx
// 0059c9c1  8b4004               mov eax, dword ptr [eax + 4]
// 0059c9c4  42                   inc edx
// 0059c9c5  89443904             mov dword ptr [ecx + edi + 4], eax
// 0059c9c9  3b5604               cmp edx, dword ptr [esi + 4]
// 0059c9cc  72e2                 jb 0x59c9b0
// 0059c9ce  8b06                 mov eax, dword ptr [esi]
// 0059c9d0  85c0                 test eax, eax
// 0059c9d2  741d                 je 0x59c9f1
// 0059c9d4  8b48fc               mov ecx, dword ptr [eax - 4]
// 0059c9d7  8d58fc               lea ebx, [eax - 4]
// 0059c9da  6890a75900           push 0x59a790
// 0059c9df  51                   push ecx
// 0059c9e0  6a08                 push 8
// 0059c9e2  50                   push eax
// 0059c9e3  e888683e00           call 0x983270
// 0059c9e8  53                   push ebx
// 0059c9e9  e8cc593e00           call 0x9823ba
// 0059c9ee  83c404               add esp, 4
// 0059c9f1  893e                 mov dword ptr [esi], edi
// 0059c9f3  5b                   pop ebx
// 0059c9f4  8b4e04               mov ecx, dword ptr [esi + 4]
// 0059c9f7  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059c9fb  3bca                 cmp ecx, edx
// 0059c9fd  7417                 je 0x59ca16
// 0059c9ff  90                   nop 
// 0059ca00  8b06                 mov eax, dword ptr [esi]
// 0059ca02  8b7cc8f8             mov edi, dword ptr [eax + ecx*8 - 8]
// 0059ca06  8d04c8               lea eax, [eax + ecx*8]
// 0059ca09  8938                 mov dword ptr [eax], edi
// 0059ca0b  8b78fc               mov edi, dword ptr [eax - 4]
// 0059ca0e  49                   dec ecx
// 0059ca0f  897804               mov dword ptr [eax + 4], edi
// 0059ca12  3bca                 cmp ecx, edx
// 0059ca14  75ea                 jne 0x59ca00
// 0059ca16  8b0e                 mov ecx, dword ptr [esi]
// 0059ca18  8d04d1               lea eax, [ecx + edx*8]
// 0059ca1b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059ca1f  8b11                 mov edx, dword ptr [ecx]
// 0059ca21  8910                 mov dword ptr [eax], edx
// 0059ca23  8b4904               mov ecx, dword ptr [ecx + 4]
// 0059ca26  894804               mov dword ptr [eax + 4], ecx
// 0059ca29  ff4604               inc dword ptr [esi + 4]
// 0059ca2c  5f                   pop edi
// 0059ca2d  5e                   pop esi
// 0059ca2e  c21000               ret 0x10
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Insert@?$List@U?$RangeNode@Uuint24_t@RakNet@@@DataStructures@@@DataStructures@@QAEXABU?$RangeNode@Uuint24_t@RakNet@@@2@IPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
