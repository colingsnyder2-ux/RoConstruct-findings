// from server: 93% by colin
extern "C" {
    void* __cdecl malloc(unsigned int size);
    char* __cdecl getenv(const char* name);
    int __cdecl sscanf(const char* buffer, const char* format, ...);
}

struct Ctx {
    void* field0;
    void* field4;
};

struct Obj {
    void* vtable0;
    void* vtable4;
    void* vtable8;
    void* vtableC;
    void* vtable10;
    void* vtable14;
    void* vtable18;
    void* vtable1C;
    void* vtable20;
    void* vtable24;
    void* vtable28;
    int field2C;
    int field30;
    int field34;
    int field38;
    int field3C;
    int field40;
    int field44;
    int field48;
    int field4C;
};

extern "C" void __cdecl sub_40CC20(Ctx* ctx);
extern "C" void* __cdecl sub_524640(Ctx* ctx);
extern "C" void* __cdecl sub_5244C0(Ctx* ctx, unsigned int size);

void __cdecl sub_51FE30(Ctx* ctx, int arg)
{
    int value;
    Obj* obj;
    char* env;
    char ch;
    int parsed;

    ctx->field4 = 0;
    value = (int)sub_524640(ctx);
    obj = (Obj*)sub_5244C0(ctx, 0x54);
    if (obj == 0) {
        sub_40CC20(ctx);
        *(int*)((char*)ctx->field0 + 0x14) = 0x36;
        *(int*)((char*)ctx->field0 + 0x18) = 0;
        (*(void(__cdecl**)(Ctx*))ctx->field0)(ctx);
    }
    obj->vtable0 = (void*)0x51F360;
    obj->vtable4 = (void*)0x51F490;
    obj->vtable8 = (void*)0x51F530;
    obj->vtableC = (void*)0x51F5E0;
    obj->vtable10 = (void*)0x51F690;
    obj->vtable14 = (void*)0x51F700;
    obj->vtable18 = (void*)0x51F770;
    obj->vtable1C = (void*)0x51FA50;
    obj->vtable20 = (void*)0x51FB90;
    obj->vtable24 = (void*)0x51FCE0;
    obj->vtable28 = (void*)0x51FDF0;
    obj->field30 = 0x3B9ACA00;
    obj->field2C = value;
    obj->field38 = 0;
    obj->field40 = 0;
    obj->field34 = 0;
    obj->field3C = 0;
    obj->field44 = 0;
    obj->field48 = 0;
    obj->field4C = 0x54;
    ctx->field4 = obj;

    env = getenv("JPEGMEM");
    if (env != 0) {
        ch = 'x';
        parsed = sscanf(env, "%ld%c", &value, &ch);
        if (parsed > 0) {
            if (ch == 'm' || ch == 'M') {
                obj->field2C = value * 1000 * 1000;
                return;
            }
            obj->field2C = value * 1000;
        }
    }
}
