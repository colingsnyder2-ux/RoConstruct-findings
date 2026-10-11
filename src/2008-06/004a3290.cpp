// from server: 70% by colin
// roc 2008-06 004a3290  unit: RBX::Network::Server::ClientProxy  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3290

extern "C" int __stdcall sub_6a17c6(int, int, int, int, int);
extern "C" int __stdcall sub_4a2fa0(int, int);
extern "C" void __stdcall sub_802890();

struct ClientProxy {
    char pad[0x2d70];
    int field_2d70;
    int method(int);
};

int ClientProxy::method(int a) {
    int result;
    int *p;
    int v;
    int *q;
    int *r;
    int *s;
    int t;
    int u;

    result = sub_6a17c6(a, 0, 0x92907c, 0x92e1c8, 0);
    if (result != 0) {
        p = (int *)(result + 0x14c);
        v = *(int *)(this->field_2d70 + 0x164);
        q = (int *)(this->field_2d70 + 0x164);
        r = (int *)(this->field_2d70 + 0x164 + 0x18);
        if (*p == 0) {
            s = (int *)(result + 0x130);
            sub_4a2fa0((int)&t, (int)s);
        } else {
            s = (int *)(result + 0x138);
            sub_4a2fa0((int)&t, (int)s);
        }
        u = *(int *)&t;
        if (u != 0 && u != v) {
            sub_802890();
        }
        return (*(int *)((char *)&t + 4) != *r) ? 1 : 0;
    }
    result = sub_6a17c6(a, 0, 0x92907c, 0x939b1c, 0);
    return (result == 0) ? 1 : 0;
}
