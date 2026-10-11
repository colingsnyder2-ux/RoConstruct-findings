// from server: 67% by atomic.potato
struct Inner {
    char pad[0x30];
};

struct Outer {
    char pad0[0x8c];
    Inner inner;
    bool Method(int arg);
};

extern "C" void __stdcall sub_49F8B0(void*);
extern "C" void* __stdcall sub_5764A0(int);
extern "C" bool __stdcall sub_698AA0(void*, void*);
extern "C" void __stdcall sub_703750(void*, void*, int, float, float, void*);

extern float g_8baa40;

bool Outer::Method(int arg)
{
    Inner local;
    sub_49F8B0(&local);
    if (sub_698AA0((char*)this - 0x8c, &local))
    {
        void* p = sub_5764A0(1);
        sub_703750(p, &local, 2, 1.0f, g_8baa40, (void*)arg);
    }
    return true;
}
