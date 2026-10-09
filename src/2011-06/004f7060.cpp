// roc 2011-06 004f7060  unit: RBX::VRbxRay::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f7060
//
// 004f7060  56                   push esi
// 004f7061  6a08                 push 8
// 004f7063  8bf1                 mov esi, ecx
// 004f7065  e8f42f3100           call 0x80a05e
// 004f706a  83c404               add esp, 4
// 004f706d  85c0                 test eax, eax
// 004f706f  7411                 je 0x4f7082
// 004f7071  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f7075  c700f4b2a700         mov dword ptr [eax], 0xa7b2f4
// 004f707b  8b11                 mov edx, dword ptr [ecx]
// 004f707d  895004               mov dword ptr [eax + 4], edx
// 004f7080  eb02                 jmp 0x4f7084
// 004f7082  33c0                 xor eax, eax
// 004f7084  8d542408             lea edx, [esp + 8]
// 004f7088  8bc8                 mov ecx, eax
// 004f708a  3bd6                 cmp edx, esi
// 004f708c  7404                 je 0x4f7092
// 004f708e  8b0e                 mov ecx, dword ptr [esi]
// 004f7090  8906                 mov dword ptr [esi], eax
// 004f7092  85c9                 test ecx, ecx
// 004f7094  7408                 je 0x4f709e
// 004f7096  8b01                 mov eax, dword ptr [ecx]
// 004f7098  8b10                 mov edx, dword ptr [eax]
// 004f709a  6a01                 push 1
// 004f709c  ffd2                 call edx
// 004f709e  8bc6                 mov eax, esi
// 004f70a0  5e                   pop esi
// 004f70a1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
