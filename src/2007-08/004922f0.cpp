// roc 2007-08 004922f0  unit: RBX::Network::P8Players::?$GetImpl  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004922f0
//
// 004922f0  56                   push esi
// 004922f1  6a20                 push 0x20
// 004922f3  8bf1                 mov esi, ecx
// 004922f5  e8fcdb1900           call 0x62fef6
// 004922fa  33d2                 xor edx, edx
// 004922fc  83c404               add esp, 4
// 004922ff  3bc2                 cmp eax, edx
// 00492301  741a                 je 0x49231d
// 00492303  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00492307  8910                 mov dword ptr [eax], edx
// 00492309  895004               mov dword ptr [eax + 4], edx
// 0049230c  895008               mov dword ptr [eax + 8], edx
// 0049230f  89480c               mov dword ptr [eax + 0xc], ecx
// 00492312  895010               mov dword ptr [eax + 0x10], edx
// 00492315  895018               mov dword ptr [eax + 0x18], edx
// 00492318  89501c               mov dword ptr [eax + 0x1c], edx
// 0049231b  eb02                 jmp 0x49231f
// 0049231d  33c0                 xor eax, eax
// 0049231f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00492322  3bca                 cmp ecx, edx
// 00492324  750a                 jne 0x492330
// 00492326  894604               mov dword ptr [esi + 4], eax
// 00492329  894608               mov dword ptr [esi + 8], eax
// 0049232c  5e                   pop esi
// 0049232d  c20400               ret 4
// 00492330  8901                 mov dword ptr [ecx], eax
// 00492332  894608               mov dword ptr [esi + 8], eax
// 00492335  5e                   pop esi
// 00492336  c20400               ret 4
// library rbxgs/v8tree\Instance.cpp (function ?addChild@XmlElement@@QAEPAV1@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
