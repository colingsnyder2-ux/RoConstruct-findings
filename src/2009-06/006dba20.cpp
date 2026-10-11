// from server: 76% by atomic.potato
struct Obj {
    void* vtable;
    char pad[0x24];
    void* field28;
};

struct A {
    void* vtable;
    char pad[4];
    void release(int);
};

struct B {
    void* vtable;
    char pad[4];
    void release(int);
};

struct C {
    void* vtable;
    char pad[4];
    void release(int);
};

void* __fastcall sub_66f970(void*);
void* __fastcall sub_66f960(void*);
void* __fastcall sub_66f950(void*);
void __fastcall sub_67edf0(void*, void**);
void __fastcall sub_6d2460(void*, int);
void __fastcall sub_6db9d0(void*, void*);

struct TreeStage {
    void func(void* arg);
};

void TreeStage::func(void* arg)
{
    void* a = sub_66f970(arg);
    void* b = sub_66f960(arg);
    void* c = sub_66f950(arg);
    sub_6db9d0(this, a);
    sub_67edf0((char*)this + 0x28, &a);
    sub_6d2460((char*)b + 8, 0);
    sub_6d2460(c, 0);
    sub_6d2460((char*)arg + 8, 0);
    if (b) {
        (*(void(__thiscall**)(void*, int))*(void**)b)(b, 1);
    }
    if (c) {
        (*(void(__thiscall**)(void*, int))((*(void***)c)[7]))(c, 1);
    }
    if (a) {
        (*(void(__thiscall**)(void*, int))*(void**)a)(a, 1);
    }
}
