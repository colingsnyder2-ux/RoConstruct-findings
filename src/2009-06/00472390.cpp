// roc 2009-06 00472390  unit: RBX::LDraw2Lua::LDraw2RobloxPartMap  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00472390
//
// 00472390  6aff                 push -1
// 00472392  685e3d8500           push 0x853d5e
// 00472397  64a100000000         mov eax, dword ptr fs:[0]
// 0047239d  50                   push eax
// 0047239e  64892500000000       mov dword ptr fs:[0], esp
// 004723a5  51                   push ecx
// 004723a6  56                   push esi
// 004723a7  8bf1                 mov esi, ecx
// 004723a9  89742404             mov dword ptr [esp + 4], esi
// 004723ad  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004723b1  8b442418             mov eax, dword ptr [esp + 0x18]
// 004723b5  8d542420             lea edx, [esp + 0x20]
// 004723b9  894e04               mov dword ptr [esi + 4], ecx
// 004723bc  52                   push edx
// 004723bd  8d4e08               lea ecx, [esi + 8]
// 004723c0  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004723c8  8906                 mov dword ptr [esi], eax
// 004723ca  ff15b8e48900         call dword ptr [0x89e4b8]
// 004723d0  8d44243c             lea eax, [esp + 0x3c]
// 004723d4  50                   push eax
// 004723d5  8d4e24               lea ecx, [esi + 0x24]
// 004723d8  c644241402           mov byte ptr [esp + 0x14], 2
// 004723dd  ff15b8e48900         call dword ptr [0x89e4b8]
// 004723e3  8d4c2420             lea ecx, [esp + 0x20]
// 004723e7  c644241000           mov byte ptr [esp + 0x10], 0
// 004723ec  ff15c4e48900         call dword ptr [0x89e4c4]
// 004723f2  8d4c243c             lea ecx, [esp + 0x3c]
// 004723f6  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004723fe  ff15c4e48900         call dword ptr [0x89e4c4]
// 00472404  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00472408  8bc6                 mov eax, esi
// 0047240a  5e                   pop esi
// 0047240b  64890d00000000       mov dword ptr fs:[0], ecx
// 00472412  83c410               add esp, 0x10
// 00472415  c24000               ret 0x40
// copied from an identical function in another client (function ??0S@@QAE@HHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct S {
    int first;
    int second;
    std::string name;
    std::string value;

    S(int a, int b, std::string n, std::string v);
};

S::S(int a, int b, std::string n, std::string v)
    : first(a), second(b), name(n), value(v)
{
}