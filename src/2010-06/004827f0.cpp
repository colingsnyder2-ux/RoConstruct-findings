// roc 2010-06 004827f0  unit: RBX::LDraw2Lua::LDraw2RobloxPartMap  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004827f0
//
// 004827f0  6aff                 push -1
// 004827f2  68de599800           push 0x9859de
// 004827f7  64a100000000         mov eax, dword ptr fs:[0]
// 004827fd  50                   push eax
// 004827fe  64892500000000       mov dword ptr fs:[0], esp
// 00482805  51                   push ecx
// 00482806  56                   push esi
// 00482807  8bf1                 mov esi, ecx
// 00482809  89742404             mov dword ptr [esp + 4], esi
// 0048280d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00482811  8b442418             mov eax, dword ptr [esp + 0x18]
// 00482815  8d542420             lea edx, [esp + 0x20]
// 00482819  894e04               mov dword ptr [esi + 4], ecx
// 0048281c  52                   push edx
// 0048281d  8d4e08               lea ecx, [esi + 8]
// 00482820  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00482828  8906                 mov dword ptr [esi], eax
// 0048282a  ff150ca49e00         call dword ptr [0x9ea40c]
// 00482830  8d44243c             lea eax, [esp + 0x3c]
// 00482834  50                   push eax
// 00482835  8d4e24               lea ecx, [esi + 0x24]
// 00482838  c644241402           mov byte ptr [esp + 0x14], 2
// 0048283d  ff150ca49e00         call dword ptr [0x9ea40c]
// 00482843  8d4c2420             lea ecx, [esp + 0x20]
// 00482847  c644241000           mov byte ptr [esp + 0x10], 0
// 0048284c  ff1500a49e00         call dword ptr [0x9ea400]
// 00482852  8d4c243c             lea ecx, [esp + 0x3c]
// 00482856  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0048285e  ff1500a49e00         call dword ptr [0x9ea400]
// 00482864  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00482868  8bc6                 mov eax, esi
// 0048286a  5e                   pop esi
// 0048286b  64890d00000000       mov dword ptr fs:[0], ecx
// 00482872  83c410               add esp, 0x10
// 00482875  c24000               ret 0x40
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