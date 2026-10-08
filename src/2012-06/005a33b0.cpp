// roc 2012-06 005a33b0  unit: RBX::JavaScript::VMarshalledFunction::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a33b0
//
// 005a33b0  8b442404             mov eax, dword ptr [esp + 4]
// 005a33b4  56                   push esi
// 005a33b5  8b7008               mov esi, dword ptr [eax + 8]
// 005a33b8  85f6                 test esi, esi
// 005a33ba  742b                 je 0x5a33e7
// 005a33bc  8d4e04               lea ecx, [esi + 4]
// 005a33bf  83caff               or edx, 0xffffffff
// 005a33c2  f00fc111             lock xadd dword ptr [ecx], edx
// 005a33c6  751f                 jne 0x5a33e7
// 005a33c8  8b06                 mov eax, dword ptr [esi]
// 005a33ca  8b5004               mov edx, dword ptr [eax + 4]
// 005a33cd  8bce                 mov ecx, esi
// 005a33cf  ffd2                 call edx
// 005a33d1  8d4608               lea eax, [esi + 8]
// 005a33d4  83c9ff               or ecx, 0xffffffff
// 005a33d7  f00fc108             lock xadd dword ptr [eax], ecx
// 005a33db  750a                 jne 0x5a33e7
// 005a33dd  8b16                 mov edx, dword ptr [esi]
// 005a33df  8b4208               mov eax, dword ptr [edx + 8]
// 005a33e2  8bce                 mov ecx, esi
// 005a33e4  5e                   pop esi
// 005a33e5  ffe0                 jmp eax
// 005a33e7  5e                   pop esi
// 005a33e8  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??$_Destroy@UWaitItem@IdSerializer@Network@RBX@@@std@@YAXPAUWaitItem@IdSerializer@Network@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
