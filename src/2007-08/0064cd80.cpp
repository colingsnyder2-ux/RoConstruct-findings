// from server: 32% by colin
struct CXTPImageManagerIconSet {
    char pad[0x10];
    void* map;
    void* sub_6491D0(void*);
    void* sub_649BC0(void*, void*, void*, void*);
    void* sub_634A60(void*, void*);
    void* sub_6353A0(void*);
    void* func(void*);
};

void* CXTPImageManagerIconSet::func(void* arg) {
    void* local = 0;
    if (sub_634A60(&local, arg) != 0) {
        return local;
    }
    sub_6491D0(&local);
    void* obj = sub_649BC0(*(void**)((char*)this + 0x10), local, *(void**)((char*)this + 0x14), arg);
    void* slot = sub_6353A0(&local);
    *(void**)slot = obj;
    return obj;
}
