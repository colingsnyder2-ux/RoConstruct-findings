// from server: 17% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Node {
    int* first;
    int* last;
    int* end;
};

struct List {
    Node* head;
};

struct Inner {
    void* vptr;
    long refcount;
};

struct Container {
    char pad[0xC0];
    List* list;
};

struct Iter {
    int* cur;
    int* end;
};

struct Elem {
    int a;
    int b;
};

struct S {
    void f(int, int, int);
};

extern "C" void __cdecl sub_4178F0(Iter*);
extern "C" void __cdecl sub_4D0950(void*, int);
extern "C" void __cdecl sub_4CDBA0(int, int, int);

void S::f(int a, int b, int c)
{
    Container* self = (Container*)this;
    if (self->list->head == 0)
        return;

    Iter it;
    sub_4178F0(&it);

    Node* node = (Node*)it.cur;
    int* end = node->end;
    int* begin = node->first;

    if (begin > end)
        _invalid_parameter_noinfo();

    int* cur = node->first;
    if (cur > node->end)
        _invalid_parameter_noinfo();

    while (cur != end) {
        if (cur >= node->end)
            _invalid_parameter_noinfo();

        Elem* e = (Elem*)cur;
        int v0 = e->a;
        int v1 = e->b;
        Inner* inner = (Inner*)v1;
        if (inner)
            _InterlockedExchangeAdd(&inner->refcount, 1);

        sub_4D0950(&it, a);

        if (cur >= node->end)
            _invalid_parameter_noinfo();

        int v2 = e->a;
        int v3 = e->b;
        int v4 = c;
        sub_4CDBA0(v2, v3, v4);

        if (cur >= node->end)
            _invalid_parameter_noinfo();

        cur += 2;
    }

    Inner* inner = (Inner*)it.end;
    if (inner) {
        if (_InterlockedExchangeAdd(&inner->refcount, -1) == 1) {
            void (__stdcall *dtor)(Inner*) = *(void (__stdcall**)(Inner*))((char*)inner->vptr + 4);
            dtor(inner);
            if (_InterlockedExchangeAdd((volatile long*)((char*)inner + 8), -1) == 1) {
                void (__stdcall *dtor2)(Inner*) = *(void (__stdcall**)(Inner*))((char*)inner->vptr + 8);
                dtor2(inner);
            }
        }
    }
}
