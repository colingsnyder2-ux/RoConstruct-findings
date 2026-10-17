// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Control* control;
    void* ptr;
};

struct Obj204 {
    char pad[0x204];
    int field;
};

struct Obj1b4 {
    char pad[0x1b4];
    int field;
};

struct Inner {
    char pad[0xc];
    char* begin;
    char* end;
};

struct Workspace {
    char pad[0x24];
    Obj204* obj24;
    Shared* shared28;
    Obj1b4* obj2c;
};

struct VCWorkspace {
    void method(int a, int b);
};

extern "C" void* __stdcall sub_802458(void*);

void* __cdecl sub_46ae30(void*);
void* __cdecl sub_421cb0(int);
void __cdecl sub_413c20(void*, void*);
void __cdecl sub_4293d0(void*);
void __cdecl sub_415350(void*, void*);
void* __cdecl sub_58f6c0(void*, void*);
void __cdecl sub_593250(void*, void*, void*);
void __cdecl sub_5911d0(void*, void*, int, int);
void __cdecl sub_413b00(void*, void*, void*, void*);
void __cdecl sub_5a2fe0(void*);
void __cdecl sub_5773c0(void*);
void __cdecl sub_4147c0(void*);
void __cdecl sub_413a70(void*);
void __cdecl sub_6a067a(void*);
void __cdecl sub_411b40(void*);

void VCWorkspace::method(int a, int b)
{
    Workspace* ws = reinterpret_cast<Workspace*>(this);
    char flag = (char)b;

    sub_802458((void*)0x80ea2c);

    void* r = sub_46ae30(ws->obj24);
    if (r != 0)
        return;

    Shared* sh = ws->shared28;
    Shared local;
    local.control = (Control*)ws->obj24;
    local.ptr = sh;
    if (sh != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)sh + 4), 1);
    }

    sub_411b40(&local);

    int v;
    if (ws->obj24 != 0)
        v = ws->obj24->field;
    else
        v = 0;

    void* obj = sub_421cb0(v);

    int val;
    if (flag) {
        Inner* inner = *(Inner**)((char*)obj + 0x154);
        unsigned int sz = (unsigned int)(inner->end - inner->begin) & 0xfffffff8;
        if (sz == 8) {
            void* p;
            sub_413c20(&p, &p);
            val = *(int*)p;
        } else {
            if (ws->obj24 != 0)
                val = ws->obj24->field;
            else
                val = 0;
        }
    } else {
        if (ws->obj24 != 0)
            val = ws->obj24->field;
        else
            val = 0;
    }

    int x = flag ? 1 : 2;
    int y = flag ? 1 : 0;

    char buf[0x20];
    sub_4293d0(buf);

    sub_415350(buf, 0);

    void* p2 = 0;
    sub_58f6c0(buf, &p2);
    void* esi = *(void**)p2;
    *(void**)p2 = 0;

    sub_413a70(esi);
    sub_6a067a(esi);

    sub_593250(&local, esi, buf);

    sub_413a70(esi);
    sub_6a067a(esi);

    sub_4147c0(buf);

    int v2;
    if (ws->obj24 != 0)
        v2 = ws->obj24->field;
    else
        v2 = 0;

    sub_5911d0(buf, (void*)v2, x, y);

    if (ws->obj2c->field == 0) {
        sub_413b00(obj, buf, buf, buf);
    }

    sub_5a2fe0(buf);
    sub_5773c0(&local);
}
