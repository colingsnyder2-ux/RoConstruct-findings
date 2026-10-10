// from server: 81% by colin
struct Flag {
    char pad[0x168];
    void* field_168;
    char pad2[0x220 - 0x16c];
    void* field_220;
    void construct(int);
};

void Flag::construct(int arg) {
    if (arg != 0) {
        *(void**)((char*)this + 0x168) = (void*)0x7bb71c;
        *(void**)((char*)this + 0x220) = (void*)0x7a4ccc;
    }
    ((void (__thiscall*)(Flag*, int))0x5e7350)(this, 0);
    void* v = *(void**)((char*)this + 0x168);
    *(void**)this = (void*)0x7bd754;
    *(void**)((char*)this + 4) = (void*)0x7bd748;
    *(void**)((char*)this + 0x10) = (void*)0x7bd740;
    *(void**)((char*)this + 0x14) = (void*)0x7bd730;
    *(void**)((char*)this + 0x2c) = (void*)0x7bd720;
    *(void**)((char*)this + 0x44) = (void*)0x7bd710;
    *(void**)((char*)this + 0x5c) = (void*)0x7bd700;
    *(void**)((char*)this + 0x74) = (void*)0x7bd6f0;
    *(void**)((char*)this + 0x8c) = (void*)0x7bd6e0;
    *(void**)((char*)this + 0xe8) = (void*)0x7bd6d8;
    *(void**)((char*)this + 0x158) = (void*)0x7bd6c0;
    int* p = *(int**)((char*)v + 4);
    *(void**)((char*)p + (int)this + 0x168) = (void*)0x7bd6b8;
    void* v2 = *(void**)((char*)this + 0x168);
    int* p2 = *(int**)((char*)v2 + 4);
    int off = (int)p2 - 0xb8;
    *(int*)((char*)p2 + (int)this + 0x164) = off;
}
