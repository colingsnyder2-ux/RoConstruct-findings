// from server: 64% by colin
struct PropertyDescriptor {
    int m_value;
    int m_getter;
    int m_setter;
    unsigned m_attributes;
    unsigned m_seenAttributes;
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    void checkFlags();
};

extern "C" int __stdcall type_info_equals(void*, void*);
extern "C" void* __cdecl operator_new(unsigned);
extern "C" int __cdecl sub_56E030(void*);
extern "C" int __cdecl sub_56DDF0(void*);
extern "C" int __cdecl sub_537000(void*);
extern "C" int __cdecl sub_56D840();
extern "C" void __cdecl sub_56E0C0();

struct BoolHolder {
    void* vtbl;
    char value;
};

void TypedPropertyDescriptor::checkFlags() {
    typedef int (__stdcall *TypeInfoEq)(void*, void*);
    TypeInfoEq eq = (TypeInfoEq)0x77e708;

    if (eq((void*)0x8827d4, *(void**)(*(int*)this + 8))) {
        int* p = (int*)((char*)this + 4);
        int r = sub_56E030(p);
        char bl = (r != 0);
        BoolHolder* h = (BoolHolder*)operator_new(8);
        if (h) {
            h->vtbl = (void*)0x78a5fc;
            h->value = bl;
        } else {
            h = 0;
        }
        int old = *p;
        *p = (int)h;
        if (old) {
            void** vt = *(void***)old;
            ((void (__stdcall*)(int))vt[0])(1);
        }
        *(int*)this = sub_56D840();
    }

    if (eq((void*)0x8827ec, *(void**)(*(int*)this + 8))) {
        int* p = (int*)((char*)this + 4);
        sub_56DDF0(p);
        char bl;
        if (*(float*)&p != *(float*)0x78d394) {
            bl = 1;
        } else {
            bl = 0;
        }
        BoolHolder* h = (BoolHolder*)operator_new(8);
        if (h) {
            h->vtbl = (void*)0x78a5fc;
            h->value = bl;
        } else {
            h = 0;
        }
        int old = *p;
        *p = (int)h;
        if (old) {
            void** vt = *(void***)old;
            ((void (__stdcall*)(int))vt[0])(1);
        }
        *(int*)this = sub_56D840();
    }

    if (eq((void*)0x8999a8, *(void**)(*(int*)this + 8))) {
        int* p = (int*)((char*)this + 4);
        sub_537000(p);
        char bl;
        if (*(double*)&p != *(double*)0x78fee0) {
            bl = 1;
        } else {
            bl = 0;
        }
        BoolHolder* h = (BoolHolder*)operator_new(8);
        if (h) {
            h->vtbl = (void*)0x78a5fc;
            h->value = bl;
        } else {
            h = 0;
        }
        int old = *p;
        *p = (int)h;
        if (old) {
            void** vt = *(void***)old;
            ((void (__stdcall*)(int))vt[0])(1);
        }
        *(int*)this = sub_56D840();
    }

    sub_56E0C0();
}
