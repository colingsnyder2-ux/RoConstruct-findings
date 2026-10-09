// roc 2008-06 004c9c50  unit: RBX::VInstance::?$NonFactoryProduct  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c9c50
//
// 004c9c50  8b442404             mov eax, dword ptr [esp + 4]
// 004c9c54  85c0                 test eax, eax
// 004c9c56  7416                 je 0x4c9c6e
// 004c9c58  eb06                 jmp 0x4c9c60
// 004c9c5a  8d9b00000000         lea ebx, [ebx]
// 004c9c60  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 004c9c66  3bc1                 cmp eax, ecx
// 004c9c68  7409                 je 0x4c9c73
// 004c9c6a  85c0                 test eax, eax
// 004c9c6c  75f2                 jne 0x4c9c60
// 004c9c6e  32c0                 xor al, al
// 004c9c70  c20400               ret 4
// 004c9c73  b001                 mov al, 1
// 004c9c75  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ?isAncestorOf@Instance@RBX@@QBE_NPBV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
