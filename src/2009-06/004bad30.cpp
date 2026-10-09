// roc 2009-06 004bad30  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bad30
//
// 004bad30  85c9                 test ecx, ecx
// 004bad32  7405                 je 0x4bad39
// 004bad34  8d5118               lea edx, [ecx + 0x18]
// 004bad37  eb02                 jmp 0x4bad3b
// 004bad39  33d2                 xor edx, edx
// 004bad3b  8b442408             mov eax, dword ptr [esp + 8]
// 004bad3f  85c0                 test eax, eax
// 004bad41  7405                 je 0x4bad48
// 004bad43  83c010               add eax, 0x10
// 004bad46  eb02                 jmp 0x4bad4a
// 004bad48  33c0                 xor eax, eax
// 004bad4a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bad4e  56                   push esi
// 004bad4f  8b31                 mov esi, dword ptr [ecx]
// 004bad51  52                   push edx
// 004bad52  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004bad56  52                   push edx
// 004bad57  50                   push eax
// 004bad58  8b4604               mov eax, dword ptr [esi + 4]
// 004bad5b  ffd0                 call eax
// 004bad5d  5e                   pop esi
// 004bad5e  c20c00               ret 0xc
// library openrbx-client/App\v8tree\Instance.cpp (function ?readValue@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@UBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
