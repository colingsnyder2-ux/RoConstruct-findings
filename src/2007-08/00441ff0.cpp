// from server: 26% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall PostMessageA(void*, unsigned int, unsigned int, int);
extern "C" void __cdecl _invalid_parameter_noinfo();

struct RefCounted {
    void* vptr;
    long refcount;
    void Release();
};

struct Node {
    Node* next;
    Node* prev;
};

struct List {
    Node* head;
    unsigned int size;
    Node* tail;
};

struct Inner {
    char pad[0x104];
    List* list;
};

struct Obj {
    char pad0[0x20];
    void* hwnd;
    char pad1[0x180 - 0x24];
    char flag1b4;
    char flag1b5;
    char pad2[0x1b8 - 0x1b6];
    List list1b8;
    List list1c4;
    void* ptr1d0;
    RefCounted* ptr1d4;
    RefCounted* ptr1d8;
};

struct CSelectionPropGrid {
    void func();
};

extern "C" void __stdcall sub_725750(void*);
extern "C" void __stdcall sub_725770(void*);
extern "C" void __stdcall sub_432530(void*, void*);
extern "C" void __stdcall sub_423240(void*, void*);
extern "C" void __stdcall sub_5b32e0(void*, void*);
extern "C" void __stdcall sub_441680(void*, void*);
extern "C" void __stdcall sub_402a60(void*, void*);
extern "C" void* __stdcall sub_49d670(void*, void*);
extern "C" void __stdcall sub_43a7f0(void*, void*, void*, void*, void*, void*, void*, void*, void*);

void CSelectionPropGrid::func()
{
    Obj* self = (Obj*)this;
    void* lockPtr = (char*)self + 0x180;
    sub_725750(lockPtr);

    if (self->ptr1d4 != 0) {
        RefCounted* r = self->ptr1d4;
        if (r != 0) {
            sub_432530((char*)r + 0xe8, (char*)self + 0x1d0);
        }

        Inner* inner = (Inner*)self->ptr1d4;
        List* lst = inner->list;
        Node* end = lst->tail;
        Node* begin = lst->head;
        if (lst->size > (unsigned int)end) {
            _invalid_parameter_noinfo();
        }
        List* lst2 = ((Inner*)self->ptr1d4)->list;
        Node* end2 = lst2->tail;
        Node* begin2 = lst2->head;
        if (lst2->size > (unsigned int)end2) {
            _invalid_parameter_noinfo();
        }
        sub_43a7f0(self, lst2, begin2, end2, lst, begin, end, (void*)0x43b1e0, 0);
    }

    List* l1 = &self->list1b8;
    sub_5b32e0(l1, l1->head->next);
    l1->head->next = l1->head;
    l1->size = 0;
    l1->head->prev = l1->head;
    l1->head->next->prev = l1->head->next;

    List* l2 = &self->list1c4;
    sub_441680(l2, l2->head->next);
    l2->head->next = l2->head;
    l2->size = 0;
    l2->head->prev = l2->head;
    l2->head->next->prev = l2->head->next;

    void* tmp;
    void* res = sub_49d670(&tmp, (char*)self + 0x1d8);
    self->ptr1d4 = *(RefCounted**)res;
    sub_402a60((char*)self + 0x1d8, (char*)res + 4);

    if (tmp != 0) {
        RefCounted* rc = (RefCounted*)tmp;
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            rc->Release();
        }
        if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
            rc->Release();
        }
    }

    if (self->ptr1d4 != 0) {
        Inner* inner = (Inner*)self->ptr1d4;
        List* lst = inner->list;
        Node* end = lst->tail;
        Node* begin = lst->head;
        if (lst->size > (unsigned int)end) {
            _invalid_parameter_noinfo();
        }
        List* lst2 = ((Inner*)self->ptr1d4)->list;
        Node* end2 = lst2->tail;
        Node* begin2 = lst2->head;
        if (lst2->size > (unsigned int)end2) {
            _invalid_parameter_noinfo();
        }
        sub_43a7f0(self, lst2, begin2, end2, lst, begin, end, (void*)0x441df0, 0);

        if (self->ptr1d4 != 0) {
            sub_423240((char*)self->ptr1d4 + 0xe8, (char*)self + 0x1d0);
        }
    }

    void* lockPtr2 = (char*)self + 0x180;
    self->flag1b5 = 1;
    sub_725750(lockPtr2);

    if (self->flag1b4 == 0) {
        if (self->hwnd != 0) {
            PostMessageA(self->hwnd, 0x465, 0, 0);
        }
        self->flag1b4 = 1;
    }

    sub_725770(lockPtr2);
    sub_725770(lockPtr);
}
