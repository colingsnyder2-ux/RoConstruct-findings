// from server: 44% by colin
struct VClientSignalDesc {
    void __cdecl construct(const char* name, int a, int b, int c, int d, int e, int f, int g, int h);
};

extern "C" {
    void __stdcall sub_77E69C(void*, const void*);
    void __stdcall sub_77E6AC(void*);
}

void sub_49A690(void* self, const void* str);

void VClientSignalDesc::construct(const char* name, int a, int b, int c, int d, int e, int f, int g, int h)
{
    char buf[28];
    sub_77E69C(buf, name);
    sub_49A690(this, buf);
    sub_77E6AC(buf);
}
