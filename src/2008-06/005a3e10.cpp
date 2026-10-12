// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    volatile long refcount;
    volatile long weakcount;
};

struct ChildList {
    char pad[0xc];
    RefCounted** begin;
    RefCounted** end;
};

struct Workspace {
    char pad[0x108];
    ChildList* children;
};

struct Descriptor {
    void* field0;
    void* field4;
    RefCounted* field8;

    void run(Workspace* ws);
};

extern "C" void __cdecl _invalid_parameter_noinfo();

void* __cdecl helper_581cc0(void* dst, int flag);
void __cdecl helper_5675d0(void* p);
void __cdecl helper_567420(void* p);
unsigned int __cdecl helper_48ae20(Workspace* ws);
int __cdecl helper_6a17c6(void* a, void* b, void* c, void* d, void* e);
unsigned int __cdecl helper_59a040(void* p);

void Descriptor::run(Workspace* ws)
{
    Descriptor local;
    local.field0 = 0;
    local.field4 = 0;
    local.field8 = 0;

    helper_581cc0(&local, 1);
    helper_5675d0(&local);

    unsigned int count = helper_48ae20(ws);
    unsigned int i = 0;
    while (i < count) {
        ChildList* list = ws->children;
        unsigned int n = (unsigned int)((list->end - list->begin) >> 3);
        if (i >= n)
            _invalid_parameter_noinfo();
        RefCounted* child = list->begin[i];
        if (helper_6a17c6(child, 0, (void*)0x92907c, (void*)0x939f70, 0) != 0) {
            if (!helper_59a040(child)) {
                helper_581cc0(&local, 1);
                helper_567420(&local);
            }
        }
        i++;
        count = helper_48ae20(ws);
    }

    RefCounted* p = local.field8;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refcount, -1) == 1) {
            p->slot0();
            if (_InterlockedExchangeAdd(&p->weakcount, -1) == 1)
                p->slot2();
        }
    }
}
