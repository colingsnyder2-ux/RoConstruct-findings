// from server: 52% by colin
struct Creator {
    void* ptr;
    Creator(int arg0, int arg1);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Creator::Creator(int arg0, int arg1)
{
    ptr = 0;
    void* mem = operator_new(0x14);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x7af6f0;
        *(int*)((char*)mem + 0xc) = arg0;
    } else {
        mem = 0;
    }
    ptr = mem;
}
