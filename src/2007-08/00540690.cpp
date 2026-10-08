// roc 2007-08 00540690  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540690
//
// 00540690  56                   push esi
// 00540691  6a08                 push 8
// 00540693  8bf1                 mov esi, ecx
// 00540695  e85cf80e00           call 0x62fef6
// 0054069a  83c404               add esp, 4
// 0054069d  85c0                 test eax, eax
// 0054069f  740e                 je 0x5406af
// 005406a1  c700dc657a00         mov dword ptr [eax], 0x7a65dc
// 005406a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005406aa  894804               mov dword ptr [eax + 4], ecx
// 005406ad  5e                   pop esi
// 005406ae  c3                   ret 
// 005406af  33c0                 xor eax, eax
// 005406b1  5e                   pop esi
// 005406b2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
