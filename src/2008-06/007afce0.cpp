// from server: 53% by colin
struct TextureProxyBase {
    virtual void f();
    unsigned char pad[0x54];
};

struct TextureRef {
    void* ptr;
    TextureRef();
    ~TextureRef();
    TextureRef(const TextureRef&);
    TextureRef& operator=(const TextureRef&);
};

struct TextureProxy : TextureProxyBase {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    unsigned char b4;
    unsigned char b5;
    unsigned char b6;
    unsigned char pad7;
    float f8;
    float fc;
    float f10;
    TextureRef texture;
    void construct(const TextureRef&, int, int, int, int, int, int, int, int);
};

extern "C" int __cdecl sub_4837E0(int);
extern "C" void __cdecl sub_503960(void*);
extern "C" void __cdecl sub_506A60(void*, void*);
extern "C" void __cdecl sub_506C80(void*, void*, int, void*);
extern "C" void __cdecl sub_503000(void*, void*);
extern "C" void __cdecl sub_5026D0(void*, int, int);
extern "C" void __cdecl sub_6A067A(void*);
extern "C" void* __cdecl sub_7AFC60(void*, void*);
extern "C" void* __cdecl sub_7B1580(void*, void*);
extern "C" void* __cdecl sub_7B1650(void*);
extern "C" void* __cdecl sub_7B2520(void*, void*);
extern "C" void* __cdecl sub_501D80(void*, void*);

extern float g_827490;
extern float g_82748C;
extern float g_827488;
extern float g_827494;
extern float g_874D88;
extern double g_96F018;
extern int g_96F020;
extern double* g_8024AC;
extern void* g_8021AC;
extern void* g_8021B0;

void TextureProxy::construct(const TextureRef& tex, int a, int b, int c, int d, int e, int f, int g, int h)
{
    void* p = tex.ptr;
    int v44 = *(int*)((char*)p + 0x44);
    int v50 = *(int*)((char*)p + 0x50);
    int ebx = 8;
    if (v50 < 8) ebx = v50;
    int r = sub_4837E0(0xD31) - 3;
    if (v44 < r) r = v44;
    fc = 1.0f;
    f10 = 0.0f;
    b3 = 0;
    b1 = 1;
    b0 = 0;
    b2 = 0;
    b4 = 0;
    b5 = 0;
    b6 = 0;
    int ecx = (r > 0) ? 0 : -1;
    ecx &= r;
    if ((g_96F020 & 1) == 0) {
        g_96F020 |= 1;
        g_96F018 = *g_8024AC;
    }
    f8 = -(float)g_96F018;
    sub_503960((void*)&texture);
    sub_506A60((void*)texture.ptr, p);
    sub_4837E0(0xD57);
    float t = *(float*)((char*)&tex + 0);
    (void)t;
    if (!(g_827490 < *(float*)((char*)&a))) {
        b3 = 1;
    }
    fc = g_82748C * *(float*)((char*)&a);
    if (!(g_874D88 < *(float*)((char*)&a))) {
        b5 = 1;
    }
    f10 = *(float*)((char*)&a) * g_827488 - g_827494;
    if (*(unsigned char*)((char*)&b) != 0 && ebx > 0) {
        b0 = 1;
        ebx = 1;
        if (ecx != 0) {
            b1 = 0;
        }
    }
    {
        void* q = texture.ptr;
        int v4c = *(int*)((char*)q + 0x4C);
        int v50b = *(int*)((char*)q + 0x50);
        int end = v50b + v4c * 0x50;
        int cnt = (end - v4c) / 0x50;
        sub_506C80((void*)v4c, (void*)end, cnt, (void*)0x5058F0);
    }
    {
        void* q = texture.ptr;
        int v50c = *(int*)((char*)q + 0x50);
        int n = v50c - ebx;
        if (n > 0) {
            int i = 0;
            while (i < n) {
                void* q2 = texture.ptr;
                int v50d = *(int*)((char*)q2 + 0x50);
                int idx = v50d - n + i;
                void* elem = (void*)(*(int*)((char*)q2 + 0x4C) + idx * 0x50);
                sub_503000((void*)((char*)q2 + 0x40), elem);
                i++;
            }
            void* q3 = texture.ptr;
            int v50e = *(int*)((char*)q3 + 0x50);
            sub_5026D0((void*)((char*)q3 + 0x4C), v50e - n, 1);
        }
    }
    {
        void* q = texture.ptr;
        int v40 = *(int*)((char*)q + 0x40);
        int v44b = *(int*)((char*)q + 0x44);
        int end = v40 + v44b * 0x50;
        int cnt = (end - v40) / 0x50;
        sub_506C80((void*)v40, (void*)end, cnt, (void*)0x5058F0);
    }
    {
        void* q = texture.ptr;
        int v44c = *(int*)((char*)q + 0x44);
        int n = v44c - ecx;
        if (n > 0) {
            int v44d = *(int*)((char*)q + 0x44);
            sub_5026D0((void*)((char*)q + 0x40), v44d - n, 1);
        }
    }
    b2 = (b0 == 0) ? 1 : 0;
    {
        void* q = texture.ptr;
        int v44e = *(int*)((char*)q + 0x44);
        int i = 0;
        while (i < v44e) {
            void* q2 = texture.ptr;
            i++;
            if (i >= *(int*)((char*)q2 + 0x44)) break;
        }
    }
    {
        void* q = texture.ptr;
        int v50f = *(int*)((char*)q + 0x50);
        int i = 0;
        while (i < v50f) {
            void* q2 = texture.ptr;
            i++;
            if (i >= *(int*)((char*)q2 + 0x50)) break;
        }
    }
    if (b4 != 0) {
        void* t1 = sub_7AFC60((void*)&texture, (void*)0);
        sub_7B1650(t1);
        void* t2 = sub_7AFC60((void*)&texture, (void*)&tex);
        void* t3 = sub_7B2520(t2, (void*)&tex);
        void* nb = *(void**)t3;
        void* old = texture.ptr;
        if (nb != old) {
            if (old != 0) {
                if (((int(__stdcall*)(void*))g_8021AC)((char*)old + 4) == 0) {
                    void* node = *(void**)((char*)old + 8);
                    while (node != 0) {
                        void* vt = *(void**)node;
                        ((void(__thiscall*)(void*))(*(void**)((char*)vt + 4)))(node);
                        void* cur = node;
                        node = *(void**)((char*)node + 4);
                        sub_6A067A(cur);
                    }
                    if (old != 0) {
                        void* vt = *(void**)old;
                        ((void(__thiscall*)(void*, int))(*(void**)vt))(old, 1);
                    }
                }
            }
            texture.ptr = 0;
        }
        if (nb != 0) {
            texture.ptr = nb;
            ((void(__stdcall*)(void*))g_8021B0)((char*)nb + 4);
        }
    }
    {
        void* tmp = (void*)0;
        if (tmp != 0) {
            if (((int(__stdcall*)(void*))g_8021AC)((char*)tmp + 4) == 0) {
                void* node = *(void**)((char*)tmp + 8);
                while (node != 0) {
                    void* vt = *(void**)node;
                    ((void(__thiscall*)(void*))(*(void**)((char*)vt + 4)))(node);
                    void* cur = node;
                    node = *(void**)((char*)node + 4);
                    sub_6A067A(cur);
                }
                if (tmp != 0) {
                    void* vt = *(void**)tmp;
                    ((void(__thiscall*)(void*, int))(*(void**)vt))(tmp, 1);
                }
            }
        }
    }
    void* t4 = sub_7AFC60((void*)&tex, (void*)&h);
    void* t5 = sub_7B1580(t4, (void*)&h);
    sub_501D80((void*)this, t5);
}
