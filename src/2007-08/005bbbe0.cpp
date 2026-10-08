// from server: 88% by colin
// roc 2007-08 005bbbe0  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bbbe0
//
// 005bbbe0  8b442404             mov eax, dword ptr [esp + 4]
// 005bbbe4  56                   push esi
// 005bbbe5  8bf1                 mov esi, ecx
// 005bbbe7  39864c010000         cmp dword ptr [esi + 0x14c], eax
// 005bbbed  7422                 je 0x5bbc11
// 005bbbef  89864c010000         mov dword ptr [esi + 0x14c], eax
// 005bbbf5  8b06                 mov eax, dword ptr [esi]
// 005bbbf7  8b504c               mov edx, dword ptr [eax + 0x4c]
// 005bbbfa  ffd2                 call edx
// 005bbbfc  8b06                 mov eax, dword ptr [esi]
// 005bbbfe  8b5050               mov edx, dword ptr [eax + 0x50]
// 005bbc01  8bce                 mov ecx, esi
// 005bbc03  ffd2                 call edx
// 005bbc05  68a0678c00           push 0x8c67a0
// 005bbc0a  8bce                 mov ecx, esi
// 005bbc0c  e8ff8ae8ff           call 0x444710
// 005bbc11  5e                   pop esi
// 005bbc12  c20400               ret 4

struct S_func_005bbbe0 {
    char pad0[0x14c];
    int m_field_14c;
    void f(int a1);
};

extern void G1_func_00444710();
extern void G2_func_008c67a0();

void S_func_005bbbe0::f(int a1)
{
    if (m_field_14c != a1) {
        m_field_14c = a1;
        (*(void (__thiscall **)(void *))(*(int *)this + 0x4c))(this);
        (*(void (__thiscall **)(void *))(*(int *)this + 0x50))(this);
        G1_func_00444710();
    }
}
