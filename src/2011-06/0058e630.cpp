// roc 2011-06 0058e630  unit: RBX::Time::W4SampleMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058e630
//
// 0058e630  56                   push esi
// 0058e631  6a08                 push 8
// 0058e633  8bf1                 mov esi, ecx
// 0058e635  e824ba2700           call 0x80a05e
// 0058e63a  83c404               add esp, 4
// 0058e63d  85c0                 test eax, eax
// 0058e63f  740e                 je 0x58e64f
// 0058e641  c700ec8ea800         mov dword ptr [eax], 0xa88eec
// 0058e647  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058e64a  894804               mov dword ptr [eax + 4], ecx
// 0058e64d  5e                   pop esi
// 0058e64e  c3                   ret 
// 0058e64f  33c0                 xor eax, eax
// 0058e651  5e                   pop esi
// 0058e652  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
