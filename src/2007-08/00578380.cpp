// from server: 68% by colin
// roc 2007-08 00578380  unit: RBX::VPartInstance::?$FactoryProduct  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578380

struct Instance {
    char pad[0x1a0];
    unsigned char field_1a0;
};

struct Creator {
    void* vtable;
};

struct CreatorsMap {
    void* pad0;
    Creator** begin;
    Creator** end;
};

struct FactoryProduct {
    char pad[0xc0];
    CreatorsMap* creators;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" Instance* __cdecl sub_630d36(Instance* self, int a, void* b, void* c, int d);
extern "C" void __cdecl sub_444710(Instance* self, void* name);
extern "C" unsigned int __cdecl sub_487c10(FactoryProduct* self);
extern "C" void __cdecl sub_578380(Instance* self, unsigned char flag);

void __cdecl sub_578380_impl(Instance* self, unsigned char flag);

void __cdecl sub_578380_impl(Instance* self, unsigned char flag)
{
    Instance* obj = sub_630d36(self, 0, (void*)0x881f4c, (void*)0x884a28, 0);
    if (obj != 0) {
        if (obj->field_1a0 != flag) {
            obj->field_1a0 = flag;
            sub_444710(obj, (void*)0x8c28e0);
        }
        return;
    }

    FactoryProduct* fp = (FactoryProduct*)self;
    unsigned int count = sub_487c10(fp);
    unsigned int i = 0;
    if (count > 0) {
        while (i < count) {
            CreatorsMap* map = fp->creators;
            Creator** begin = map->begin;
            Creator** end = map->end;
            if (begin == 0 || i >= (unsigned int)((char*)end - (char*)begin) / 8) {
                _invalid_parameter_noinfo();
            }
            Creator* c = map->begin[i];
            sub_578380_impl((Instance*)c, flag);
            i++;
            count = sub_487c10(fp);
        }
    }
}
