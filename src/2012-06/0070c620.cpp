// from server: 61% by atomic.potato
extern "C" void* __cdecl sub_98211a(size_t);
extern "C" void __cdecl sub_982114(int);

struct Hopper {
    void* createObject(int* out, int arg1, int arg2);
};

void* Hopper::createObject(int* out, int arg1, int arg2) {
    void* obj = sub_98211a(0x10);
    if (obj) {
        *(int*)obj = 0xba0238;
        *(int*)((char*)obj + 8) = arg1;
        *(int*)((char*)obj + 0xc) = arg2;
    } else {
        obj = 0;
    }
    
    *out = (int)obj;
    sub_982114(0);
    return out;
}
