// from server: 27% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __cdecl type_info_equals(void*, void*);

struct VVector3_holder {
    void* vptr;
    void* ptr;
};

struct VVector3 {
    void* vptr;
    VVector3_holder holder;
};

extern void* __cdecl func_0056ca70();
extern void __cdecl func_00491790(void*, void*);
extern void __cdecl func_00409d50(void*, void*);
extern void __cdecl func_0056e080(void*, void*);
extern void __cdecl func_006a158c(void*, void*);
extern void __cdecl func_00802458(void*, void*);
extern void* __cdecl func_00802878(void*, void*);

extern void* __cdecl func_0082f758();
extern void* __cdecl func_008d1bc8();

struct VVector3_TypedPropertyDescriptor {
    void* field0;
    VVector3_holder field4;
    void method();
};

void VVector3_TypedPropertyDescriptor::method()
{
    void* vtable = *(void**)this;
    void* type1 = *(void**)((char*)vtable + 8);
    void* result = func_00802878((void*)0x929614, type1);
    if ((char)result != 0) {
        void* local1 = 0;
        void* local2 = 0;
        func_00491790(&field4, &local1);
        void* newval = func_0056ca70();
        *(void**)this = newval;
    }
    vtable = *(void**)this;
    void* type2 = *(void**)((char*)vtable + 8);
    result = func_00802878((void*)0x935980, type2);
    if ((char)result != 0) {
        VVector3_holder* h = &field4;
        void* obj;
        if (h != 0) {
            void* p = h->ptr;
            if (p != 0) {
                void* vt = *(void**)p;
                void* fn = *(void**)((char*)vt + 4);
                ((void(__thiscall*)(void*))fn)(p);
                obj = p;
            } else {
                obj = (void*)0x929614;
            }
        } else {
            obj = (void*)0x929614;
        }
        result = func_00802878((void*)0x935980, obj);
        if ((char)result != 0) {
            void* p = h->ptr;
            void* p4 = (char*)p + 4;
            if (p4 != 0) {
                void* local3;
                func_0056e080(&local3, p4);
                func_00491790(h, &local3);
                void* ref = local3;
                if (ref != 0) {
                    void* vt = *(void**)ref;
                    void* fn = *(void**)((char*)vt + 4);
                    ((void(__thiscall*)(void*))fn)(ref);
                    long old = _InterlockedExchangeAdd((volatile long*)((char*)ref + 8), -1);
                    if (old == 1) {
                        void* vt2 = *(void**)ref;
                        void* fn2 = *(void**)((char*)vt2 + 8);
                        ((void(__thiscall*)(void*))fn2)(ref);
                    }
                }
            }
        } else {
            void* local4 = 0;
            void* local5 = 0;
            func_00491790(h, &local4);
        }
        void* newval = func_0056ca70();
        *(void**)this = newval;
    }
    VVector3_holder* h2 = &field4;
    if (h2 != 0) {
        void* p = h2->ptr;
        if (p != 0) {
            void* vt = *(void**)p;
            void* fn = *(void**)((char*)vt + 4);
            ((void(__thiscall*)(void*))fn)(p);
            void* obj = p;
            result = func_00802878((void*)0x937010, obj);
            if ((char)result != 0) {
                void* p4 = (char*)p + 4;
                if (p4 != 0) {
                    return;
                }
            }
        } else {
            void* obj = (void*)0x929614;
            result = func_00802878((void*)0x937010, obj);
            if ((char)result != 0) {
                return;
            }
        }
    }
    void* str = func_0082f758();
    func_00409d50(&str, (void*)0x8d1bc8);
    func_006a158c(&str, (void*)0x8d1bc8);
}
