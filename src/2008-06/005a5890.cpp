// from server: 39% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Vec {
    char pad[8];
    void* begin;
    void* end;
};

struct Inner {
    char pad0[0xc];
    void* begin;
    void* end;
};

struct Obj {
    char pad0[0x108];
    Inner* inner;
    char pad10c[0x288 - 0x10c];
    char field288[8];
    char pad290[0x43c - 0x290];
    int field43c;
};

struct Other {
    virtual void v0(int*);
};

struct Other2 {
    virtual void v1(int*);
};

extern "C" int __cdecl func_006a17c6(void*, void*, void*, void*, void*);
extern "C" void __stdcall func_00802890();

void func_005a5710(Obj*);
int func_0048ae20(Obj*);
void func_005ce480(void*, int*);
void func_0055a8f0(void*, void*);
void* func_00590d80(Obj*);

void func_005a5890(Obj* self, int arg)
{
    func_005a5710(self);
    int esi = 0;
    int local8 = 0;
    int local10 = 0;
    int local14 = 0;
    int local18 = 0;
    int local1c = 0;

    if (func_0048ae20(self) > 0) {
        do {
            Inner* edi = self->inner;
            unsigned int n = (unsigned int)(((char*)edi->end - (char*)edi->begin) >> 3);
            if ((unsigned int)esi >= n)
                func_00802890();
            void* p = ((void**)edi->begin)[esi];
            int a = func_006a17c6(p, 0, (void*)0x92907c, (void*)0x9496a0, 0);
            local14 = a;

            edi = self->inner;
            n = (unsigned int)(((char*)edi->end - (char*)edi->begin) >> 3);
            if ((unsigned int)esi >= n)
                func_00802890();
            p = ((void**)edi->begin)[esi];
            int b = func_006a17c6(p, 0, (void*)0x92907c, (void*)0x9482e8, 0);

            edi = self->inner;
            n = (unsigned int)(((char*)edi->end - (char*)edi->begin) >> 3);
            if ((unsigned int)esi >= n)
                func_00802890();
            p = ((void**)edi->begin)[esi];
            int c = func_006a17c6(p, 0, (void*)0x92907c, (void*)0x939f70, 0);

            if (b != 0 && c != 0) {
                Other* o = (Other*)b;
                o->v0(&local18);
                Other2* o2 = (Other2*)(self->field288);
                o2->v1(&local1c);
                func_005ce480((void*)0, &local1c);
            }

            if (local14 != 0)
                local10 = local14;

            esi++;
        } while (esi < func_0048ae20(self));

        if (local10 != 0) {
            void* r = func_00590d80(self);
            func_0055a8f0((void*)local10, r);
        }
    }

    int v = 0;
    if (self->field43c <= 0)
        v = 1;
    self->field43c = v;
}
