// roc 2008-06 005574b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005574b0
//
// 005574b0  8b442404             mov eax, dword ptr [esp + 4]
// 005574b4  85c0                 test eax, eax
// 005574b6  740e                 je 0x5574c6
// 005574b8  3bc1                 cmp eax, ecx
// 005574ba  740f                 je 0x5574cb
// 005574bc  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 005574c2  85c0                 test eax, eax
// 005574c4  75f2                 jne 0x5574b8
// 005574c6  32c0                 xor al, al
// 005574c8  c20400               ret 4
// 005574cb  b001                 mov al, 1
// 005574cd  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ?contains@Instance@RBX@@QBE_NPBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
