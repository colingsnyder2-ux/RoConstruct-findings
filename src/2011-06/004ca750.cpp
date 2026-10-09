// roc 2011-06 004ca750  unit: RakNet::VBitStream::?$sp_counted_impl_p  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ca750
//
// 004ca750  56                   push esi
// 004ca751  6a08                 push 8
// 004ca753  8bf1                 mov esi, ecx
// 004ca755  e804f93300           call 0x80a05e
// 004ca75a  83c404               add esp, 4
// 004ca75d  85c0                 test eax, eax
// 004ca75f  7411                 je 0x4ca772
// 004ca761  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ca765  c700508aa700         mov dword ptr [eax], 0xa78a50
// 004ca76b  8b11                 mov edx, dword ptr [ecx]
// 004ca76d  895004               mov dword ptr [eax + 4], edx
// 004ca770  eb02                 jmp 0x4ca774
// 004ca772  33c0                 xor eax, eax
// 004ca774  8d542408             lea edx, [esp + 8]
// 004ca778  8bc8                 mov ecx, eax
// 004ca77a  3bd6                 cmp edx, esi
// 004ca77c  7404                 je 0x4ca782
// 004ca77e  8b0e                 mov ecx, dword ptr [esi]
// 004ca780  8906                 mov dword ptr [esi], eax
// 004ca782  85c9                 test ecx, ecx
// 004ca784  7408                 je 0x4ca78e
// 004ca786  8b01                 mov eax, dword ptr [ecx]
// 004ca788  8b10                 mov edx, dword ptr [eax]
// 004ca78a  6a01                 push 1
// 004ca78c  ffd2                 call edx
// 004ca78e  8bc6                 mov eax, esi
// 004ca790  5e                   pop esi
// 004ca791  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
