// from server: 100% by king_originala
// roc 2008-06 00497ec0  unit: RBX::Network::Players  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00497ec0
//
// 00497ec0  56                   push esi
// 00497ec1  8bf1                 mov esi, ecx
// 00497ec3  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 00497ec9  39442408             cmp dword ptr [esp + 8], eax
// 00497ecd  754e                 jne 0x497f1d
// 00497ecf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00497ed3  8139d4fc9600         cmp dword ptr [ecx], 0x96fcd4
// 00497ed9  7542                 jne 0x497f1d
// 00497edb  85c0                 test eax, eax
// 00497edd  7429                 je 0x497f08
// 00497edf  8b0decfc9600         mov ecx, dword ptr [0x96fcec]
// 00497ee5  8b11                 mov edx, dword ptr [ecx]
// 00497ee7  83c014               add eax, 0x14
// 00497eea  50                   push eax
// 00497eeb  8b4208               mov eax, dword ptr [edx + 8]
// 00497eee  ffd0                 call eax
// 00497ef0  88442408             mov byte ptr [esp + 8], al
// 00497ef4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00497ef8  51                   push ecx
// 00497ef9  8d8e50010000         lea ecx, [esi + 0x150]
// 00497eff  e81cefffff           call 0x496e20
// 00497f04  5e                   pop esi
// 00497f05  c20800               ret 8
// 00497f08  c644240800           mov byte ptr [esp + 8], 0
// 00497f0d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00497f11  51                   push ecx
// 00497f12  8d8e50010000         lea ecx, [esi + 0x150]
// 00497f18  e803efffff           call 0x496e20
// 00497f1d  5e                   pop esi
// 00497f1e  c20800               ret 8

struct Net {
    virtual void v0();
    virtual void v1();
    virtual bool has(void*);
};

extern Net* net;
extern const char descriptor;

struct P {
    char padding[0x14];
    int addr;
};

struct Change {
    const void* descriptor;
};

struct Signal {
    char padding[0x50];
    void fire(unsigned int);
};

struct Players {
    char padding[0x150];
    Signal signal;
    P* player;

    void f(P*, const Change*);
};

void Players::f(P* p, const Change* change)
{
    if (p == player && change->descriptor == &descriptor) {
        if (player)
            reinterpret_cast<bool&>(p) = net->has(&player->addr);
        else
            reinterpret_cast<bool&>(p) = false;

        signal.fire(reinterpret_cast<unsigned int&>(p));
    }
}
