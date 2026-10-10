// from server: 90% by colin
struct VStockSound_FactoryProduct {
};

void* __cdecl f(void* p) {
    void* a = *(void**)p;
    void* b = *(void**)((char*)p + 4);
    void* r = ((void* (__thiscall*)(void*, void*))a)(b, b);
    return *(void**)r;
}
