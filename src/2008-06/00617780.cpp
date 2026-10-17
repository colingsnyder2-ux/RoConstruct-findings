// from server: 25% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct InputObject {
    void* vptr;
    bool isKeyDown(int key);
};

struct SharedPtr {
    void* ptr;
    RefCounted* control;
};

struct ArrowTool {
    char pad[0x18];
    void* field18;
    SharedPtr* method(void* a, void* b);
    int run(void* arg);
};

extern "C" void* __cdecl sub_616080(void* a, void* b);
extern "C" void* __cdecl sub_6157A0(void* a);
extern "C" void* __cdecl sub_581CC0(void* a, int b);
extern "C" bool __cdecl sub_424EB0(void* a, void* b);
extern "C" void* __cdecl sub_616C90(void* a, void* b, void* c);
extern "C" void* __cdecl sub_618A40(void* a, void* b);
extern "C" void __cdecl sub_4025B0(void* a, void* b);
extern "C" void __cdecl sub_600660(void* a);
extern "C" void __cdecl sub_567770(void* a);
extern "C" void __cdecl sub_567C10(void* a);
extern "C" void __cdecl sub_567420(void* a);
extern "C" void* __cdecl sub_617530(void* a, int b);
extern "C" void* __cdecl sub_660550(void* a, void* b, void* c, void* d, void* e, void* f, void* g);
extern "C" void __cdecl sub_628F80(void* a);
extern "C" void* __cdecl sub_6A0920(int size);
extern "C" void* __cdecl sub_617150(void* a, void* b);

int ArrowTool::run(void* arg)
{
    void* local2c = 0;
    void* result = sub_616080(arg, &local2c);
    if (!result) {
        void* mem = sub_6A0920(0x54);
        void* obj = 0;
        if (mem) {
            obj = sub_617150(mem, field18);
        }
        void** vt = *(void***)obj;
        typedef void (__thiscall *Fn)(void*, void*);
        ((Fn)vt[1])(obj, arg);
        return 0;
    }
    void* ebp = sub_6157A0(result);
    void* edi = *(void**)((char*)arg + 4);
    void* local20 = field18;
    void* local24 = 0;
    void* local28 = 0;
    void* local4c = 0;

    void** vt = *(void***)edi;
    typedef bool (__thiscall *KeyFn)(void*, int);
    KeyFn keyFn = (KeyFn)vt[5];
    if (keyFn(edi, 0x12f)) goto handle_key;
    if (keyFn(edi, 0x130)) goto handle_key;
    if (keyFn(edi, 0x131)) goto handle_key;
    if (keyFn(edi, 0x132)) goto handle_key;

    {
        void* local18 = 0;
        void* local1c = 0;
        void* tmp = sub_581CC0(&local18, 1);
        if (sub_424EB0(tmp, ebp)) {
            void* r = sub_616C90(this, result, arg);
            void* r2 = sub_618A40(&local18, r);
            local18 = *(void**)r2;
            r2 = (char*)r2 + 4;
            sub_4025B0(&local1c, r2);
            sub_600660(&local18);
            edi = local1c;
        } else {
            void* tmp2 = sub_581CC0(&local18, 1);
            sub_567770(tmp2);
        }
        void* local38 = field18;
        void* local3c = 0;
        void* local40 = 0;
        void* local18b = local18;
        void* local1cb = edi;
        if (edi) {
            _InterlockedExchangeAdd((volatile long*)((char*)edi + 4), 1);
        }
        void* r3 = sub_617530(&local38, 1);
        void* r4 = sub_660550(result, &local38, (char*)r3 + 0x13c, arg, field18, 0, 0);
        sub_628F80(&local38);
        sub_600660(&local18);
        sub_628F80(&local20);
        return (int)r4;
    }

handle_key:
    {
        void* tmp = sub_581CC0(&local20, 1);
        if (sub_424EB0(tmp, ebp)) {
            void* tmp2 = sub_581CC0(&local20, 1);
            sub_567C10(tmp2);
        } else {
            void* tmp2 = sub_581CC0(&local20, 1);
            sub_567420(tmp2);
        }
        RefCounted* rc = (RefCounted*)local24;
        if (rc) {
            if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
                void** v = *(void***)rc;
                typedef void (__thiscall *Dtor)(void*);
                ((Dtor)v[1])(rc);
                if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                    ((Dtor)v[2])(rc);
                }
            }
        }
        return 0;
    }
}
