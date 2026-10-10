// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct Listener {
    void* vptr;
    RefCounted* ptr;
};

struct EventInstance {
    void* descriptor;
    void* source;
};

struct Bridge {
    Listener listener;
    void* event;
};

struct EventBridge {
    void* vptr;
    Listener listener;
    void* event;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

void* __cdecl sub_62FEF6(unsigned int size);
void __cdecl sub_4A6C60(void* dest, const void* src);
void __cdecl sub_454350(void* self, void* a, void* b);
void __cdecl sub_464EC0(void* self, void* a);
void __cdecl sub_433140(void* self, void* a);

struct MarshaledListener {
    void* vptr;
    Listener listener;
    void* event;
    void* field18;

    void method(int a, int b, int c);
};

void MarshaledListener::method(int a, int b, int c)
{
    EventInstance* inst = (EventInstance*)sub_62FEF6(0x18);
    Listener* result;
    if (inst) {
        EventInstance tmp;
        sub_4A6C60(&tmp, &inst);
        sub_454350(inst, this, &tmp);
        result = (Listener*)inst;
    } else {
        result = 0;
    }
    sub_464EC0(&this->listener, &result);
    sub_433140(this->field18, result);
    if (result) {
        RefCounted* rc = result->ptr;
        if (rc) {
            if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
                void** vt = (void**)rc->vptr;
                ((void (__thiscall*)(RefCounted*))vt[1])(rc);
                if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                    void** vt2 = (void**)rc->vptr;
                    ((void (__thiscall*)(RefCounted*))vt2[2])(rc);
                }
            }
        }
    }
}
