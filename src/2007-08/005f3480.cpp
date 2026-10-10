// from server: 47% by colin
struct Classes;
struct Enums;

struct Reflection {
    void* vtable;
    Classes* classes;
    Enums* enums;
};

struct Classes {
    void* vtable;
};

struct Enums {
    void* vtable;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void* __cdecl sub_62fef6(unsigned int size);
extern "C" void __cdecl sub_62fc62(void* p);
extern "C" void __stdcall sub_417f10(void* out, int count, void* in);

struct VectorHolder {
    void** begin;
    void** end;
    void** capacity;
};

struct CallbackHolder {
    void* vtable;
    void* ptr;
};

struct ReflectionClass {
    void* vtable;
    Classes* classes;
    Enums* enums;
    void* unk;
    void save(const void* filePath);
};

void ReflectionClass::save(const void* filePath)
{
    VectorHolder vec;
    vec.begin = 0;
    vec.end = 0;
    vec.capacity = 0;

    sub_417f10(&vec, 1, &vec);

    void** it = vec.begin;
    if (it != 0 || (vec.end - vec.begin) == 0) {
        _invalid_parameter_noinfo();
        it = vec.begin;
    }

    CallbackHolder* cb = (CallbackHolder*)sub_62fef6(8);
    if (cb) {
        cb->vtable = (void*)0x7a577c;
        cb->ptr = vec.capacity;
    } else {
        cb = 0;
    }

    void* old = *it;
    *it = cb;
    if (old) {
        void** vt = *(void***)old;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
        fn(old, 1);
    }

    void* obj = *(void**)this;
    void** vt = *(void***)obj;
    void (*fn2)(void*, void*) = (void (*)(void*, void*))vt[1];
    fn2(obj, &vec);

    void** p = vec.begin;
    if (p) {
        void** e = vec.end;
        void** cur = p;
        while (cur != e) {
            void* item = *cur;
            if (item) {
                void** ivt = *(void***)item;
                void (*del)(void*, int) = (void (*)(void*, int))ivt[0];
                del(item, 1);
            }
            cur++;
        }
        sub_62fc62(p);
    }
}
