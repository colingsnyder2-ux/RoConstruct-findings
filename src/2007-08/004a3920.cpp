// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    void Lock();
    void Unlock();
};

struct Node {
    int pad0;
    int pad4;
    int pad8;
    int padC;
    int pad10;
};

struct Holder {
    Node* ptr;
    int field4;
    int field8;
    Inner* inner;
    void* field10;
};

struct S {
    int field0;
    int field4;
    int field8;
    Inner* inner;
    void* field10;
    void dispose();
};

void __stdcall sub_44ecf0(void*, void*, void*);
void __stdcall sub_4a37f0(void*, void*, void*);

void S::dispose()
{
    Inner* in = this->inner;
    in->Lock();
    if (this->field0 != 0) {
        Node* n = (Node*)this->field0;
        void* local;
        sub_4a37f0((void*)((char*)n + 0xc), &local, (void*)((char*)this + 4));
        Node* n2 = (Node*)this->field0;
        int ebp = n2->pad10;
        void* eax = (void*)((char*)n2 + 0xc);
        if (local != 0 && local != eax) {
            _invalid_parameter_noinfo();
        }
        if (local != (void*)ebp) {
            sub_44ecf0((void*)((char*)this->field0 + 0xc), local, (void*)ebp);
        }
    }
    in->Unlock();
    void* p = this->field10;
    if (p != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            (*(void (__thiscall**)(void*))(*(int*)p + 4))(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                (*(void (__thiscall**)(void*))(*(int*)p + 8))(p);
            }
        }
    }
}
