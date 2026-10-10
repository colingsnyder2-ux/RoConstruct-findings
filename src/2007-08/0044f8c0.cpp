// from server: 56% by colin
struct VerbBinder {
    char pad[0x54];
    int field54;
    char pad2[0x0c];
    int field64;
    void addBinding(int, int);
};

extern "C" int __stdcall sub_464EC0(int, int);
extern "C" int __stdcall sub_4339D0(int, int);
extern "C" int __stdcall sub_52CB30();

void VerbBinder::addBinding(int a, int b)
{
    int local;
    if (b != 0) {
        sub_464EC0((int)(this) + 0x64, (int)&local);
        int v = *(int*)((char*)this + 0x54);
        int w = *(int*)(b + 4);
        local = v;
        int* p = (int*)sub_4339D0((int)(this) + 0x54, (int)&local);
        *p = w;
    } else {
        int r = sub_52CB30();
        int v = *(int*)((char*)this + 0x54);
        local = v;
        int* p = (int*)sub_4339D0((int)(this) + 0x54, (int)&local);
        *p = r;
    }
}
