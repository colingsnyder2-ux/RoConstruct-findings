// from server: 25% by colin
struct RBX_P8Decal_GetSetImpl {
    char pad0[8];
    int (__stdcall *get)(void*, void*);
    char pad1[4];
    void* set;
    void* operator()(void* a, void* b);
};

void* RBX_P8Decal_GetSetImpl::operator()(void* a, void* b)
{
    void* result;
    void* tmp;
    char buf[0x24];
    int flag;

    tmp = 0;
    if (a != 0) {
        tmp = (char*)a - 4;
    }

    flag = 0;
    this->get((char*)this + 0xc + (int)tmp, &result);

    *(int*)((char*)b + 0x1c) = *(int*)((char*)result + 0x1c);

    return b;
}
