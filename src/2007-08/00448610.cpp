// from server: 42% by colin
struct CIDEDocManager {
    void* vtable;
};

struct String {
    char pad[28];
};

extern "C" void* __stdcall sub_77E69C(void*);
extern "C" void __stdcall sub_77E6AC(void*);

int __stdcall sub_448610(CIDEDocManager* self, int a, int b, int c, int d, int e, int f, int g, int h) {
    String s;
    sub_77E69C(&s);
    void* fn = self->vtable;
    int result = ((int (__thiscall*)(CIDEDocManager*, int, int, int, int, int, int, int, int))fn)(self, a, b, c, d, e, f, g, h);
    sub_77E6AC(&s);
    return result;
}
