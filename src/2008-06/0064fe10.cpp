// from server: 63% by colin
// from server: 59% by king_originala
// roc 2008-06 0064fe10  unit: RBX::ChatOutput  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064fe10
//
// 0064fe10  d944240c             fld dword ptr [esp + 0xc]
// 0064fe14  83ec08               sub esp, 8
// 0064fe17  d8414c               fadd dword ptr [ecx + 0x4c]
// 0064fe1a  53                   push ebx
// 0064fe1b  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0064fe21  56                   push esi
// 0064fe22  d9594c               fstp dword ptr [ecx + 0x4c]
// 0064fe25  57                   push edi
// 0064fe26  8db1b8feffff         lea esi, [ecx - 0x148]
// 0064fe2c  8d642400             lea esp, [esp]
// 0064fe30  83be9001000000       cmp dword ptr [esi + 0x190], 0
// 0064fe37  7446                 je 0x64fe7f
// 0064fe39  8bbe8c010000         mov edi, dword ptr [esi + 0x18c]
// 0064fe3f  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0064fe45  03c7                 add eax, edi
// 0064fe47  3bf8                 cmp edi, eax
// 0064fe49  7602                 jbe 0x64fe4d
// 0064fe4b  ffd3                 call ebx
// 0064fe4d  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0064fe53  894c240c             mov dword ptr [esp + 0xc], ecx
// 0064fe57  8d4c240c             lea ecx, [esp + 0xc]
// 0064fe5b  897c2410             mov dword ptr [esp + 0x10], edi
// 0064fe5f  e8bc65deff           call 0x436420
// 0064fe64  d98694010000         fld dword ptr [esi + 0x194]
// 0064fe6a  8b00                 mov eax, dword ptr [eax]
// 0064fe6c  d85844               fcomp dword ptr [eax + 0x44]
// 0064fe6f  dfe0                 fnstsw ax
// 0064fe71  f6c441               test ah, 0x41
// 0064fe74  7509                 jne 0x64fe7f
// 0064fe76  8bce                 mov ecx, esi
// 0064fe78  e8f3feffff           call 0x64fd70
// 0064fe7d  ebb1                 jmp 0x64fe30
// 0064fe7f  5f                   pop edi
// 0064fe80  5e                   pop esi
// 0064fe81  5b                   pop ebx
// 0064fe82  83c408               add esp, 8
// 0064fe85  c20c00               ret 0xc
#include <intrin.h>

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Item {
    char padding[0x44];
    float time;
};

struct Iterator {
    void *owner;
    unsigned int offset;
    Item *&operator*() const;
};

struct Tick {
    char padding0[0x2c];
    void *owner;
    char padding1[0x14];
    unsigned int offset;
    unsigned int count;
    float time;

    void update(int, int, float);
};

struct S {
    char padding[0x148];
    Tick tick;

    void remove();
};

void Tick::update(int, int, float delta)
{
    time += delta;
    void (__cdecl *invalid)() = invalid_parameter_noinfo;
    _ReadWriteBarrier();
    S *s = reinterpret_cast<S *>(reinterpret_cast<char *>(this) - 0x148);

    for (;;) {
        if (s->tick.count == 0)
            break;

        unsigned int first = s->tick.offset;
        if (first > first + s->tick.count)
            invalid();

        Iterator it;
        it.owner = s->tick.owner;
        it.offset = first;
        Item *item = *it;

        if (!(s->tick.time > item->time))
            break;

        s->remove();
    }
}
