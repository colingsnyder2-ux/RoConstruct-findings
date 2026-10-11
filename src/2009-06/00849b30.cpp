// from server: 26% by atomic.potato
struct MegaTextureProxy {
    char pad0[0xc];
    int field_c;
    char pad10[0x20];
    void* field_30;
    char field_34;
    char pad35[0xb];
    void* field_40;
    void build();
};

extern "C" void* __stdcall sub_6425f0();
extern "C" void __stdcall sub_572d90(void*, int, void*);
extern "C" void __stdcall sub_5715c0(void*, int, int, int);
extern "C" void __stdcall sub_642c10(void*, void*);
extern "C" void __stdcall sub_572dc0(void*, void*);
extern "C" void __stdcall sub_848e60(void*, void*);
extern "C" void __stdcall sub_848f60(void*, void*, void*, void*, int, void*);
extern "C" void __stdcall sub_49a1c0(void*);
extern "C" void __stdcall sub_570b10(void*);
extern "C" void __stdcall sub_444d80(void*);
extern "C" void __stdcall sub_718a32(void*);
extern "C" void* __stdcall sub_89e4b4();
extern "C" void* __stdcall sub_89e4c4();
extern "C" void* __stdcall sub_89e1a4();
extern "C" void __stdcall sub_89e1d0(void*);
extern "C" void __stdcall sub_89e9ac();
extern "C" void* __stdcall sub_924c98();
extern "C" void* __stdcall sub_a3d410();

void MegaTextureProxy::build()
{
    if (field_34 != 0)
        return;

    void* v1 = sub_6425f0();
    int count = (*(int*)((char*)v1 + 0x10) - *(int*)((char*)v1 + 0xc)) >> 2;
    int* pcount = &count;
    if (count >= 0x20)
        pcount = (int*)0x8acb58;
    int n = *pcount;

    int local24 = 0;
    int local28 = 0;
    sub_572d90(&local24, 8, &field_c);

    int a = local24;
    int b = local28;
    sub_5715c0(&local24, 3, a << 5, b);

    char flag = 1;
    int i = 0;
    if (n > 0) {
        do {
            void* v2 = sub_6425f0();
            int cnt = (*(int*)((char*)v2 + 0x10) - *(int*)((char*)v2 + 0xc)) >> 2;
            if (i >= cnt)
                sub_89e9ac();
            void* p = (void*)(*(int*)((char*)v2 + 0xc) + i * 4);
            char buf[0x100];
            sub_642c10(p, buf);
            sub_572dc0(&local24, buf);

            char table[0x300];
            int k = 0xff;
            char* t = table + 2;
            do {
                t[-2] = 0;
                t[-1] = 0;
                t[0] = 0;
                t += 3;
                k--;
            } while (k >= 0);

            int j = 0;
            char* dst = table;
            do {
                char tmp[3];
                tmp[0] = 0;
                tmp[1] = 0;
                *(short*)dst = *(short*)tmp;
                dst[2] = 0;
                sub_848e60(&local24, dst);
                j++;
                dst += 3;
            } while (j < 0x100);

            int w = local24;
            int h = local28;
            int y = 0;
            if (w > 0) {
                do {
                    int x = 0;
                    if (h > 0) {
                        do {
                            int idx = x * w + y;
                            char* src = (char*)(local24 + idx * 3);
                            unsigned char c = *(unsigned char*)src;
                            char* e = table + c * 3;
                            char* d = (char*)(local28 + idx * 3);
                            *(short*)d = *(short*)e;
                            d[2] = e[2];
                            x++;
                        } while (x < h);
                    }
                    y++;
                } while (y < w);
            }
            i++;
        } while (i < n);
    }

    sub_49a1c0(&local24);
    sub_89e4b4();
    sub_848f60(&local24, &local24, &local24, &local24, 2, &local24);

    void* newp = (void*)(local24);
    if (field_30 != newp) {
        if (field_30 != 0) {
            if (sub_89e1a4() == 0) {
                sub_444d80(field_30);
                if (field_30 != 0) {
                    void** vt = *(void***)field_30;
                    void (*dtor)(void*, int) = (void (*)(void*, int))vt[0];
                    dtor(field_30, 1);
                }
            }
            field_30 = 0;
        }
        if (newp != 0) {
            field_30 = newp;
            sub_89e1d0((char*)newp + 4);
        }
    }

    if (local24 != 0) {
        if (sub_89e1a4() == 0) {
            void* p = (void*)(local24 + 8);
            while (p != 0) {
                void** vt = *(void***)p;
                void (*dtor)(void*) = (void (*)(void*))vt[0];
                dtor(p);
                void* next = *(void**)((char*)p + 4);
                sub_718a32(p);
                p = next;
            }
        }
        local24 = 0;
    }

    sub_89e4c4();

    if (field_40 != 0) {
        if (sub_89e1a4() == 0) {
            sub_444d80(field_40);
            if (field_40 != 0) {
                void** vt = *(void***)field_40;
                void (*dtor)(void*, int) = (void (*)(void*, int))vt[0];
                dtor(field_40, 1);
            }
        }
        field_40 = 0;
    }

    sub_570b10(&local24);
    sub_570b10(&local24);
    field_34 = 1;
}
