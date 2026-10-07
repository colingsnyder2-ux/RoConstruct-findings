// roc 2012-06 0059ca90  unit: VAuthoringSettings::?$FactoryProduct  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059ca90
//
// 0059ca90  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 0059ca94  7626                 jbe 0x59cabc
// 0059ca96  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0059ca99  85c0                 test eax, eax
// 0059ca9b  741f                 je 0x59cabc
// 0059ca9d  8b48fc               mov ecx, dword ptr [eax - 4]
// 0059caa0  56                   push esi
// 0059caa1  8d70fc               lea esi, [eax - 4]
// 0059caa4  6890a75900           push 0x59a790
// 0059caa9  51                   push ecx
// 0059caaa  6a10                 push 0x10
// 0059caac  50                   push eax
// 0059caad  e8be673e00           call 0x983270
// 0059cab2  56                   push esi
// 0059cab3  e802593e00           call 0x9823ba
// 0059cab8  83c404               add esp, 4
// 0059cabb  5e                   pop esi
// 0059cabc  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??1BPSTracker@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
