// from server: 36% by colin
struct VCApp_CComObject {
    int method();
};

extern "C" void __stdcall SysFreeString(void*);
extern "C" void* __stdcall func_77ddac(void*);
extern "C" void* __stdcall func_77dd90(void*, void*);
extern "C" void* __stdcall func_77dd94(void*, const char*, void*);
extern "C" void* __stdcall func_77dd98(void*, void*);
extern "C" void* __stdcall func_77ddbc(void*);
extern "C" void* __stdcall func_77e9b0(void*);
extern "C" void* __stdcall func_408ff0(void*, void*, void*);
extern "C" void* __stdcall func_41be00(void*, void*);
extern "C" void* __stdcall func_429220(void*, const char*, void*);

int VCApp_CComObject::method()
{
    char* self;
    if (this != 0) {
        self = (char*)this - 0x14;
    } else {
        self = 0;
    }

    void* v = 0;
    void* a = 0;
    void* b = 0;
    int result = 0;

    int (__stdcall *fn)(void*, const char*, void**) = *(int (__stdcall **)(void*, const char*, void**))(*(int*)(self + 0x1c) + 0x10);
    int r = fn((void*)(self + 0x1c), (const char*)0x7c4e3c, &v);
    if (r != 0 || v == 0) {
        if (v != 0) {
            void** vt = *(void***)v;
            void (__stdcall *del)(void*) = (void (__stdcall *)(void*))vt[2];
            del(v);
        }
        return 0;
    }

    int r2 = (int)func_408ff0((void*)(self + 0x14), &a, &b);
    if (r2 != 0) {
        void* s = func_429220((void*)0x790290, (const char*)0x784f38, (void*)r2);
        result = (int)s;
        SysFreeString(b);
        if (v != 0) {
            void** vt = *(void***)v;
            void (__stdcall *del)(void*) = (void (__stdcall *)(void*))vt[2];
            del(v);
        }
        return result;
    }

    void* s2 = func_41be00(a, b);
    if (s2 != 0) {
        func_77ddac(&a);
        func_77dd90(&a, b);
        void* t = func_77dd94(&a, (const char*)0x784f24, *(void**)func_77dd90(&a, b));
        func_77ddbc(&a);
        void* u = func_77dd98(&a, s2);
        void* s3 = func_429220((void*)0x790290, (const char*)u, 0);
        result = (int)s3;
        func_77ddbc(&a);
        SysFreeString(b);
    } else {
        SysFreeString(b);
    }

    if (v != 0) {
        void** vt = *(void***)v;
        void (__stdcall *del)(void*) = (void (__stdcall *)(void*))vt[2];
        del(v);
    }
    return result;
}
