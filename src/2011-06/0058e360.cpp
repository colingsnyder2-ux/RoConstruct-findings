// roc 2011-06 0058e360  unit: RBX::DebugSettings::W4ErrorReporting::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058e360
//
// 0058e360  56                   push esi
// 0058e361  6a08                 push 8
// 0058e363  8bf1                 mov esi, ecx
// 0058e365  e8f4bc2700           call 0x80a05e
// 0058e36a  83c404               add esp, 4
// 0058e36d  85c0                 test eax, eax
// 0058e36f  740e                 je 0x58e37f
// 0058e371  c700bc8ea800         mov dword ptr [eax], 0xa88ebc
// 0058e377  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058e37a  894804               mov dword ptr [eax + 4], ecx
// 0058e37d  5e                   pop esi
// 0058e37e  c3                   ret 
// 0058e37f  33c0                 xor eax, eax
// 0058e381  5e                   pop esi
// 0058e382  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
