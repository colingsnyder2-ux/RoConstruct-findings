// from server: 100% by colin
// roc 2007-08 00588cd0  unit: RBX::SoundChannel  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588cd0
//
// 00588cd0  56                   push esi
// 00588cd1  8bf1                 mov esi, ecx
// 00588cd3  e878ffffff           call 0x588c50
// 00588cd8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00588cdc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00588ce0  50                   push eax
// 00588ce1  51                   push ecx
// 00588ce2  8bce                 mov ecx, esi
// 00588ce4  e8671dffff           call 0x57aa50
// 00588ce9  5e                   pop esi
// 00588cea  c20800               ret 8

struct SoundChannel
{
    void sub_00588c50();
    void sub_0057aa50(int, int);
    void sub_00588cd0(int, int);
};

void SoundChannel::sub_00588cd0(int a, int b)
{
    sub_00588c50();
    sub_0057aa50(a, b);
}
