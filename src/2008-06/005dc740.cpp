// from server: 74% by colin
struct RBX_Humanoid_005dc740 {
    char pad0[0x10];
    int refcount;
    int field14;
    char pad18[0x78 - 0x18];
    int field78;
    float field7c;

    void func(void* a, void* b, float c);
};

extern "C" void* __stdcall sub_6a17c6(void*, void*, void*, void*, void*);
extern "C" void* __cdecl sub_59a9e0(void*);
extern "C" void __cdecl sub_645450(void*, void*, float);
extern "C" void* __cdecl sub_5d8b10(void*);
extern "C" void __cdecl sub_5e75b0(void*, int);
extern "C" void __cdecl sub_5dc6c0(void*);

void RBX_Humanoid_005dc740::func(void* a, void* b, float c)
{
    if (field78 != 0) {
        void* p = sub_6a17c6(*(void**)((char*)this - 0xa0), 0, (void*)0x92907c, (void*)0x932a40, 0);
        if (p != 0) {
            void* q = sub_59a9e0(p);
            sub_645450(&field7c, q, c);
        }
        char* base = (char*)this - 0x1a4;
        void* r = sub_5d8b10(base);
        if (r != 0) {
            char* s = (char*)r + 0x228;
            if (s != 0) {
                void* t = sub_5d8b10(base);
                void* u;
                if (t != 0)
                    u = (char*)t + 0x228;
                else
                    u = 0;
                sub_5e75b0(u, 0);
            }
        }
        sub_5dc6c0(base);
        if (refcount > 0) {
            refcount--;
            if (refcount == 0)
                field14 = 3;
        }
    }
}
