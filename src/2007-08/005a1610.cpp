// from server: 96% by colin
// roc 2007-08 005a1610  unit: RBX::CharacterAppearance  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1610
//
// 005a1610  8b442404             mov eax, dword ptr [esp + 4]
// 005a1614  56                   push esi
// 005a1615  8bf1                 mov esi, ecx
// 005a1617  3930                 cmp dword ptr [eax], esi
// 005a1619  752c                 jne 0x5a1647
// 005a161b  6a00                 push 0
// 005a161d  56                   push esi
// 005a161e  e8cdffeeff           call 0x4915f0
// 005a1623  83c408               add esp, 8
// 005a1626  84c0                 test al, al
// 005a1628  741d                 je 0x5a1647
// 005a162a  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 005a1630  50                   push eax
// 005a1631  e87a400000           call 0x5a56b0
// 005a1636  83c404               add esp, 4
// 005a1639  85c0                 test eax, eax
// 005a163b  740a                 je 0x5a1647
// 005a163d  8b16                 mov edx, dword ptr [esi]
// 005a163f  50                   push eax
// 005a1640  8b4244               mov eax, dword ptr [edx + 0x44]
// 005a1643  8bce                 mov ecx, esi
// 005a1645  ffd0                 call eax
// 005a1647  5e                   pop esi
// 005a1648  c20400               ret 4

struct CharacterAppearance {
    void apply(void*);
};

extern "C" char __cdecl sub_4915F0(void*, void*);
extern "C" void* __cdecl sub_5A56B0(void*);

void CharacterAppearance::apply(void* a) {
    if (*(void**)a == this) {
        if (sub_4915F0(this, 0)) {
            void* p = sub_5A56B0(*(void**)((char*)this + 0xbc));
            if (p) {
                void** vt = *(void***)this;
                void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vt[0x44 / 4];
                fn(this, p);
            }
        }
    }
}
