// from server: 81% by colin
struct ClientProxy {
    void* vfptr;
    char pad[4];
    int field8;
    int fieldC;
    int field10;
    int field14;
    void* construct(int, int, int, int, int);
};

extern "C" bool __cdecl func_0060a2f0(int* out);

void* ClientProxy::construct(int a1, int a2, int a3, int a4, int a5)
{
    int local;
    this->vfptr = 0;
    if (!func_0060a2f0(&local)) {
        int* p = &this->field8;
        if (p) {
            p[0] = local;
            p[1] = *(int*)((char*)&local + 4);
            p[2] = *(int*)((char*)&local + 8);
            p[3] = *(int*)((char*)&local + 12);
        }
        this->vfptr = (void*)0x82351c;
        return this;
    }
    this->vfptr = 0;
    return this;
}
