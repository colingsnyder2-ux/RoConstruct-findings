// from server: 26% by colin
struct Object {
    virtual void first();
    virtual void destroy(unsigned int);
};

struct CWrapperView {
    Object *object;
    void replace(Object *);
};

struct CDataModelPropGrid {
    char pad0[0x3a8];
    CWrapperView view3a8;
    CWrapperView view3ac;
    CWrapperView view3b0;
    int f(int, void *);
};

extern "C" int __stdcall IsWindow(void *);
extern "C" long __stdcall SendMessageA(void *, unsigned int, unsigned int, long);

extern "C" void *__cdecl func_6a0920(unsigned int);
extern "C" void *__cdecl func_6a104c(int, int);
extern "C" void *__cdecl func_6a1046(int, int, int);
extern "C" void __cdecl func_707ac0(void *, void *);
extern "C" void *__cdecl func_707b50(void *, void *, void *, void *);
extern "C" int __cdecl func_7073b0(void *);
extern "C" void __cdecl func_708c50(void *);
extern "C" void __cdecl func_466880(void *);
extern "C" void __cdecl func_431040(void *);
extern "C" void __cdecl func_420bd0(void *);
extern "C" void __cdecl func_6fbfe0(void *, int);
extern "C" void __cdecl func_6fc0b0(void *, int);
extern "C" char *__cdecl func_00436080();
extern "C" char *__cdecl func_00455d60();
extern "C" char *__cdecl func_0046a580();

extern char G80b716;
extern char G8107e0;

int CDataModelPropGrid::f(int a, void *b) {
    if (a != 1)
        return 0;
    void *p = b;
    if (func_7073b0(p) != 0)
        return 1;
    unsigned int t = *(unsigned int *)((char *)p + 0xb8);
    t -= 0x8c;
    if (t > 0x36)
        return 0;
    switch (t) {
    case 0: {
        Object *old = view3a8.object;
        if (old != 0 && old != 0)
            ;
        if (old == 0 || *(int *)((char *)old + 0x20) == 0) {
            void *mem = func_6a0920(0x118);
            void *obj;
            if (mem != 0) {
                func_708c50(mem);
                obj = mem;
            } else {
                obj = 0;
            }
            view3a8.replace((Object *)obj);
            Object *o = view3a8.object;
            int r = ((int (__thiscall *)(Object *, int, int, int, int, void *))*(void **)(*(int *)o + 0x148))(o, 2, 1, 0x50000000, 0xe900, this);
            if (r == 0)
                return 0;
            void *mem2 = func_6a0920(0x1c8);
            void *obj2;
            if (mem2 != 0) {
                func_466880(mem2);
                obj2 = mem2;
            } else {
                obj2 = 0;
            }
            view3b0.replace((Object *)obj2);
            Object *o2 = view3b0.object;
            int *v = *(int **)o2;
            void *w = func_6a104c(0, 0);
            int r2 = ((int (__thiscall *)(Object *, void *, int, int, int, void *, int))*(void **)(*(int *)o2 + 0x164))(o2, w, 2, 0x10000201, (int)&G80b716, 0, 0);
            if (r2 == 0)
                return -1;
            void *mem3 = func_6a0920(0x248);
            void *obj3;
            if (mem3 != 0) {
                func_431040(mem3);
                obj3 = mem3;
            } else {
                obj3 = 0;
            }
            view3ac.replace((Object *)obj3);
            Object *o3 = view3ac.object;
            void *w2 = func_6a104c(0, 1);
            ((int (__thiscall *)(Object *, void *, int, int, int, int))*(void **)(*(int *)o3 + 0x144))(o3, w2, 0, 0, 0, 0);
            func_6fbfe0(view3ac.object, 1);
            func_6fc0b0(view3ac.object, 6);
            func_420bd0((char *)view3ac.object + 0x244);
            func_6a1046(0, 0x1c, 0);
            ((void (__thiscall *)(Object *, int))*(void **)(*(int *)view3a8.object + 0x1d0))(view3a8.object, 8);
        }
        func_707ac0(p, view3a8.object);
        return 1;
    }
    case 1: {
        void *r = func_707b50(p, this, &G8107e0, 0);
        if (r != 0) {
            void *h = *(void **)((char *)r + 0x20);
            if (IsWindow(h)) {
                SendMessageA(h, 0x364, 0, 0);
            }
        }
        return 1;
    }
    case 2: {
        void *r = func_707b50(p, this, func_00436080(), 0);
        if (r != 0) {
            void *h = *(void **)((char *)r + 0x20);
            if (IsWindow(h)) {
                SendMessageA(h, 0x364, 0, 0);
            }
        }
        return 1;
    }
    case 3: {
        void *r = func_707b50(p, this, func_00455d60(), 0);
        if (r != 0) {
            void *h = *(void **)((char *)r + 0x20);
            if (IsWindow(h)) {
                SendMessageA(h, 0x364, 0, 0);
            }
        }
        return 1;
    }
    case 4: {
        void *r = func_707b50(p, this, func_0046a580(), 0);
        if (r != 0) {
            void *h = *(void **)((char *)r + 0x20);
            if (IsWindow(h)) {
                SendMessageA(h, 0x364, 0, 0);
            }
        }
        return 1;
    }
    }
    return 0;
}
