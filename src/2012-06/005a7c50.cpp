// from server: 54% by atomic.potato
struct RBXImage {
    void f(char* str);
};

void RBXImage::f(char* str) {
    if (!str || !*str) {
        *(unsigned int*)this = 0xd904b8;
        return;
    }
    char* p = str;
    while (*p) p++;
    int unk = (int)(p - str) + 1;
    void (*func1)(void*) = (void(*)(void*))0x5a7ad0;
    func1(this);
    unsigned int vtable = *(unsigned int*)this;
    unsigned int unk3 = *(unsigned int*)(vtable + 0x10);
    void (*func2)(unsigned int, char*, int) = (void(*)(unsigned int, char*, int))0x98365c;
    func2(unk3, str, unk);
}
