// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
};

struct ListBase {
    ListBase* prev;
    ListBase* next;
};

struct ListHead {
    ListBase* head;
    int count;
};

struct ArgStruct {
    char pad0[0x1c];
    RefCounted* field_1c;
    RefCounted* field_20;
    RefCounted* field_24;
    RefCounted* field_28;
};

struct FuncDesc {
    char pad0[0x120];
    ListHead list;
    int field_128;
    void insert(ArgStruct* arg);
};

extern "C" void __stdcall sub_4919b0(void*);
extern "C" void __cdecl sub_62fc62(void*);
extern "C" void* __stdcall sub_492ea0(void*, void*, void*);
extern "C" void* __stdcall sub_492710(void*, int);
extern "C" void* __stdcall sub_4931a0();
extern "C" void __stdcall sub_4924d0(void*);
extern "C" void __stdcall sub_495bd0(void*, void*);
extern "C" void __stdcall sub_77e69c(void*);
extern "C" void __stdcall sub_77e6d8();

void FuncDesc::insert(ArgStruct* arg) {
    ListBase* node = this->list.head;
    ListBase* first = node->next;
    void* result = sub_492ea0(&this->list, first, arg);
    sub_492710(&this->list, 1);
    first->next = (ListBase*)result;
    ((ListBase*)result)->prev = first;

    void* p = sub_4931a0();
    while (this->field_128 > *(int*)((char*)p + 0xe8)) {
        ListBase* cur = this->list.head->next;
        if (cur == this->list.head) {
            sub_77e6d8();
        }
        if (cur == this->list.head) {
            sub_77e6d8();
        }
        if (cur == this->list.head) {
            break;
        }
        ListBase* nxt = cur->next;
        ListBase* prv = cur->prev;
        prv->next = nxt;
        nxt->prev = prv;
        sub_4919b0((char*)cur + 8);
        sub_62fc62(cur);
        this->list.count--;
        p = sub_4931a0();
    }

    char buf[0x2c];
    sub_77e69c(buf);
    *(void**)(buf + 0x1c) = arg->field_1c;
    *(void**)(buf + 0x20) = arg->field_20;
    if (arg->field_20) {
        _InterlockedExchangeAdd(&arg->field_20->refcount, 1);
    }
    *(void**)(buf + 0x24) = arg->field_24;
    *(void**)(buf + 0x28) = arg->field_28;
    if (arg->field_28) {
        _InterlockedExchangeAdd(&arg->field_28->refcount, 1);
    }
    sub_4924d0((char*)this + 0xe8);

    void* s1;
    if (arg->field_1c) {
        s1 = (char*)arg->field_1c + 4;
    } else {
        s1 = 0;
    }
    RefCounted* s3 = arg->field_28;
    if (s3) {
        _InterlockedExchangeAdd(&s3->refcount, 1);
    }
    sub_495bd0((void*)0x8bddec, s1);
}
