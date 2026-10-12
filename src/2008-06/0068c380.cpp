// from server: 76% by colin




struct RbxSceneManager {
    void func(int a, int b, int c, int d, int e, int f, bool h);
};

void RbxSceneManager::func(int a, int b, int c, int d, int e, int f, bool h)
{
    void* p = *(void**)((char*)this + 0x34);
    (*(void (__thiscall**)(void*, int))(*(int*)p + 0x60))(p, a);
    p = *(void**)((char*)this + 0x34);
    (*(void (__thiscall**)(void*, int))(*(int*)p + 0x68))(p, b);
    p = *(void**)((char*)this + 0x34);
    (*(void (__thiscall**)(void*, int))(*(int*)p + 0x6c))(p, c);
    if (h) {
        p = *(void**)((char*)this + 0x34);
        (*(void (__thiscall**)(void*))(*(int*)p + 0xc4))(p);
    }
    (*(void (__thiscall**)(RbxSceneManager*, int, int, int))(*(int*)this + 0x380))(this, d, 0, 1);
    p = *(void**)((char*)this + 0x34);
    (*(void (__thiscall**)(void*, int))(*(int*)p + 0x13c))(p, e);
    if (h) {
        p = *(void**)((char*)this + 0x34);
        (*(void (__thiscall**)(void*))(*(int*)p + 0xc8))(p);
    }
}
