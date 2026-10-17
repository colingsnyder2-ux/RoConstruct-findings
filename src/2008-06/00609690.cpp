// from server: 23% by colin
struct Object;

struct ObjPtr {
    Object* p;
    ObjPtr() : p(0) {}
    ObjPtr(const ObjPtr& o) : p(o.p) {}
    ~ObjPtr() {}
    ObjPtr& operator=(const ObjPtr& o) { p = o.p; return *this; }
};

struct Ret {
    ObjPtr val;
};

extern "C" int __stdcall InterlockedIncrement(int*);
extern "C" int __stdcall InterlockedDecrement(int*);

struct Controller {
    char pad[0x104];
    void* field104;
    char pad2[0x194 - 0x108];
    void* field194;

    void* getSomething();
    Ret* getSomething2(Ret* out, void* arg);
};

extern "C" void* __stdcall func_6a17c6(void*, void*, void*, void*, void*);
extern "C" void* __stdcall func_5a3330(void*);
extern "C" void* __stdcall func_5cbd10(void*, void*, void*, void*);
extern "C" void __stdcall func_608e70(void*, void*);
extern "C" void __stdcall func_45ad90(void*);
extern "C" void __stdcall func_502a70(void*);
extern "C" void __stdcall func_598fa0(void*, void*);

Ret* Controller::getSomething2(Ret* out, void* arg) {
    void* a = func_6a17c6(field104, (void*)0x92907c, (void*)0x947f1c, 0, 0);
    if (a == 0) goto fallback;
    {
        void* b = field104;
        void* c = getSomething();
        if (c == b) goto fallback;
    }
    {
        void* d = field104;
        void* e = (char*)d + 0x170;
        func_608e70(e, out);
        Object* obj = out->val.p;
        if (obj) {
            InterlockedIncrement((int*)((char*)obj + 4));
        }
        if (obj) {
            if (InterlockedDecrement((int*)((char*)obj + 4)) == 0) {
                func_45ad90(obj);
                ((void(__thiscall*)(Object*,int))(*(void***)obj)[0])(obj, 1);
            }
        }
        if (obj) {
            if (((bool(__thiscall*)(Object*))(*(void***)obj)[2])(obj)) {
                if (!((bool(__thiscall*)(Object*))(*(void***)obj)[4])(obj)) {
                    out->val.p = 0;
                    func_598fa0(out, obj);
                    return out;
                }
            }
        }
        if (obj) {
            if (InterlockedDecrement((int*)((char*)obj + 4)) == 0) {
                func_45ad90(obj);
                ((void(__thiscall*)(Object*,int))(*(void***)obj)[0])(obj, 1);
            }
        }
    }
fallback:
    {
        void* f = func_5a3330(this);
        if (f) {
            void* g = field194;
            func_5cbd10(f, out, g, this);
            out->val.p = 0;
            func_598fa0(out, out->val.p);
            return out;
        } else {
            out->val.p = 0;
            func_598fa0(out, 0);
            return out;
        }
    }
}
