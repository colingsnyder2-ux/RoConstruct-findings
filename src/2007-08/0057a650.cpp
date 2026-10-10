// from server: 74% by colin
struct Name {
    char pad[0x1c];
    void* data;
};

struct Creator {
    char pad[0x118];
    Name name;
};

struct FactoryProduct {
    char pad[0xe8];
    int state;
    void registerCreator(Creator* c);
};

extern "C" int __stdcall sub_544FC0(void* a, void* b);
extern "C" void* __stdcall sub_77E690(void* a, void* b);
extern "C" void __fastcall sub_444710(void* ecx, void* edx, const char* s);

void FactoryProduct::registerCreator(Creator* c)
{
    char* p = (char*)this + 0x118;
    if (sub_544FC0(p, c)) {
        sub_77E690(p, c);
        *(void**)(p + 0x1c) = *(void**)((char*)c + 0x1c);
        sub_444710(this, 0, (const char*)0x8c2e54);
        if (this->state != 5) {
            this->state = 5;
            sub_444710(this, 0, (const char*)0x8c2e8c);
        }
    }
}
