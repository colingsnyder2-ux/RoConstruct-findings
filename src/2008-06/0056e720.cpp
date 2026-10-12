// from server: 57% by colin
struct PropertyDescriptor {
    char pad[0x18];
    void* member;
};

struct GetSet {
    void* vtable;
};

struct Target {
    char pad[0x10];
    int field4;
    double field8;
};

extern "C" void __fastcall sub_0057C2D0(void* self);

void Target_assign(Target* self, double value)
{
    self->field4 = 9;
    self->field8 = value;
}

void __fastcall func_0056E720(PropertyDescriptor* self, int, int arg)
{
    void* obj = self->member;
    void** vtbl = *(void***)obj;
    double (*fn)(void*, int) = (double (*)(void*, int))vtbl[2];
    double result = fn(obj, arg);
    Target* t = (Target*)((char*)arg + 0x10);
    sub_0057C2D0(t);
    t->field4 = 9;
    t->field8 = result;
}
