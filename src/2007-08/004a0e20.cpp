// roc 2007-08 004a0e20  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0e20
//
// 004a0e20  8b442408             mov eax, dword ptr [esp + 8]
// 004a0e24  85c0                 test eax, eax
// 004a0e26  7405                 je 0x4a0e2d
// 004a0e28  8d5004               lea edx, [eax + 4]
// 004a0e2b  eb02                 jmp 0x4a0e2f
// 004a0e2d  33d2                 xor edx, edx
// 004a0e2f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a0e33  8b4104               mov eax, dword ptr [ecx + 4]
// 004a0e36  85c0                 test eax, eax
// 004a0e38  7411                 je 0x4a0e4b
// 004a0e3a  8b09                 mov ecx, dword ptr [ecx]
// 004a0e3c  56                   push esi
// 004a0e3d  8b31                 mov esi, dword ptr [ecx]
// 004a0e3f  83c004               add eax, 4
// 004a0e42  52                   push edx
// 004a0e43  50                   push eax
// 004a0e44  8b4628               mov eax, dword ptr [esi + 0x28]
// 004a0e47  ffd0                 call eax
// 004a0e49  5e                   pop esi
// 004a0e4a  c3                   ret 
// 004a0e4b  8b09                 mov ecx, dword ptr [ecx]
// 004a0e4d  56                   push esi
// 004a0e4e  8b31                 mov esi, dword ptr [ecx]
// 004a0e50  33c0                 xor eax, eax
// 004a0e52  52                   push edx
// 004a0e53  50                   push eax
// 004a0e54  8b4628               mov eax, dword ptr [esi + 0x28]
// 004a0e57  ffd0                 call eax
// 004a0e59  5e                   pop esi
// 004a0e5a  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ?setRefValue@IdSerializer@Network@RBX@@KAXAAUWaitItem@123@PAVInstance@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
