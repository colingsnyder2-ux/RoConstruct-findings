// from server: 19% by colin
struct LDraw2RobloxMapRoot {
    void f(void* a, unsigned int count, void* c);
};

void LDraw2RobloxMapRoot::f(void* a, unsigned int count, void* c)
{
    char* p = (char*)a;
    while (count > 0) {
        if (p != 0) {
            ((void (__thiscall*)(void*, void*))0x46deb0)(p, c);
        }
        count--;
        p += 0x40;
    }
}
