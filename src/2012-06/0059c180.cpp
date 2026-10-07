// roc 2012-06 0059c180  unit: VAuthoringSettings::?$FactoryProduct  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059c180
//
// 0059c180  83790c00             cmp dword ptr [ecx + 0xc], 0
// 0059c184  7625                 jbe 0x59c1ab
// 0059c186  8b01                 mov eax, dword ptr [ecx]
// 0059c188  85c0                 test eax, eax
// 0059c18a  741f                 je 0x59c1ab
// 0059c18c  8b48fc               mov ecx, dword ptr [eax - 4]
// 0059c18f  56                   push esi
// 0059c190  8d70fc               lea esi, [eax - 4]
// 0059c193  6890a75900           push 0x59a790
// 0059c198  51                   push ecx
// 0059c199  6a10                 push 0x10
// 0059c19b  50                   push eax
// 0059c19c  e8cf703e00           call 0x983270
// 0059c1a1  56                   push esi
// 0059c1a2  e813623e00           call 0x9823ba
// 0059c1a7  83c404               add esp, 4
// 0059c1aa  5e                   pop esi
// 0059c1ab  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??1?$Queue@UTimeAndValue2@BPSTracker@RakNet@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
