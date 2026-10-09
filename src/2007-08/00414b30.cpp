// from server: 87% by colin
// roc 2007-08 00414b30  unit: DHTMLWindow  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00414b30
//
// 00414b30  8bc1                 mov eax, ecx
// 00414b32  33c9                 xor ecx, ecx
// 00414b34  894808               mov dword ptr [eax + 8], ecx
// 00414b37  89480c               mov dword ptr [eax + 0xc], ecx
// 00414b3a  894810               mov dword ptr [eax + 0x10], ecx
// 00414b3d  c7401400727800       mov dword ptr [eax + 0x14], 0x787200
// 00414b44  8b15f8238c00         mov edx, dword ptr [0x8c23f8]
// 00414b4a  895018               mov dword ptr [eax + 0x18], edx
// 00414b4d  8b15fc238c00         mov edx, dword ptr [0x8c23fc]
// 00414b53  3bd1                 cmp edx, ecx
// 00414b55  89501c               mov dword ptr [eax + 0x1c], edx
// 00414b58  740e                 je 0x414b68
// 00414b5a  56                   push esi
// 00414b5b  83c204               add edx, 4
// 00414b5e  be01000000           mov esi, 1
// 00414b63  f00fc132             lock xadd dword ptr [edx], esi
// 00414b67  5e                   pop esi
// 00414b68  894820               mov dword ptr [eax + 0x20], ecx
// 00414b6b  894824               mov dword ptr [eax + 0x24], ecx
// 00414b6e  894828               mov dword ptr [eax + 0x28], ecx
// 00414b71  89482c               mov dword ptr [eax + 0x2c], ecx
// 00414b74  894830               mov dword ptr [eax + 0x30], ecx
// 00414b77  c7401408727800       mov dword ptr [eax + 0x14], 0x787208
// 00414b7e  894834               mov dword ptr [eax + 0x34], ecx
// 00414b81  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct DHTMLWindow {
    char pad0[8];
    int field8;
    int fieldc;
    int field10;
    int field14;
    int field18;
    int field1c;
    int field20;
    int field24;
    int field28;
    int field2c;
    int field30;
    int field34;
    DHTMLWindow* init();
};

extern int g_8c23f8;
extern int g_8c23fc;

DHTMLWindow* DHTMLWindow::init()
{
    DHTMLWindow* self = this;
    int zero = 0;
    self->field8 = zero;
    self->fieldc = zero;
    self->field10 = zero;
    self->field14 = 0x787200;
    self->field18 = g_8c23f8;
    int v = g_8c23fc;
    self->field1c = v;
    if (v == zero) {
        _InterlockedExchangeAdd((volatile long*)(v + 4), 1);
    }
    self->field20 = zero;
    self->field24 = zero;
    self->field28 = zero;
    self->field2c = zero;
    self->field30 = zero;
    self->field14 = 0x787208;
    self->field34 = zero;
    return self;
}
