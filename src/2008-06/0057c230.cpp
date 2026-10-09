// roc 2008-06 0057c230  unit: RBX::VInstance::?$SignalDesc  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c230
//
// 0057c230  8b4104               mov eax, dword ptr [ecx + 4]
// 0057c233  85c0                 test eax, eax
// 0057c235  7414                 je 0x57c24b
// 0057c237  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057c23b  eb03                 jmp 0x57c240
// 0057c23d  8d4900               lea ecx, [ecx]
// 0057c240  394810               cmp dword ptr [eax + 0x10], ecx
// 0057c243  7408                 je 0x57c24d
// 0057c245  8b00                 mov eax, dword ptr [eax]
// 0057c247  85c0                 test eax, eax
// 0057c249  75f5                 jne 0x57c240
// 0057c24b  33c0                 xor eax, eax
// 0057c24d  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findFirstChildByTag@XmlElement@@QBEPBV1@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
