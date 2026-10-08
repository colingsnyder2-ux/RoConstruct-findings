// roc 2008-06 004b5f40  unit: RBX::Network::VSharedStringDictionary::?$sp_counted_impl_p  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5f40
//
// 004b5f40  8b442404             mov eax, dword ptr [esp + 4]
// 004b5f44  50                   push eax
// 004b5f45  e8d6560b00           call 0x56b620
// 004b5f4a  85c0                 test eax, eax
// 004b5f4c  740d                 je 0x4b5f5b
// 004b5f4e  8d4c2404             lea ecx, [esp + 4]
// 004b5f52  51                   push ecx
// 004b5f53  8d4810               lea ecx, [eax + 0x10]
// 004b5f56  e8f5f9ffff           call 0x4b5950
// 004b5f5b  c20400               ret 4
// library rbxgs/humanoid\Humanoid.cpp (function ?fire@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@QAEXPAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
