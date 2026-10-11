// from server: 67% by atomic.potato
struct P8ModelInstance_GetSetImpl
{
    char pad[0x18];
    void* fn;
    int offset1c;
    int offset20;
    bool set(void* arg1, void* arg2);
};

bool P8ModelInstance_GetSetImpl::set(void* arg1, void* arg2)
{
    char* p = (char*)arg1;
    if (p)
    {
        p -= 0x18;
    }
    else
    {
        p = 0;
    }
    int idx = *(int*)arg2;
    int off = *(int*)(p + 0x90);
    int val = *(int*)(off + offset20);
    val += offset1c;
    void* fnptr = fn;
    char* base = p + 0x90;
    return ((bool (__thiscall*)(void*, int))fnptr)(base + val, idx);
}
