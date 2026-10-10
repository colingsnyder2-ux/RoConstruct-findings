// from server: 21% by colin
struct RefType {
    void construct();
};

struct RefTypeHolder {
    void* vtable;
    RefType value;
};

extern "C" void __stdcall sub_00486780(void*, void*, void*, void*);
extern "C" void __cdecl sub_00630d23(void*);

extern unsigned char byte_8BDF9C;
extern RefTypeHolder refTypeHolder_8BDF8C;

void RefType::construct()
{
    if (!(byte_8BDF9C & 1))
    {
        byte_8BDF9C |= 1;
        sub_00486780(&refTypeHolder_8BDF8C, (void*)0x79AE84, (void*)0x88C2D8, (void*)0x79ACA8);
        refTypeHolder_8BDF8C.vtable = (void*)0x79ACA4;
        sub_00630d23((void*)0x7784E0);
    }
}
