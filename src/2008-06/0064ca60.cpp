// roc 2008-06 0064ca60  unit: RBX::SleepStage  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064ca60
//
// 0064ca60  53                   push ebx
// 0064ca61  56                   push esi
// 0064ca62  57                   push edi
// 0064ca63  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064ca67  8bcf                 mov ecx, edi
// 0064ca69  e822b1f9ff           call 0x5e7b90
// 0064ca6e  8bf0                 mov esi, eax
// 0064ca70  85f6                 test esi, esi
// 0064ca72  741f                 je 0x64ca93
// 0064ca74  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0064ca78  8b06                 mov eax, dword ptr [esi]
// 0064ca7a  8b5014               mov edx, dword ptr [eax + 0x14]
// 0064ca7d  8bce                 mov ecx, esi
// 0064ca7f  ffd2                 call edx
// 0064ca81  3bc3                 cmp eax, ebx
// 0064ca83  7414                 je 0x64ca99
// 0064ca85  56                   push esi
// 0064ca86  8bcf                 mov ecx, edi
// 0064ca88  e813b1f9ff           call 0x5e7ba0
// 0064ca8d  8bf0                 mov esi, eax
// 0064ca8f  85f6                 test esi, esi
// 0064ca91  75e5                 jne 0x64ca78
// 0064ca93  5f                   pop edi
// 0064ca94  5e                   pop esi
// 0064ca95  33c0                 xor eax, eax
// 0064ca97  5b                   pop ebx
// 0064ca98  c3                   ret 
// 0064ca99  5f                   pop edi
// 0064ca9a  8bc6                 mov eax, esi
// 0064ca9c  5e                   pop esi
// 0064ca9d  5b                   pop ebx
// 0064ca9e  c3                   ret 
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?getJoint@RBX@@YAPAVJoint@1@PAVPrimitive@1@W4JointType@21@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
