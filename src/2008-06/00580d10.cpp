// from server: 19% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Selection {
    char padding[0x13c];
    unsigned int* begin;
    unsigned int* end;
    unsigned int* capacity;
};

struct DataModel {
    char padding[0x134];
    void* selection;
};

struct Verb {
    char padding[0x20];
    void* dataState;
};

struct S {
    char padding[0x4];
    void* doc;
    char padding2[0x8];
    void* state;
    char padding3[0x8];
    DataModel* dataModel;
    bool doIt(void*);
};

extern "C" void __cdecl invalid_parameter_noinfo();
extern "C" void __cdecl mfc798();
extern "C" void __cdecl mfc800();

extern void __cdecl sub_57d250();
extern void* __cdecl sub_5806c0();
extern void* __cdecl sub_6a0920(unsigned int);
extern void __cdecl sub_42af90(void*, void*);
extern void __cdecl sub_420110(void*, void*);
extern void __cdecl sub_420d20(void*, void*, void*, void*, void*);
extern void* __cdecl sub_4531e0();
extern void __cdecl sub_5bd820(void*, int);
extern void __cdecl sub_58c5c0(void*, void*);
extern void __cdecl sub_6a067a(void*);
extern void __cdecl sub_5a2fe0(void*);
extern void __cdecl sub_57fb10(void*, void*);

bool S::doIt(void*)
{
    sub_57d250();

    void* local10;
    if (dataModel != 0) {
        local10 = sub_5806c0();
    } else {
        local10 = 0;
    }

    void* p = sub_6a0920(4);
    void* local38;
    if (p != 0) {
        local38 = &local38;
        *(void**)p = local38;
    } else {
        local38 = 0;
    }

    void* local44 = 0;
    void* local48 = 0;
    void* local4c = 0;

    Selection* sel = (Selection*)dataModel;
    unsigned int* it = sel->begin;
    unsigned int* end = sel->end;

    if (it != end) {
        do {
            void* obj = *(void**)it;
            void* tmp;
            sub_42af90((char*)obj + 0xe4, &tmp);
            sub_420110(&local38, tmp);

            RefCounted* rc = (RefCounted*)tmp;
            if (rc != 0) {
                if (_InterlockedExchangeAdd(&rc->strong, -1) == 1) {
                    rc->dispose();
                    if (_InterlockedExchangeAdd(&rc->weak, -1) == 1) {
                        rc->destroy();
                    }
                }
            }
            it++;
        } while (it != end);
    }

    void* p2 = sub_6a0920(4);
    void* local24;
    if (p2 != 0) {
        local24 = &local24;
        *(void**)p2 = local24;
    } else {
        local24 = 0;
    }

    void* local30 = 0;
    void* local34 = 0;
    void* local38b = 0;

    void* local1c = &local24;
    void* local20 = &local24;

    unsigned int* it2 = (unsigned int*)local48;
    unsigned int* end2 = (unsigned int*)local4c;
    while (it2 != end2) {
        sub_57fb10(&local1c, it2);
        it2 += 2;
    }

    if (*(char*)&local24 != 0) {
        sub_420d20(dataModel->selection, local20, local30, local34, local38b);
    }

    void* v = sub_4531e0();
    sub_5bd820(v, 8);

    sub_58c5c0((char*)state + 8, *(void**)((char*)state + 0xc));

    void* q = *(void**)local10;
    (*(void(__thiscall**)(void*, int))q)(local10, 1);

    if (local24 != 0) {
        sub_6a067a(local24);
    }
    if (local20 != 0) {
        sub_6a067a(local20);
    }

    sub_5a2fe0(&local38);

    return true;
}
