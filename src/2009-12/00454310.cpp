// roc 2009-12 00454310  unit: RBX::PartInstance::W4Material::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00454310
//
// 00454310  56                   push esi
// 00454311  6a08                 push 8
// 00454313  8bf1                 mov esi, ecx
// 00454315  e846f53900           call 0x7f3860
// 0045431a  83c404               add esp, 4
// 0045431d  85c0                 test eax, eax
// 0045431f  740e                 je 0x45432f
// 00454321  c70030be9a00         mov dword ptr [eax], 0x9abe30
// 00454327  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045432a  894804               mov dword ptr [eax + 4], ecx
// 0045432d  5e                   pop esi
// 0045432e  c3                   ret 
// 0045432f  33c0                 xor eax, eax
// 00454331  5e                   pop esi
// 00454332  c3                   ret 
// library rbxgs-net/Server.cpp (function ?clone@?$holder@H@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
