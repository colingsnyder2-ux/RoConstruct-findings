// from server: 74% by atomic.potato
struct VCXTPReportRows
{
    struct Inner
    {
        int* p4;
        int field_8;
    };
    Inner* inner;

    void method_7527E0(int arg);
};

extern "C" void __cdecl sub_718CE4();
extern "C" void __cdecl sub_718FA8(void*);
extern "C" void __cdecl sub_752660(VCXTPReportRows::Inner*, int, int);

void VCXTPReportRows::method_7527E0(int arg)
{
    Inner* esi = (Inner*)((char*)this + 0x20);
    
    if (arg >= 0 && arg < esi->field_8)
    {
        void* ecx = (void*)esi->p4[arg];
        sub_718FA8(ecx);
        sub_752660(esi, arg, 1);
    }
    else
    {
        sub_718CE4();
    }
}
