// from server: 81% by colin
struct VCLuaFunction {
    void* field0;
    void* field4;
    void* field8;
    void construct(void* a, void* b, void* c, void* d, void* e);
};

extern "C" char __cdecl sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

void VCLuaFunction::construct(void* a, void* b, void* c, void* d, void* e)
{
    char local;
    if (sub_4879D0(&local)) {
        return;
    }
    this->field8 = (void*)0x42B8C0;
    this->field0 = (void*)0x42B460;
    void* p = sub_62FEF6(0x10);
    if (p) {
        *(void**)p = a;
        *(void**)((char*)p + 4) = b;
        *(void**)((char*)p + 8) = c;
        *(void**)((char*)p + 12) = d;
    }
    this->field4 = p;
}
