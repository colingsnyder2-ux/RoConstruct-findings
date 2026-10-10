// from server: 36% by colin
extern "C" int __stdcall pubsync_streambuf(void*);
extern "C" void __cdecl sub_54b740(void*, void*, int, int);

struct S {
    char pad0[0x14];
    void* p14;
    char pad18[0xC];
    void* p24;
    char pad28[0x20];
    void* p48;
    int f();
};

int S::f()
{
    int result;
    int diff = *(int*)(*(int*)((char*)this + 0x24)) - *(int*)(*(int*)((char*)this + 0x14));
    if (diff > 0) {
        sub_54b740((char*)this + 0x40, *(void**)((char*)this + 0x48), *(int*)(*(int*)((char*)this + 0x14)), diff);
    }
    result = 1;
    if (*(void**)((char*)this + 0x48) != 0) {
        if (pubsync_streambuf(*(void**)((char*)this + 0x48)) == -1)
            result = 0;
    }
    return result;
}
