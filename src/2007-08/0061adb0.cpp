// from server: 90% by colin
struct P8Camera {
    char pad[0xf8];
    char sub[0x20];
    void assign(const P8Camera& other);
};

extern "C" void* __stdcall sub_77e690(char*, const char*);

void P8Camera::assign(const P8Camera& other) {
    char* base = (char*)this + 0xf8;
    sub_77e690(base, (const char*)&other);
    *(int*)(base + 0x1c) = *(const int*)((const char*)&other + 0x1c);
}
