// from server: 60% by colin
struct DataModel;

struct Arg {
    int type;
    int a;
    int b;
    short c;
    short d;
};

struct RetVal {
    int lo;
    int hi;
};

struct Vtbl {
    void* pad[0x3a];
    RetVal* (__stdcall *fn)(void* self, RetVal* out, Arg* in);
};

struct Obj {
    Vtbl* vt;
};

struct DataModel {
    char pad[0x160];
    char field160[0x50];
    void* field1b0;
    char field1b4;
    void method(Arg* arg);
};

extern float g_8c1e64;
extern float g_8c1e68;

extern "C" void __cdecl sub_48e550(DataModel* dm);
extern "C" RetVal* __stdcall sub_557cc0(DataModel* dm, RetVal* out, Arg* in);

void DataModel::method(Arg* arg) {
    int t = arg->type;
    if (t == 1 || t == 2 || t == 3 || t == 4 || t == 5 || t == 6) {
        int cx = arg->c;
        int dx = arg->d;
        g_8c1e64 = (float)cx;
        g_8c1e68 = (float)dx;
    }

    void* p160;
    if (this) {
        p160 = (char*)this + 0x160;
    } else {
        p160 = 0;
    }

    Arg local;
    local.type = arg->type;
    local.a = arg->a;
    local.b = arg->b;
    local.c = arg->c;
    local.d = arg->d;

    RetVal r;
    r.lo = 0;
    r.hi = 0;

    void* p1b0 = this->field1b0;
    RetVal* result;
    if (p1b0) {
        Obj* o = (Obj*)p1b0;
        result = o->vt->fn(p1b0, &r, &local);
    } else {
        result = &r;
    }

    int lo = result->lo;
    int hi = result->hi;

    if (lo == 0) {
        Obj* o1 = (Obj*)(*(char**)((char*)this + 0x1a8));
        result = o1->vt->fn((char*)o1 + 0xe8, &r, &local);
        lo = result->lo;
        hi = result->hi;
    }

    if (lo == 0) {
        Obj* o2 = (Obj*)(*(char**)((char*)this + 0x1a0));
        result = o2->vt->fn((char*)o2 + 0xe8, &r, &local);
        lo = result->lo;
        hi = result->hi;
    }

    if (lo == 0) {
        Obj* o3 = (Obj*)(*(char**)((char*)this + 0x180));
        result = o3->vt->fn((char*)o3 + 0xe8, &r, &local);
        lo = result->lo;
        hi = result->hi;
    }

    if (lo == 0) {
        result = sub_557cc0(this, &r, &local);
        lo = result->lo;
        hi = result->hi;
    }

    bool flag;
    if (lo != 0) {
        void* p188 = *(void**)((char*)this + 0x188);
        void* cmp;
        if (p188) {
            cmp = (char*)p188 + 0x280;
        } else {
            cmp = 0;
        }
        flag = (this->field1b0 != cmp);
    } else {
        flag = false;
    }

    this->field1b4 = flag ? 1 : 0;

    if (lo == 0) {
        Obj* o4 = (Obj*)(*(char**)((char*)this + 0x188));
        result = o4->vt->fn((char*)o4 + 0x280, &r, &local);
        lo = result->lo;
        hi = result->hi;
    }

    int t2 = arg->type;
    if (t2 == 1 || t2 == 2 || t2 == 3 || t2 == 4 || t2 == 5 || t2 == 6 || t2 == 9) {
        sub_48e550(this);
    }

    this->field1b0 = (void*)hi;
}
