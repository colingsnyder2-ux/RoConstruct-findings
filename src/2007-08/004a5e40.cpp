// roc 2007-08 004a5e40  unit: RBX::VInstance::?$NonFactoryProduct  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a5e40
//
// 004a5e40  8b442404             mov eax, dword ptr [esp + 4]
// 004a5e44  85c0                 test eax, eax
// 004a5e46  7416                 je 0x4a5e5e
// 004a5e48  eb06                 jmp 0x4a5e50
// 004a5e4a  8d9b00000000         lea ebx, [ebx]
// 004a5e50  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 004a5e56  3bc1                 cmp eax, ecx
// 004a5e58  7409                 je 0x4a5e63
// 004a5e5a  85c0                 test eax, eax
// 004a5e5c  75f2                 jne 0x4a5e50
// 004a5e5e  32c0                 xor al, al
// 004a5e60  c20400               ret 4
// 004a5e63  b001                 mov al, 1
// 004a5e65  c20400               ret 4
// library rbxgs/v8tree\Instance.cpp (function ?isAncestorOf@Instance@RBX@@QBE_NPBV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
