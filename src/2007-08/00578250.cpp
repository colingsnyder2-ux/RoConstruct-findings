// from server: 85% by colin
struct VPartInstance {
    char pad[0x1d8];
    struct Inner* ptr;
    void sub_5B5610(unsigned char);
    void sub_444710(const char*);
    void func(unsigned char);
};

struct Inner {
    char pad[0x70];
    unsigned char field70;
};

void VPartInstance::func(unsigned char arg)
{
    if (arg != ptr->field70) {
        sub_5B5610(arg);
        sub_444710((const char*)0x8c27d8);
    }
}
