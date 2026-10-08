// roc 2007-08 0055d330  unit: RBX::DataModel  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d330
//
// 0055d330  8b4104               mov eax, dword ptr [ecx + 4]
// 0055d333  85c0                 test eax, eax
// 0055d335  7414                 je 0x55d34b
// 0055d337  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055d33b  eb03                 jmp 0x55d340
// 0055d33d  8d4900               lea ecx, [ecx]
// 0055d340  39480c               cmp dword ptr [eax + 0xc], ecx
// 0055d343  7408                 je 0x55d34d
// 0055d345  8b00                 mov eax, dword ptr [eax]
// 0055d347  85c0                 test eax, eax
// 0055d349  75f5                 jne 0x55d340
// 0055d34b  33c0                 xor eax, eax
// 0055d34d  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?findFirstChildByTag@XmlElement@@QBEPBV1@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
