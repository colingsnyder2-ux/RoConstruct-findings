// roc 2011-06 00602a10  unit: RBX::UnifiedWidget  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00602a10
//
// 00602a10  8b4104               mov eax, dword ptr [ecx + 4]
// 00602a13  85c0                 test eax, eax
// 00602a15  7414                 je 0x602a2b
// 00602a17  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00602a1b  eb03                 jmp 0x602a20
// 00602a1d  8d4900               lea ecx, [ecx]
// 00602a20  394810               cmp dword ptr [eax + 0x10], ecx
// 00602a23  7408                 je 0x602a2d
// 00602a25  8b00                 mov eax, dword ptr [eax]
// 00602a27  85c0                 test eax, eax
// 00602a29  75f5                 jne 0x602a20
// 00602a2b  33c0                 xor eax, eax
// 00602a2d  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?findFirstChildByTag@XmlElement@@QBEPBV1@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
