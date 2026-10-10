// from server: 84% by tester
struct EnumDescriptor;

struct EnumDesc {
    void construct(const char* name);
};

extern "C" void* __stdcall sub_467480(const char* name);
extern "C" void __stdcall sub_76a190(void* desc, const void* item);

void EnumDesc::construct(const char* name)
{
    void* p = sub_467480(name + 4);
    int v = *(int*)p;
    sub_76a190(this, &v);
}
