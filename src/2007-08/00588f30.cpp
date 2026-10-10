// from server: 44% by colin
struct Name {
    int dummy;
};

struct CreatorMap {
    void* head;
    void* tail;
};

struct FactoryProduct {
    char pad[4];
    void* field4;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void* __fastcall sub_587FB0(void* self, void* unused, void* arg);

bool __cdecl sub_544FB0(void* a, void* b);

struct Creator {
    void* field0;
    void* field4;
    void* field8;
};

struct CreatorResult {
    void* first;
    void* second;
};

CreatorResult __fastcall FactoryProduct_ctor_helper(FactoryProduct* self, void* unused, void* arg);

CreatorResult __fastcall FactoryProduct_ctor(FactoryProduct* self, void* unused, void* arg)
{
    void* ebx = arg;
    void* esi = self;
    void* edi = sub_587FB0(self, 0, ebx);
    CreatorResult result;
    result.first = edi;
    if (esi == 0) {
        _invalid_parameter_noinfo();
    }
    if (edi != *(void**)((char*)esi + 4)) {
        void* tmp = (char*)edi + 0xc;
        if (!sub_544FB0(ebx, tmp)) {
            result.first = *(void**)((char*)esi + 4);
            result.second = esi;
            return result;
        }
    }
    result.first = *(void**)((char*)esi + 4);
    result.second = esi;
    return result;
}
