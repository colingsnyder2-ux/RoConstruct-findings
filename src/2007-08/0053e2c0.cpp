// roc 2007-08 0053e2c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e2c0
//
// 0053e2c0  8b442404             mov eax, dword ptr [esp + 4]
// 0053e2c4  85c0                 test eax, eax
// 0053e2c6  740e                 je 0x53e2d6
// 0053e2c8  3bc1                 cmp eax, ecx
// 0053e2ca  740f                 je 0x53e2db
// 0053e2cc  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 0053e2d2  85c0                 test eax, eax
// 0053e2d4  75f2                 jne 0x53e2c8
// 0053e2d6  32c0                 xor al, al
// 0053e2d8  c20400               ret 4
// 0053e2db  b001                 mov al, 1
// 0053e2dd  c20400               ret 4
// library rbxgs/v8tree\Instance.cpp (function ?contains@Instance@RBX@@QBE_NPBV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
