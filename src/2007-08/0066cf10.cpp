// from server: 53% by colin
struct MyXTPCommandBars
{
    char pad0[0x78];
    void* field_78;
    char pad7c[0x08];
    int field_84;
    char pad88[0x18];
    int field_a0;

    int func_0066cf10(int, int);
};

extern "C" int __stdcall func_0047b540(void*);
extern "C" void* __stdcall func_00430b20(void*, int);
extern "C" void* __stdcall func_0064ea60(void*);
extern "C" void* __stdcall func_00630202(void*, void*);
extern "C" void* __stdcall func_006329a0(void*, int);
extern "C" void __stdcall func_00643640(void*, void*);
extern "C" void* __stdcall func_00643ee0(void*, int);
extern "C" void __stdcall func_0064ee00(void*, int);
extern "C" void __stdcall func_0067a5b0(void*, void*);
extern "C" void __stdcall func_0067d150(void*);
extern "C" void __stdcall func_006d2910(void*, int, void*);
extern "C" long __stdcall InterlockedIncrement(long*);

int MyXTPCommandBars::func_0066cf10(int a2, int a3)
{
    int count = func_0047b540((void*)a2);
    int i = 0;
    if (count <= 0)
        return 0;

    do
    {
        void* p = func_00430b20((void*)a2, i);
        void* q = func_00630202(func_0064ea60(p), 0);
        if (q)
        {
            void* r = func_006329a0(this, *(int*)((char*)q + 0xd4));
            (*(void (__stdcall**)(void*, int))(*(int*)p + 0x1d8))(p, a3);
            if (r)
            {
                (*(void (__stdcall**)(void*, void*, int))(*(int*)r + 0x200))(r, p, a3);
            }
            else
            {
                func_006d2910((char*)this + 0x7c, field_84, q);
                InterlockedIncrement((long*)((char*)q + 4));
                (*(void (__stdcall**)(void*, int, int))(*(int*)q + 0x1f4))(q, field_a0, 0);
                func_0064ee00(q, *(int*)((char*)q + 0xe8));
                (*(void (__stdcall**)(void*, void*))(*(int*)this + 0x78))(this, q);
            }
        }
        else
        {
            if ((*(int (__stdcall**)(void*))(*(int*)p + 0x190))(p))
            {
                if (*(int*)((char*)p + 0x200))
                {
                    void* s = func_00643ee0(field_78, *(int*)((char*)p + 0xd4));
                    (*(void (__stdcall**)(void*, int))(*(int*)p + 0x1d8))(p, a2);
                    if (s)
                    {
                        int* t = *(int**)((char*)p + 0xf8);
                        int* u = 0;
                        if (t)
                        {
                            u = t;
                            InterlockedIncrement((long*)(t + 1));
                        }
                        int* v = *(int**)((char*)s + 0xf8);
                        int* w = (int*)v[0xf];
                        if (w)
                            InterlockedIncrement((long*)(w + 1));
                        func_00643640(s, u);
                        func_00643640(p, 0);
                        if (w)
                            func_0067a5b0(*(void**)((char*)s + 0xf8), w);
                    }
                    else
                    {
                        (*(void (__stdcall**)(void*, void*))(*(int*)field_78 + 0x58))(field_78, p);
                        InterlockedIncrement((long*)((char*)p + 4));
                        int* x = *(int**)((char*)p + 0xf8);
                        if (x[0xf] == 0)
                            func_0067d150(x);
                    }
                }
            }
        }

        ++i;
    } while (i < func_0047b540((void*)a2));

    return 0;
}
