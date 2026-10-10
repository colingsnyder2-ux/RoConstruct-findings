// from server: 53% by colin
struct ResizeTool {
    char pad0[0x1c];
    void* ptr1c;
    char pad20[0x8];
    void* ptr28;
    char pad2c[0x14];
    int field40;
    int field44;
    int field48;

    void sub_5fccd0(void*);
    void sub_5e5630(void*);
    void* sub_5e5630_ret(void*);
    void sub_40f800();
    void sub_62fc62(void*);
    void* sub_62fef6(unsigned int);
    void sub_5fd290(void*);
};

void ResizeTool::sub_5fd290(void* arg) {
    sub_5fccd0(arg);
    if (ptr28 == 0 || *(int*)((char*)ptr28 + 4) == 0) {
        sub_5e5630(arg);
        return;
    }
    field40 = *(int*)((char*)arg + 8);
    field44 = 0;
    field48 = 0;
    *(char*)((char*)this + 0x2c) = 1;
    void* vtable = *(void**)this;
    void (*fn)(void*) = *(void (**)(void*))((char*)vtable + 0x20);
    fn(this);
    void* mem = sub_62fef6(0x2c);
    void* newObj = 0;
    if (mem != 0) {
        *(int*)((char*)mem + 4) = 0x786db0;
        *(int*)((char*)mem + 0x28) = 0x786d0c;
        int* ecx = *(int**)((char*)mem + 4);
        *(int*)mem = 0x786d9c;
        int* edx = *(int**)((char*)ecx + 4);
        *(int*)((char*)edx + (int)mem + 4) = 0x786d94;
        int global = *(int*)0x8c225c;
        *(int*)((char*)mem + 8) = 0;
        *(int*)((char*)mem + 0xc) = 0;
        *(int*)((char*)mem + 0x10) = 0;
        *(int*)((char*)mem + 0x14) = global;
        *(int*)((char*)mem + 0x18) = 0;
        *(int*)((char*)mem + 0x20) = 0;
        *(int*)((char*)mem + 0x24) = 0;
        ecx = *(int**)((char*)mem + 4);
        *(int*)mem = 0x786dac;
        edx = *(int**)((char*)ecx + 4);
        *(int*)((char*)edx + (int)mem + 4) = 0x786da4;
        newObj = mem;
    }
    void* old = ptr1c;
    if (newObj != old) {
        if (old != 0) {
            sub_40f800();
            sub_62fc62(old);
        }
    }
    ptr1c = newObj;
    void* vt = *(void**)this;
    void (*fn2)(void*, void*) = *(void (**)(void*, void*))((char*)vt + 0x3c);
    fn2(this, newObj);
}
