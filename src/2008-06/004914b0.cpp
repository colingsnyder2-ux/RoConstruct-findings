// roc 2008-06 004914b0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004914b0
//
// 004914b0  85c9                 test ecx, ecx
// 004914b2  7405                 je 0x4914b9
// 004914b4  8d5118               lea edx, [ecx + 0x18]
// 004914b7  eb02                 jmp 0x4914bb
// 004914b9  33d2                 xor edx, edx
// 004914bb  8b442408             mov eax, dword ptr [esp + 8]
// 004914bf  85c0                 test eax, eax
// 004914c1  7405                 je 0x4914c8
// 004914c3  83c010               add eax, 0x10
// 004914c6  eb02                 jmp 0x4914ca
// 004914c8  33c0                 xor eax, eax
// 004914ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004914ce  56                   push esi
// 004914cf  8b31                 mov esi, dword ptr [ecx]
// 004914d1  52                   push edx
// 004914d2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004914d6  52                   push edx
// 004914d7  50                   push eax
// 004914d8  8b4604               mov eax, dword ptr [esi + 4]
// 004914db  ffd0                 call eax
// 004914dd  5e                   pop esi
// 004914de  c20c00               ret 0xc
// library openrbx-client/App\v8tree\Instance.cpp (function ?readValue@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@UBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
