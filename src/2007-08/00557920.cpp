// from server: 69% by colin
// roc 2007-08 00557920  unit: ChatEnter  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00557920
//
// 00557920  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 00557926  83ec08               sub esp, 8
// 00557929  50                   push eax
// 0055792a  51                   push ecx
// 0055792b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0055792f  51                   push ecx
// 00557930  8d4c240c             lea ecx, [esp + 0xc]
// 00557934  e8b71f0800           call 0x5d98f0
// 00557939  83c408               add esp, 8
// 0055793c  c20400               ret 4

struct ChatEnter {
    char pad[0x188];
    int field_188;
    void sub_557920(int arg);
};

extern void __stdcall sub_5d98f0(int, int, int);

void ChatEnter::sub_557920(int arg)
{
    int tmp = field_188;
    sub_5d98f0(arg, (int)this, tmp);
}
