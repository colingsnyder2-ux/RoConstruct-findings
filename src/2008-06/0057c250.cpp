// roc 2008-06 0057c250  unit: RBX::VInstance::?$SignalDesc  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c250
//
// 0057c250  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057c254  8b01                 mov eax, dword ptr [ecx]
// 0057c256  85c0                 test eax, eax
// 0057c258  7411                 je 0x57c26b
// 0057c25a  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0057c25d  8d4900               lea ecx, [ecx]
// 0057c260  394810               cmp dword ptr [eax + 0x10], ecx
// 0057c263  7408                 je 0x57c26d
// 0057c265  8b00                 mov eax, dword ptr [eax]
// 0057c267  85c0                 test eax, eax
// 0057c269  75f5                 jne 0x57c260
// 0057c26b  33c0                 xor eax, eax
// 0057c26d  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findNextChildWithSameTag@XmlElement@@QBEPBV1@PBV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
