// roc 2012-06 005c9370  unit: RBX::AdornRbxGfx  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c9370
//
// 005c9370  56                   push esi
// 005c9371  8bf1                 mov esi, ecx
// 005c9373  8b06                 mov eax, dword ptr [esi]
// 005c9375  83f8ff               cmp eax, -1
// 005c9378  740d                 je 0x5c9387
// 005c937a  50                   push eax
// 005c937b  ff15e821b200         call dword ptr [0xb221e8]
// 005c9381  c706ffffffff         mov dword ptr [esi], 0xffffffff
// 005c9387  5e                   pop esi
// 005c9388  c3                   ret 
// library rbx2016-raknet/SignaledEvent.cpp (function ?CloseEvent@SignaledEvent@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SignaledEvent.cpp
