// roc 2009-12 0047c450  unit: RBX::LDraw2Lua::LDraw2RobloxPartMap  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047c450
//
// 0047c450  6aff                 push -1
// 0047c452  687ee89200           push 0x92e87e
// 0047c457  64a100000000         mov eax, dword ptr fs:[0]
// 0047c45d  50                   push eax
// 0047c45e  64892500000000       mov dword ptr fs:[0], esp
// 0047c465  51                   push ecx
// 0047c466  56                   push esi
// 0047c467  8bf1                 mov esi, ecx
// 0047c469  89742404             mov dword ptr [esp + 4], esi
// 0047c46d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047c471  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047c475  8d542420             lea edx, [esp + 0x20]
// 0047c479  894e04               mov dword ptr [esi + 4], ecx
// 0047c47c  52                   push edx
// 0047c47d  8d4e08               lea ecx, [esi + 8]
// 0047c480  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0047c488  8906                 mov dword ptr [esi], eax
// 0047c48a  ff15f0b69800         call dword ptr [0x98b6f0]
// 0047c490  8d44243c             lea eax, [esp + 0x3c]
// 0047c494  50                   push eax
// 0047c495  8d4e24               lea ecx, [esi + 0x24]
// 0047c498  c644241402           mov byte ptr [esp + 0x14], 2
// 0047c49d  ff15f0b69800         call dword ptr [0x98b6f0]
// 0047c4a3  8d4c2420             lea ecx, [esp + 0x20]
// 0047c4a7  c644241000           mov byte ptr [esp + 0x10], 0
// 0047c4ac  ff15e4b69800         call dword ptr [0x98b6e4]
// 0047c4b2  8d4c243c             lea ecx, [esp + 0x3c]
// 0047c4b6  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0047c4be  ff15e4b69800         call dword ptr [0x98b6e4]
// 0047c4c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047c4c8  8bc6                 mov eax, esi
// 0047c4ca  5e                   pop esi
// 0047c4cb  64890d00000000       mov dword ptr fs:[0], ecx
// 0047c4d2  83c410               add esp, 0x10
// 0047c4d5  c24000               ret 0x40
// copied from an identical function in another client (function ??0S@@QAE@HHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

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