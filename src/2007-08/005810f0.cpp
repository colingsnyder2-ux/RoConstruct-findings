// from server: 76% by colin
struct GetSetImpl {
    void invoke(void* obj, void* value);
};

void GetSetImpl::invoke(void* obj, void* value) {
    char* p = (char*)obj;
    if (p) {
        p -= 4;
    } else {
        p = 0;
    }
    int offset = *(int*)((char*)this + 0x20);
    int idx = *(int*)(p + 0xf8);
    int base = *(int*)(idx + offset);
    base += *(int*)((char*)this + 0x1c);
    void (__stdcall* fn)(int, void*) = *(void (__stdcall**)(int, void*))((char*)this + 0x18);
    fn(base + (int)p + 0xf8, value);
}
