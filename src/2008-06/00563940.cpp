// from server: 38% by atomic.potato
struct Temporary
{
};

extern "C" Temporary* __cdecl f501ae0(Temporary*);
extern "C" int __cdecl f5631c0(Temporary*);

int f00563940(Temporary* p)
{
    Temporary* a = f501ae0(p);
    int value = *(int*)((char*)a + 0x64);
    f5631c0(p);
    return value;
}
