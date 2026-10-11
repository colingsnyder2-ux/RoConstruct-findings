// from server: 12% by atomic.potato
struct Slot {
    char pad[0xc];
    void method(int);
};

void Slot::method(int a) {
    ((void (__thiscall*)(void*, int))0x8422a0)((char*)this + 0xc, a);
}
