// from server: 51% by colin
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct StdString {
    void* pad[4];
    StdString();
    StdString(const StdString&);
    ~StdString();
};

extern "C" void __cdecl sub_70BDF0(void*);
extern "C" void __cdecl sub_5C3F80(StdString*, const StdString*, int);
extern "C" void __cdecl sub_5C3FD0(void*, int);
extern "C" void __cdecl sub_5C42D0(StdString*);
extern "C" void __cdecl sub_569620(void*);
extern "C" void __cdecl sub_5693A0(void*, const char*, unsigned int, int);
extern "C" void __cdecl sub_600660(void*);
extern "C" void* __cdecl sub_508410();
extern "C" void* __cdecl sub_49E890();
extern "C" void* __cdecl sub_4C9910();

struct Scope {
    const char* name;
    void* previous;
    bool enabled;
    double startTime;
    Scope(const char*, bool);
    ~Scope();
};

struct ClientProxy {
    char pad0[4];
    double field4;
    char padC[4];
    void* field10;
    char pad14[0x148];
    unsigned char field15C;
    char pad15D[0x4B];
    int field1A8;
    char pad1AC[0xC];
    int field1B8;
    int field1BC;
    int field1C0;
    char pad1C4[4];
    int field1C8;
    int field1CC;
    int field1D0;
    int field1D4;
    char pad1D8[8];
    int field1E0;
    int field1E4;
    char pad1E8[0x288];
    int field2A70_neg; // at -0x2a70 from esi

    void method(void* arg);
};

void ClientProxy::method(void* arg)
{
    sub_70BDF0(arg);

    if (*(int*)((char*)this - 0x2a70) == 0)
        return;

    StdString s1;
    sub_5C3F80(&s1, (const StdString*)&field1A8, 0);

    double t = *(double*)sub_508410();
    void* g = sub_49E890();
    float inv = 1.0f / *(float*)((char*)g + 0x150);
    double sum = (double)inv + field4;
    if (!(sum > t))
    {
        sub_5C42D0(&s1);
        return;
    }

    unsigned char saved = field15C;
    if (saved)
    {
        StdString s2;
        sub_5C3F80(&s2, (const StdString*)&field1BC, 0);
        StdString s3;
        sub_5C3F80(&s3, (const StdString*)&field1C0, 0);
        void* v = *(void**)field10;
        void (*fn)(void*) = *(void (**)(void*))((char*)*(void**)v + 4);
        fn(v);
        sub_5C42D0(&s3);
        sub_5C42D0(&s2);
    }

    void* result = 0;
    {
        void* v = *(void**)arg;
        int (*fn)(void*, int, int) = *(int (**)(void*, int, int))((char*)v + 0x10c);
        result = (void*)fn(arg, field1E0, field1E4);
    }

    if (result)
    {
        sub_5C3FD0((void*)field1C8, *(int*)((char*)result + 0x94));
        sub_5C3FD0((void*)field1CC, *(int*)((char*)result + 0x78));
        sub_5C3FD0((void*)field1D0, *(int*)((char*)result + 0x64));
        sub_5C3FD0((void*)field1D4, *(int*)((char*)result + 0x68));

        void* g2 = sub_49E890();
        int ecx = *(int*)((char*)result + 8) + *(int*)((char*)result + 4);
        int ebp = *(int*)((char*)g2 + 0x14c) - ecx;

        if (ebp >= 1 && *(unsigned char*)((char*)result + 0xc4) == 0)
        {
            if (saved)
            {
                int r = ((int (__thiscall*)(void*, int))0x4ab9c0)((char*)this - 0x2b74, 1);
                ebp -= r;
            }
            void* self = (char*)this - 0x2b74;
            bool b = ((bool (__thiscall*)(void*))0x4b0f70)(self);
            if (b)
                ebp--;
            if (saved)
            {
                ((void (__thiscall*)(void*, int))0x4ab9c0)(self, ebp);
            }
            field4 = t;
        }

        void* g3 = sub_49E890();
        if (*(unsigned char*)((char*)g3 + 0x133) != 0)
        {
            unsigned int edi = *(unsigned int*)((char*)result + 8) + *(unsigned int*)((char*)result + 4) * 2;
            void* g4 = sub_49E890();
            if (edi > *(unsigned int*)((char*)g4 + 0x14c))
            {
                void* out;
                sub_569620(&out);
                sub_5693A0(out, "SendBuffer = %d", edi, 2);
                sub_600660(&out);
            }
            else if (edi > 0)
            {
                void* out;
                sub_569620(&out);
                sub_5693A0(out, "SendBuffer = %d", edi, 1);
                sub_600660(&out);
            }
        }
    }

    if (!saved)
    {
        StdString s4;
        sub_5C3F80(&s4, (const StdString*)&field1B8, 0);
        void* v = *(void**)field10;
        void* fn = *(void**)((char*)*(void**)v + 4);
        void* p = sub_4C9910();
        ((void (__thiscall*)(void*, void*))fn)(v, p);
        sub_5C42D0(&s4);
    }

    sub_5C42D0(&s1);
}
