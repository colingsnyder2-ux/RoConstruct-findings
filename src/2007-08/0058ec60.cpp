// from server: 51% by colin
struct Creator {
    int* field0;
    Creator(int* a);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Creator::Creator(int* a)
{
    field0 = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x7af70c;
        *(int*)((char*)p + 0xc) = (int)a;
    } else {
        p = 0;
    }
    field0 = (int*)p;
}
