// from server: 39% by colin
struct Feature {
    char pad[0xbc];
    void* field_bc;
    bool method_5da6d0(void* out);
};

struct Unk1 { void method(void* out); };
struct Unk2 { void* method(void* a, void* b); };
struct Unk3 { void* method(); };

extern "C" void* __stdcall sub_630d36(void* a, void* b, void* c, void* d, void* e);

bool Feature::method_5da6d0(void* out) {
    char buf[0x60];
    void* result = sub_630d36(field_bc, 0, (void*)0x881f4c, (void*)0x884a28, 0);
    if (result == 0) {
        return false;
    }
    ((Unk1*)this)->method(buf);
    void* tmp = ((Unk2*)result)->method(buf, buf + 0x34);
    void* src = ((Unk3*)tmp)->method();
    int* d = (int*)out;
    int* s = (int*)src;
    for (int i = 0; i < 9; i++) {
        d[i] = s[i];
    }
    *(float*)((char*)out + 0x24) = *(float*)((char*)src + 0x24);
    *(float*)((char*)out + 0x28) = *(float*)((char*)src + 0x28);
    *(float*)((char*)out + 0x2c) = *(float*)((char*)src + 0x2c);
    return true;
}
