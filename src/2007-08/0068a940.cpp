// from server: 85% by colin
struct CXTPControlTabWorkspace {
    void f();
};

void CXTPControlTabWorkspace::f() {
    int v[4];
    *(int*)((char*)this + 0xa8) = 1;
    int* p = *(int**)((char*)this - 0x6c);
    (*(void(__thiscall**)(int*))(*(int*)p + 0x17c))(p);
    v[0] = *(int*)((char*)this - 0xa8);
    v[1] = *(int*)((char*)this - 0xa4);
    v[2] = *(int*)((char*)this - 0xa0);
    v[3] = *(int*)((char*)this - 0x9c);
    void (__thiscall* fn)(void*, int, int*) = *(void(__thiscall**)(void*, int, int*))(*(int*)this + 0x34);
    fn(this, 0, v);
}
