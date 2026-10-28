// from server: 0% by atomic.potato
extern "C" void* __cdecl sub_7A79A0(unsigned int);

struct ImageButton {
    void* field0;
    void* construct(void* arg);
};

void* ImageButton::construct(void* arg) {
    void* p = sub_7A79A0(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0xA52700;
        *(void**)((char*)p + 0xC) = arg;
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}
