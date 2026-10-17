// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char storage[28];
    String(const char*);
    String(const String&);
    ~String();
};

struct Name {
    void* ptr;
};

struct RefCounted {
    long refcount;
    virtual void destroy();
    virtual void destroy2();
};

struct SharedPtr {
    RefCounted* ptr;
    SharedPtr();
    SharedPtr(const SharedPtr&);
    ~SharedPtr();
};

struct Instance {
    char pad[0x14];
    void* property;
    char pad2[4];
    void* getProperty();
};

struct Creator {
    void* kind;
    unsigned int reserved;
    void* object;
    void construct(Instance*, SharedPtr);
};

extern void __cdecl func_0080f058(void*);
extern void __cdecl func_00802458(void*, const char*);
extern void __cdecl func_0080245c(void*, void*);
extern void __cdecl func_00802468(void*);
extern void __cdecl func_00802890();
extern void __cdecl func_0080f034(void*);
extern void __cdecl func_008d1bc8(void*);
extern void __cdecl func_0096cc4c(void*);

extern void __cdecl func_00409d50(void*, void*);
extern void __cdecl func_006a158c(void*, void*);
extern void __cdecl func_00554180(void*, void*);
extern void __cdecl func_0061ba10(void*, void*, void*);
extern void __cdecl func_00509b10(void*, void*, void*);
extern void __cdecl func_004174b0(void*, void*);
extern void __cdecl func_00419e50(void*, void*, void*, void*);
extern void __cdecl func_0041cf60(void*);
extern void __cdecl func_0041a530(void*);
extern void __cdecl func_00618a40(void*, void*, void*);
extern void __cdecl func_00417d10();

void Creator::construct(Instance* instance, SharedPtr sp)
{
    if (instance == 0) {
        String s1("The object to bind to must not be nil");
        String s2(s1);
        func_006a158c(&s2, &func_008d1bc8);
    }
    void* prop = instance->getProperty();
    void* p = instance->property;
    void* v = (char*)p + 8;
    void* out;
    func_0061ba10(v, &out, prop);
    void* a = *(void**)out;
    void* b = *(void**)((char*)out + 4);
    void* obj = instance->property;
    void* inner = *(void**)((char*)obj + 0x18);
    void* inner2 = *(void**)((char*)obj + 0x14);
    if ((unsigned int)inner2 > (unsigned int)inner) {
        func_00802890();
    }
    void* next = *(void**)((char*)obj + 8);
    if (a != 0 && a != next) {
        func_00802890();
    }
    if (b == inner) {
        String s3("Instance does not have property %s");
        func_00509b10(&s3, &func_0080f034, 0);
        func_006a158c(&s3, &func_008d1bc8);
    }
    void* r;
    func_004174b0(&r, &sp);
    void* esi = *(void**)r;
    func_00419e50(0, &func_00417d10, esi, 0);
    func_0041cf60(&sp);
    func_0041a530(&func_0096cc4c);
    if (sp.ptr != 0) {
        RefCounted* rc = sp.ptr;
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            rc->destroy();
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                rc->destroy2();
            }
        }
    }
    func_00802468(&sp);
}
