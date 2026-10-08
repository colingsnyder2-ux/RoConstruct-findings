// roc 2011-06 0058e090  unit: RBX::TaskScheduler::Job::W4SleepAdjustMethod::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058e090
//
// 0058e090  56                   push esi
// 0058e091  6a08                 push 8
// 0058e093  8bf1                 mov esi, ecx
// 0058e095  e8c4bf2700           call 0x80a05e
// 0058e09a  83c404               add esp, 4
// 0058e09d  85c0                 test eax, eax
// 0058e09f  740e                 je 0x58e0af
// 0058e0a1  c7008c8ea800         mov dword ptr [eax], 0xa88e8c
// 0058e0a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058e0aa  894804               mov dword ptr [eax + 4], ecx
// 0058e0ad  5e                   pop esi
// 0058e0ae  c3                   ret 
// 0058e0af  33c0                 xor eax, eax
// 0058e0b1  5e                   pop esi
// 0058e0b2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
