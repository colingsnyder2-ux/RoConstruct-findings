// from server: 31% by colin
struct MegaTextureProxy {
    char pad0[0xc];
    int field_c;
    char pad10[0x24];
    void* field_30;
    char pad34[0x4];
    unsigned char field_34;
    char pad35[0xb];
    void* field_40;

    void build(void* out);
};

extern "C" {
    int __stdcall InterlockedDecrement(int*);
    int __stdcall InterlockedIncrement(int*);
    void* __stdcall sub_5b5c80();
    void __stdcall sub_510670(void*, void*, int);
    void __stdcall sub_50eea0(void*, int, int, int);
    void __stdcall sub_5b6270(void*, void*);
    void __stdcall sub_5106a0(void*, void*);
    void __stdcall sub_7add10(void*, void*);
    void __stdcall sub_472a80(void*);
    void __stdcall sub_7b8400(void*, void*, void*, void*, int, void*);
    void __stdcall sub_50e230(void*);
    void __stdcall sub_45ad90(void*);
    void __stdcall sub_6a067a(void*);
    void __stdcall sub_802458(void*, const char*);
    void __stdcall sub_802468(void*);
    void __stdcall sub_802890();
    void* __stdcall sub_8021ac(void*);
    void* __stdcall sub_8021b0(void*);
}

void MegaTextureProxy::build(void* out)
{
    if (field_34 != 0) {
        void* p = field_30;
        *(void**)out = 0;
        if (p != 0) {
            *(void**)out = p;
            sub_8021b0((char*)p + 4);
        }
        return;
    }

    void* v = sub_5b5c80();
    int count = (*(int*)((char*)v + 0x10) - *(int*)((char*)v + 0xc)) >> 2;
    int* pcount = &count;
    if (count >= 0x20) {
        pcount = (int*)0x80b350;
    }
    int n = *pcount;

    int local_c = 0;
    sub_510670(&local_c, (char*)this + 0xc, 8);

    int a = *(int*)&local_c;
    int b = *(int*)((char*)&local_c + 4);
    sub_50eea0((char*)&local_c + 0x1c, b, a << 5, 3);

    unsigned char flag = 1;
    (void)flag;

    int i = 0;
    if (n > 0) {
        do {
            void* vv = sub_5b5c80();
            int cnt = (*(int*)((char*)vv + 0x10) - *(int*)((char*)vv + 0xc)) >> 2;
            if (i >= cnt) {
                sub_802890();
            }
            void* elem = (void*)(*(int*)((char*)vv + 0xc) + i * 4);
            char buf[0x100];
            sub_5b6270(elem, buf);
            sub_5106a0(&local_c, buf);

            char table[0x300];
            {
                char* p = table + 2;
                int k = 0xff;
                do {
                    p[-2] = 0;
                    p[-1] = 0;
                    p[0] = 0;
                    p += 3;
                    k--;
                } while (k >= 0);
            }

            int j = 0;
            char* dst = table;
            do {
                char tmp[3];
                tmp[0] = 0;
                tmp[1] = 0;
                *(short*)dst = *(short*)tmp;
                dst[2] = 0;
                sub_7add10(&local_c, dst);
                j++;
                dst += 3;
            } while (j < 0x100);

            int rows = *(int*)&local_c;
            int cols = *(int*)((char*)&local_c + 4);
            int r = 0;
            if (rows > 0) {
                do {
                    int c = 0;
                    if (cols > 0) {
                        do {
                            int base = *(int*)((char*)&local_c + 0x20);
                            int stride = *(int*)((char*)&local_c + 0x1c);
                            int idx = c * rows + r;
                            char* src = (char*)(base + idx * 3);
                            int dstbase = *(int*)((char*)&local_c + 0x18);
                            int dstidx = i * rows + c * rows + r;
                            char* d = (char*)(dstbase + dstidx * 3);
                            unsigned char ci = *(unsigned char*)src;
                            char* entry = table + ci * 3;
                            *(short*)d = *(short*)entry;
                            d[2] = entry[2];
                            c++;
                        } while (c < cols);
                    }
                    r++;
                } while (r < rows);
            }
            i++;
        } while (i < n);
    }

    sub_472a80((char*)&local_c + 0x38);
    sub_802458((char*)&local_c + 0x20, "MegaTexture");

    void* g = *(void**)0x96fab0;
    sub_7b8400(&local_c, &local_c, &local_c, &local_c, 2, &local_c);

    void* newp = *(void**)&local_c;
    void* oldp = field_30;
    if (newp != oldp) {
        if (oldp != 0) {
            if (sub_8021ac((char*)oldp + 4) == 0) {
                sub_45ad90(field_30);
                if (field_30 != 0) {
                    void** vt = *(void***)field_30;
                    void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
                    fn(field_30, 1);
                }
            }
            field_30 = 0;
        }
        if (newp != 0) {
            field_30 = newp;
            sub_8021b0((char*)newp + 4);
        }
    }

    void* tmp2 = *(void**)&local_c;
    if (tmp2 != 0) {
        if (sub_8021ac((char*)tmp2 + 4) == 0) {
            void* q = *(void**)((char*)&local_c + 8);
            while (q != 0) {
                void** vt = *(void***)q;
                void (*fn)(void*) = (void (*)(void*))vt[1];
                fn(q);
                void* nxt = *(void**)((char*)q + 4);
                sub_6a067a(q);
                q = nxt;
            }
            void* r = *(void**)&local_c;
            if (r != 0) {
                void** vt = *(void***)r;
                void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
                fn(r, 1);
            }
        }
        *(void**)&local_c = 0;
    }

    sub_802468((char*)&local_c + 0x14);

    if (field_40 != 0) {
        if (sub_8021ac((char*)field_40 + 4) == 0) {
            sub_45ad90(field_40);
            if (field_40 != 0) {
                void** vt = *(void***)field_40;
                void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
                fn(field_40, 1);
            }
        }
        field_40 = 0;
    }

    field_34 = 1;
    sub_50e230((char*)&local_c + 0x14);
    sub_50e230(&local_c);

    void* p = field_30;
    *(void**)out = 0;
    if (p != 0) {
        *(void**)out = p;
        sub_8021b0((char*)p + 4);
    }
}
