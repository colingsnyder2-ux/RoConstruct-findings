// from server: 65% by colin
typedef unsigned int size_t;

extern "C" {
    void* __stdcall func_0080245c(void*);
    void __stdcall func_00802468(void*);
}

struct String {
    char buf[0x1c];
    String();
    String(const String&);
    ~String();
};

struct Iterator {
    void** vptr;
    int field_4;
};

struct Container {
    char pad[0x24];
    Iterator* field_24;
};

struct Outer {
    char pad[0x58];
    Container* field_58;
    int check(int a, int b, int c, int d, int e, int f, int g);
};

struct Target {
    int method(void*);
};

extern int __cdecl func_00454ac0(Target*, String*);

int Outer::check(int a, int b, int c, int d, int e, int f, int g)
{
    Container* cont = this->field_58;
    Iterator* it = cont->field_24;
    void* v = ((void* (__thiscall*)(Iterator*))it->vptr[0x5c / 4])(it);
    if (v != 0) {
        do {
            void* p = ((void* (__thiscall*)(Iterator*, void**))it->vptr[0x60 / 4])(it, &v);
            String s;
            func_0080245c(&s);
            int r = func_00454ac0((Target*)p, &s);
            s.~String();
            if (r == 0) {
                return 0;
            }
        } while (v != 0);
    }
    return 1;
}
