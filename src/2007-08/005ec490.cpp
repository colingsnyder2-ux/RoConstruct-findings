// from server: 92% by colin
struct BodyForce {
    char pad[0x10];
    void* field10;
    void computeForce(int a, int b);
};

extern "C" void __fastcall sub_530100(void* p);
extern "C" void __stdcall sub_5CF030(void* a, void* b);

void BodyForce::computeForce(int a, int b) {
    void* p = *(void**)((char*)field10 + 0x1d8);
    void* q = *(void**)((char*)p + 0x64);
    void* r = *(void**)((char*)q + 4);
    sub_530100(r);
    void* s = *(void**)((char*)r + 4);
    void* t = *(void**)((char*)s + 0x20);
    if (t != 0) {
        sub_5CF030((char*)this + 0x14, (char*)r + 0xa8);
    }
}
