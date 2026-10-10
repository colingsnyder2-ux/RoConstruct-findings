// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    void* vptr;
    long refCount;
    long weakRefCount;
};

struct InputObject {
    void* vptr;
};

struct Instance {
    void* vptr;
    char pad[0xec];
    void* getSomething();
};

struct ResizeTool {
    char pad0[0x18];
    void* field18;
    char pad1[0x8];
    void* field24;
    void* field28;
    char pad2[0x4];
    int field30;
    int field34;
    void findTargetPV(InputObject* inputObject);
    void capturedDrag(int axisDelta);
    void doResize(int arg);
};

extern "C" void* __cdecl sub_562300(void* p);
extern "C" void* __cdecl sub_5e3b90(void* p, void* a, void* b);
extern "C" void* __cdecl sub_5e49e0(void* a, void* b);
extern "C" bool __cdecl sub_625490(void* p);
extern "C" void* __cdecl sub_630d36(void* a, void* b, void* c, void* d, void* e);

void ResizeTool::doResize(int arg)
{
    void* local18 = field18;
    void* local1c = 0;
    void* local20 = 0;
    void* local10 = 0;
    void* local14 = 0;

    void* p1 = sub_562300(&local1c);
    RefCounted* rc = *(RefCounted**)((char*)p1 + 0x104);
    void* begin = (void*)rc->refCount;
    void* end = (void*)rc->weakRefCount;
    if (begin > end) {
        _invalid_parameter_noinfo();
    }
    local10 = rc;
    void* it = begin;

    while (true) {
        void* p2 = sub_562300(&local1c);
        RefCounted* rc2 = *(RefCounted**)((char*)p2 + 0x104);
        void* end2 = (void*)rc2->weakRefCount;
        if ((void*)rc2->refCount > end2) {
            _invalid_parameter_noinfo();
        }
        void* cur = local10;
        if (cur == 0 || cur != rc2) {
            _invalid_parameter_noinfo();
            cur = local10;
        }
        if (it == end2) {
            field24 = 0;
            void* old = field28;
            field28 = 0;
            if (old != 0) {
                RefCounted* orc = (RefCounted*)old;
                if (_InterlockedExchangeAdd(&orc->weakRefCount, -1) == 1) {
                    void** vt = *(void***)old;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(old);
                }
            }
            break;
        }
        if (cur == 0) {
            _invalid_parameter_noinfo();
            cur = local10;
        }
        if (it >= (void*)rc2->weakRefCount) {
            _invalid_parameter_noinfo();
        }
        void* obj = *(void**)it;
        void* result = sub_630d36(obj, 0, (void*)0x881f4c, (void*)0x884a28, 0);
        void* inst = result;
        if (inst != 0) {
            findTargetPV((InputObject*)arg);
            void* v = *(void**)((char*)inst + 0xec);
            void* v2 = *(void**)((char*)v + 8);
            void* a = (void*)((char*)this + 0x30);
            void* b = (void*)((char*)this + 0x34);
            void* c = &local14;
            void* d = &local18;
            void* fn = *(void**)((char*)v2 + (int)inst + 0xec);
            void* fn2 = *(void**)fn;
            void* r = ((void* (*)(void*, void*, void*, void*, void*))fn2)((char*)v2 + (int)inst + 0xec, d, c, b, a);
            void** vt = *(void***)inst;
            void* fn3 = vt[0x5c/4];
            void* r2 = ((void* (*)(void*, void*, void*))fn3)(inst, &local14, r);
            if (sub_625490(r2)) {
                void* r3 = sub_5e49e0(&local10, inst);
                field24 = *(void**)r3;
                void* newRef = *(void**)((char*)r3 + 4);
                if (newRef != 0) {
                    _InterlockedExchangeAdd((volatile long*)((char*)newRef + 8), 1);
                }
                void* oldRef = field28;
                if (oldRef != 0) {
                    RefCounted* orc = (RefCounted*)oldRef;
                    if (_InterlockedExchangeAdd(&orc->weakRefCount, -1) == 1) {
                        void** vt2 = *(void***)oldRef;
                        void (*fn4)(void*) = (void (*)(void*))vt2[2];
                        fn4(oldRef);
                    }
                }
                field28 = newRef;
                void* tmp = local14;
                if (tmp != 0) {
                    RefCounted* trc = (RefCounted*)tmp;
                    if (_InterlockedExchangeAdd(&trc->refCount, -1) == 1) {
                        void** vt3 = *(void***)tmp;
                        void (*fn5)(void*) = (void (*)(void*))vt3[1];
                        fn5(tmp);
                        if (_InterlockedExchangeAdd(&trc->weakRefCount, -1) == 1) {
                            void** vt4 = *(void***)tmp;
                            void (*fn6)(void*) = (void (*)(void*))vt4[2];
                            fn6(tmp);
                        }
                    }
                }
                local18 = (void*)0x7a0604;
                break;
            }
        }
        if (it >= (void*)rc2->weakRefCount) {
            _invalid_parameter_noinfo();
        }
        it = (char*)it + 8;
    }

    void* tmp2 = local20;
    if (tmp2 != 0) {
        RefCounted* trc2 = (RefCounted*)tmp2;
        if (_InterlockedExchangeAdd(&trc2->refCount, -1) == 1) {
            void** vt5 = *(void***)tmp2;
            void (*fn7)(void*) = (void (*)(void*))vt5[1];
            fn7(tmp2);
            if (_InterlockedExchangeAdd(&trc2->weakRefCount, -1) == 1) {
                void** vt6 = *(void***)tmp2;
                void (*fn8)(void*) = (void (*)(void*))vt6[2];
                fn8(tmp2);
            }
        }
    }
}
