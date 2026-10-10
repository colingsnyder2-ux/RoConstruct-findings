// from server: 93% by tester
struct VPartInstance {
    char pad[0x1d8];
    void* field_1d8;
    void sub_573D60();
    void sub_573D80();
};

struct Helper {
    void sub_5B9520();
};

void __stdcall FlatTool_005fb210(VPartInstance* p)
{
    p->sub_573D60();
    ((Helper*)p)->sub_5B9520();
    p->sub_573D80();
}
