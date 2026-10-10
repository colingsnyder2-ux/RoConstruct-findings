// from server: 62% by colin
struct T_func_00561fd0 {
    char pad[0xc];
    void* field_c;
    bool m();
};

extern "C" void* __fastcall func_0048cf60(void*);

bool T_func_00561fd0::m()
{
    void* p = field_c;
    if (p == 0) {
        return false;
    }
    void* q = func_0048cf60(p);
    if (q == 0) {
        return false;
    }
    void* r = *(void**)((char*)q + 0xc0);
    if (r == 0) {
        return false;
    }
    char* begin = *(char**)((char*)r + 4);
    if (begin == 0) {
        return false;
    }
    char* end = *(char**)((char*)r + 8);
    int count = (int)((end - begin) >> 3);
    return count != 0;
}
