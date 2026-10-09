// roc 2009-12 0064e6c0  unit: RBX::Script::W4ScriptExecutionLocation::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064e6c0
//
// 0064e6c0  56                   push esi
// 0064e6c1  6a08                 push 8
// 0064e6c3  8bf1                 mov esi, ecx
// 0064e6c5  e896511a00           call 0x7f3860
// 0064e6ca  83c404               add esp, 4
// 0064e6cd  85c0                 test eax, eax
// 0064e6cf  740e                 je 0x64e6df
// 0064e6d1  c7009ccf9c00         mov dword ptr [eax], 0x9ccf9c
// 0064e6d7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064e6da  894804               mov dword ptr [eax + 4], ecx
// 0064e6dd  5e                   pop esi
// 0064e6de  c3                   ret 
// 0064e6df  33c0                 xor eax, eax
// 0064e6e1  5e                   pop esi
// 0064e6e2  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
