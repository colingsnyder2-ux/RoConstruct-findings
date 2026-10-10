// from server: 49% by colin
struct CXTPControlToolbars {
    void func_0067def0(int);
};

struct CXTPControlToolbar {
    void func_0067def0(int);
};

extern "C" void* __stdcall func_00643980(int);
extern "C" void* __stdcall func_0062fef6(unsigned int);
extern "C" void __stdcall func_006ca460(void*);
extern "C" void* __stdcall func_0067d1e0(void*, int, const char*, int, int);
extern "C" void* __stdcall func_0067d2a0(void*, int, int, int, int, int);
extern "C" void* __stdcall func_0067d690(void*, void*, int);
extern "C" void* __stdcall func_00632910(void*, int);
extern "C" void* __stdcall func_00631ad0(void*, void*);
extern "C" void __stdcall func_0063a120(void*, int);
extern "C" void __stdcall func_0063a690(void*, int);
extern "C" void __stdcall func_0063a700(void*, void*);

extern "C" void* __stdcall func_0067dd98();
extern "C" void __stdcall func_0067ddbc(void*);

void CXTPControlToolbars::func_0067def0(int arg)
{
    void* p = func_00643980(arg);
    if (p == 0)
        return;

    int count = *(int*)((char*)p + 0x84);
    int i = 0;
    if (count > 0) {
        int ebx = arg;
        do {
            void* edi = func_00632910(p, i);
            if (*(int*)((char*)edi + 0x1a0) != 0 && *(int*)((char*)edi + 0x130) != 0) {
                void* esi = func_0062fef6(0x168);
                if (esi != 0) {
                    func_006ca460(esi);
                    *(void**)esi = (void*)0x7cdef4;
                    *(void**)((char*)esi + 0x20) = (void*)0x7cde94;
                }
                void* ecx = *(void**)((char*)arg + 0xf8);
                void* obj = func_0067d1e0(ecx, arg, (const char*)0x7ce884, arg, 1);
                void* vtbl = *(void**)obj;
                void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))*(void**)((char*)vtbl + 0x64);
                *(int*)((char*)obj + 0x7c) = i;
                fn(obj, ebx);

                void* tmp;
                func_00631ad0(edi, &tmp);
                void* obj2 = func_0067d690(&tmp, 0, 0);
                void* r = func_0067dd98();
                func_0063a700(obj2, r);
                func_0067ddbc(&tmp);
                func_0067ddbc(&tmp);

                func_0063a120(obj2, 8);

                void* vtbl2 = *(void**)edi;
                int (__thiscall *fn2)(void*) = (int (__thiscall *)(void*))*(void**)((char*)vtbl2 + 0x160);
                int val = fn2(edi);
                if (*(int*)((char*)obj2 + 0xa0) != val) {
                    *(int*)((char*)obj2 + 0xa0) = val;
                    func_0063a690(obj2, 1);
                }
                i++;
            }
            i++;
        } while (i < count);
    }

    if (*(int*)((char*)arg + 0x44) != 0) {
        if (*(int*)((char*)p + 0x60) != 0) {
            void* ecx = *(void**)((char*)arg + 0xf8);
            void* obj = func_0067d2a0(ecx, 1, 0x88b9, 0, -1, 0);
            void* vtbl = *(void**)obj;
            void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))*(void**)((char*)vtbl + 0x64);
            fn(obj, 1);
        }
    }
}
