// from server: 52% by colin
struct JSValue {
    void* m_ptr;
    JSValue() : m_ptr(0) {}
    ~JSValue();
    JSValue(const JSValue&);
    JSValue& operator=(const JSValue&);
};

struct PropertyDescriptor {
    JSValue m_value;
    JSValue m_getter;
    JSValue m_setter;
    unsigned m_attributes;
    unsigned m_seenAttributes;

    void setDescriptor(JSValue value, unsigned attributes);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

void* __cdecl sub_417F10(void*, int, void*);
void __cdecl sub_62FC62(void*);
void* __cdecl sub_62FEF6(unsigned int);

void PropertyDescriptor::setDescriptor(JSValue value, unsigned attributes)
{
    JSValue* arr = 0;
    int count = 0;
    sub_417F10(&arr, 1, &value);
    if (!arr || (count = 0, 0)) {
        _invalid_parameter_noinfo();
    }
    void* p = sub_62FEF6(8);
    if (p) {
        *(void**)p = (void*)0x7a65dc;
        *(unsigned*)((char*)p + 4) = attributes;
    } else {
        p = 0;
    }
    void* old = *(void**)arr;
    *(void**)arr = p;
    if (old) {
        void** vt = *(void***)old;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
        fn(old, 1);
    }
    void** vt2 = *(void***)this;
    void (*fn2)(void*, JSValue*) = (void (*)(void*, JSValue*))vt2[1];
    fn2(this, &value);
    if (arr) {
        JSValue* end = arr + count;
        JSValue* it = arr;
        while (it != end) {
            if (it->m_ptr) {
                void** vt3 = *(void***)it->m_ptr;
                void (*fn3)(void*, int) = (void (*)(void*, int))vt3[0];
                fn3(it->m_ptr, 1);
            }
            ++it;
        }
        sub_62FC62(arr);
    }
}
