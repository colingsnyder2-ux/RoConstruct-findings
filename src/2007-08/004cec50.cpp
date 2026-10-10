// from server: 52% by colin
struct G3D_VVector3_Table {
    void* field0;
    G3D_VVector3_Table* construct(void* arg1, void* arg2);
};

extern "C" void* __cdecl operator_new(unsigned int size);

G3D_VVector3_Table* G3D_VVector3_Table::construct(void* arg1, void* arg2) {
    void* mem;
    this->field0 = 0;
    mem = operator_new(0x14);
    if (mem != 0) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x79f070;
        *(void**)((char*)mem + 0xc) = arg1;
    } else {
        mem = 0;
    }
    this->field0 = mem;
    return this;
}
