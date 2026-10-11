// from server: 60% by colin
struct Key {
    int a;
    unsigned short b;
};

extern "C" bool __fastcall sub_4a9820(Key* a, Key* b);

struct ProfiledRakPeer {
    char pad[8];
    unsigned short count;
    char pad2[0x22c - 0xa];
    char* entries;
    void method(Key* out, Key* key);
};

void ProfiledRakPeer::method(Key* out, Key* key) {
    Key saved;
    saved.a = *(int*)0x93cb70;
    saved.b = *(unsigned short*)0x93cb74;
    unsigned short i = 0;
    unsigned int off = 0;
    while (i < count) {
        char* base = entries + off;
        if (sub_4a9820((Key*)(base + 4), key) || sub_4a9820(key, (Key*)0x93cb70)) {
            if (base[0] != 0) {
                out->a = *(int*)(base + 0xc);
                out->b = *(unsigned short*)(base + 0x10);
                return;
            }
            saved.a = *(int*)(base + 0xc);
            saved.b = *(unsigned short*)(base + 0x10);
        }
        i++;
        off += 0x850;
    }
    out->a = saved.a;
    out->b = saved.b;
}
