// from server: 67% by colin
// roc 2007-08 0045ad30  unit: G3D::VStopwatch::?$TypedStatsItem  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ad30
//
// 0045ad30  83ec58               sub esp, 0x58
// 0045ad33  56                   push esi
// 0045ad34  8bf1                 mov esi, ecx
// 0045ad36  8d442404             lea eax, [esp + 4]
// 0045ad3a  50                   push eax
// 0045ad3b  8d8e10010000         lea ecx, [esi + 0x110]
// 0045ad41  e85affffff           call 0x45aca0
// 0045ad46  50                   push eax
// 0045ad47  8bce                 mov ecx, esi
// 0045ad49  e812be1300           call 0x596b60
// 0045ad4e  5e                   pop esi
// 0045ad4f  83c458               add esp, 0x58
// 0045ad52  c3                   ret 

struct VStopwatch {
    char pad0[0x110];
    int field110;
    void sub_45aca0(int* out);
    void sub_596b60(int* in);
    void func();
};

void VStopwatch::func()
{
    int local[22];
    sub_45aca0(local);
    sub_596b60(local);
}
