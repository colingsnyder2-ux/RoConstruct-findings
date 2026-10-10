// from server: 66% by colin
struct EnumDescriptor {
    char pad[0xf4];
    void* field_f4;
    char pad2[0x11d - 0xf8];
    unsigned char field_11d;
    void update();
};

extern "C" void __cdecl sub_62FBFC(void* a, void* b);
extern "C" void __cdecl sub_62FBF6(void* a, int b);
extern "C" void __cdecl sub_62FBF0(void* a, int b);

void EnumDescriptor::update()
{
    if (field_f4) {
        int local;
        sub_62FBFC(field_f4, &local);
        unsigned char al = field_11d;
        al = al >> 1;
        al = al & 1;
        int edx = 0;
        if (al != 0) edx = 1;
        int ecx = 0;
        edx = edx + 1;
        edx = edx | local;
        if (al != 0) ecx = 1;
        ecx = ecx - 3;
        edx = edx & ecx;
        int eax = edx;
        void* edx2 = field_f4;
        sub_62FBF6(edx2, eax);
        unsigned char al2 = field_11d;
        void* ecx2 = field_f4;
        al2 = al2 & 2;
        al2 = (unsigned char)(-(signed char)al2);
        eax = (al2 != 0) ? -1 : 0;
        sub_62FBF0(ecx2, eax);
    }
}
