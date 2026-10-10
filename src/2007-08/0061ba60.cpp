// from server: 50% by colin
struct RBX_Name;
struct Variant;

struct Descriptor {
    void* vftable;
    void* name;
    int attributes;
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor* owner;
    int value;
    unsigned int index;
};

struct RBX_NameRef {
    void* p;
};

struct String {
    char buf[28];
};

struct MenuItem {
    char pad0[0xfc];
    int state;
    void* ptr100;
    char pad104[0x14];
    unsigned int count118;

    void render(void* a);
};

extern "C" {
    void __cdecl sub_5555B0(void* out);
    void __cdecl sub_4E0180(void* out, void* a, void* b);
    void* __cdecl sub_5554F0();
    void* __cdecl sub_555470();
    void* __cdecl sub_5554B0();
    void __cdecl sub_555600(MenuItem* self, void* a, void* b, void* c, void* d);
    void* __cdecl sub_736ED0(int);
    void __stdcall sub_77E558(void* out, const char* fmt, void* arg);
    void __stdcall sub_77E6AC(void* p);
}

void MenuItem::render(void* a)
{
    int savedState = 0;
    void* local28[8];
    void* local38[8];
    void* local54[8];
    void* local70[8];
    void* localStr[8];
    void* edi;
    void* eax;
    int flags = 0;

    if (this->state == 1 || this->state == 2) {
        sub_5555B0(local28);
        sub_4E0180(localStr, local28, (char*)local28 + 8);
        edi = *(void**)a;
        sub_5554F0();
        void* fn = *(void**)((char*)edi + 0x28);
        void* arg = localStr;
        void* self = a;
        typedef void (__thiscall *Fn)(void*, void*);
        ((Fn)fn)(self, arg);
    }

    void* vt = *(void**)this;
    void* fn1 = *(void**)((char*)vt + 0x7c);
    typedef bool (__thiscall *FnB)(void*);
    ((FnB)fn1)(this);

    vt = *(void**)this;
    fn1 = *(void**)((char*)vt + 0x7c);
    bool r = ((FnB)fn1)(this);
    if (r) {
        eax = sub_555470();
    } else {
        eax = sub_5554B0();
    }
    void* savedEax = eax;

    if (this->ptr100 != 0) {
        void* p = this->ptr100;
        void* pvt = *(void**)p;
        void* fn2 = *(void**)((char*)pvt + 0xc);
        typedef bool (__thiscall *FnB2)(void*);
        bool r2 = ((FnB2)fn2)(p);
        if (r2) {
            vt = *(void**)this;
            void* fn3 = *(void**)((char*)vt + 0x5c);
            typedef void* (__thiscall *FnP)(void*, void*);
            ((FnP)fn3)(this, local70);
            sub_77E558(local38, (const char*)0x7c3e64, local70);
            edi = local38;
            flags = 3;
            goto doCall;
        }
    }
    {
        vt = *(void**)this;
        void* fn3 = *(void**)((char*)vt + 0x5c);
        typedef void* (__thiscall *FnP)(void*, void*);
        ((FnP)fn3)(this, local38);
        edi = local38;
        flags = 4;
    }
doCall:
    sub_736ED0(1);
    sub_555600(this, a, edi, savedEax, (void*)flags);

    if (flags & 4) {
        flags &= ~4;
        sub_77E6AC(local38);
    }
    if (flags & 2) {
        flags &= ~2;
        sub_77E6AC(local54);
    }
    if (flags & 1) {
        sub_77E6AC(local70);
    }

    if (this->count118 > 0) {
        vt = *(void**)this;
        void* fn4 = *(void**)((char*)vt + 0x7c);
        typedef bool (__thiscall *FnB3)(void*);
        bool r3 = ((FnB3)fn4)(this);
        if (r3) {
            edi = sub_555470();
        } else {
            edi = sub_5554B0();
        }
        sub_736ED0(0);
        sub_555600(this, a, (char*)this + 0x104, edi, 0);
    }
}
