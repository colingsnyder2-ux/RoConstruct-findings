// roc 2010-06 004ad450  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ad450
//
// 004ad450  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004ad453  8b01                 mov eax, dword ptr [ecx]
// 004ad455  8b542404             mov edx, dword ptr [esp + 4]
// 004ad459  8b400c               mov eax, dword ptr [eax + 0xc]
// 004ad45c  52                   push edx
// 004ad45d  ffd0                 call eax
// 004ad45f  85c0                 test eax, eax
// 004ad461  7406                 je 0x4ad469
// 004ad463  83c01c               add eax, 0x1c
// 004ad466  c20400               ret 4
// 004ad469  33c0                 xor eax, eax
// 004ad46b  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX00000e@@QAEHPAX@Z)

namespace ns_ROCX00000e {
struct S
{
    struct V
    {
        void *vtable;
    };

    char padding[0x20];
    V *p;
    int f(void *);
};

int S::f(void *arg)
{
    V *v = p;
    int result = ((int (__thiscall *)(V *, void *))((void **)v->vtable)[3])(v, arg);
    if (result)
        return result + 0x1c;
    return 0;
}
}
