// roc 2009-12 00564990  unit: CXTPRichRender::XTextHost  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00564990
//
// 00564990  8b442404             mov eax, dword ptr [esp + 4]
// 00564994  50                   push eax
// 00564995  ff1560cd9800         call dword ptr [0x98cd60]
// 0056499b  85c0                 test eax, eax
// 0056499d  7416                 je 0x5649b5
// 0056499f  8b400c               mov eax, dword ptr [eax + 0xc]
// 005649a2  833800               cmp dword ptr [eax], 0
// 005649a5  740e                 je 0x5649b5
// 005649a7  8b08                 mov ecx, dword ptr [eax]
// 005649a9  8b01                 mov eax, dword ptr [ecx]
// 005649ab  89442404             mov dword ptr [esp + 4], eax
// 005649af  ff2580cd9800         jmp dword ptr [0x98cd80]
// 005649b5  33c0                 xor eax, eax
// 005649b7  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?DomainNameToIP@SocketLayer@@QAEPBDPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
