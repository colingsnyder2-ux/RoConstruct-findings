// from server: 26% by colin
struct Base
{
    unsigned char storage[32];
    ~Base();
};

struct Member
{
    unsigned long vptr;
    void clear();
};

struct S : Base
{
    char pad0[0x158];
    Member m18c;
    char pad1[0x8];
    void* p198;
    char pad2[0x4];
    void* p19c;
    char pad3[0x8];
    void* p1a8;
    void* p1ac;
    char pad4[0x44];
    unsigned char b1f4;
    unsigned char b1f5;
    char pad5[0x2];
    void* p1f8;
    char pad6[0x1c];
    void* p218;

    void f(void* a, void* b);
};

extern "C" void __cdecl _invalid_parameter_noinfo();

void* __cdecl sub_6fbba0();
void __cdecl sub_6fc780(void*);
void* __cdecl sub_40ad20();
void __cdecl sub_4391d0(void*);
void __cdecl sub_6fc5b0(void*);
void __cdecl sub_438990(void*);
void* __cdecl sub_6a0920(unsigned int);
void __cdecl sub_64b2a0(void*, void*, void*);
void __cdecl sub_563090(void*);
void __cdecl sub_5630e0(void*);
void __cdecl sub_576f00(void*, void*);
void __cdecl sub_5773c0(void*);
void __cdecl sub_5ac050(void*, void*);
void __cdecl sub_64ad30(void*, void*, void*, void*, void*, void*);
void __cdecl sub_64b230(void*);
void __cdecl sub_669050(void*, void*);
void __cdecl sub_6a067a(void*);
void* __cdecl sub_6fa530(void*);
void __cdecl sub_6fb910(void*);
void* __cdecl sub_712420(void*);
void* __cdecl sub_7110c0(void*);
void __cdecl sub_7110d0(void*, unsigned char);
void __cdecl sub_438000(void*, void*);
void __cdecl sub_438c60(void*, void*, void*, void*, void*, void*, void*);
void __cdecl sub_439510(void*, void*);

void S::f(void* a, void* b)
{
    void* p = this->p1ac;
    void* q = this->p1a8;
    void* r = (char*)this + 0x19c;
    if ((((unsigned int)p - (unsigned int)q) & 0xfffffffc) == 0)
    {
        void* tmp = sub_6fbba0();
        sub_6fc780(tmp);
        void* v = sub_40ad20();
        sub_4391d0(v);
        sub_6fc5b0(tmp);
        sub_438990(tmp);
    }
    void* mem = sub_6a0920(4);
    if (mem)
        *(void**)mem = (char*)this + 0x20;
    else
        mem = 0;
    *(void**)((char*)this + 0x20) = mem;
    *(void**)((char*)this + 0x2c) = 0;
    *(void**)((char*)this + 0x30) = 0;
    *(void**)((char*)this + 0x34) = 0;
    sub_64b2a0((char*)this + 0x40, (char*)this + 0x17, (char*)this + 0x13);
    void* ebx = (char*)this + 0x18c;
    sub_563090(ebx);
    if (this->b1f5)
    {
        sub_439510((char*)this + 0x24, r);
        this->b1f5 = 0;
    }
    else
    {
        void* edi = (char*)this + 0x1f8;
        if ((char*)this + 0x38 != edi)
        {
            void* eax = *(void**)((char*)this + 0x50);
            void* ecx = *(void**)((char*)this + 0x38);
            void* edx = *(void**)eax;
            sub_64ad30((char*)this + 0x68, (char*)this + 0x4c, ecx, edx, eax, ecx);
            sub_5ac050((char*)this + 0x3c, edi);
        }
        void* eax = *(void**)((char*)edi + 0x18);
        void* ecx = *(void**)((char*)eax + 4);
        sub_669050(edi, ecx);
        eax = *(void**)((char*)edi + 0x18);
        *(void**)((char*)eax + 4) = eax;
        eax = *(void**)((char*)edi + 0x18);
        *(void**)((char*)edi + 0x1c) = 0;
        *(void**)eax = eax;
        edi = *(void**)((char*)edi + 0x18);
        *(void**)((char*)edi + 8) = edi;
    }
    this->b1f4 = 0;
    sub_5630e0(ebx);
    void* eax = this->p198;
    *(void**)((char*)this + 0x14) = 0;
    *(void**)((char*)this + 0x18) = 0;
    sub_576f00((char*)this + 0x18, eax);
    *(void**)((char*)this + 0x20) = 0;
    void* ebx2 = (char*)this + 0x218;
    void* eax2 = *(void**)((char*)this + 0x30);
    void* ecx2 = *(void**)((char*)this + 0x2c);
    void* ebp = eax2;
    if ((unsigned int)ecx2 > (unsigned int)eax2)
        _invalid_parameter_noinfo();
    void* edi2 = ecx2;
    if ((unsigned int)ecx2 > (unsigned int)eax2)
        _invalid_parameter_noinfo();
    while (edi2 != ebp)
    {
        void* ecx3 = *(void**)edi2;
        sub_438000(ecx3, ebx2);
        edi2 = (char*)edi2 + 4;
    }
    void* ecx4 = *(void**)((char*)this + 0x50);
    void* edx4 = *(void**)((char*)this + 0x38);
    void* edi4 = *(void**)ecx4;
    sub_438c60((char*)this + 0x70, edx4, edi4, edx4, ecx4, (void*)0x438000, ebx2);
    sub_5773c0((char*)this + 0x14);
    void* eax5 = sub_6fa530(this);
    if (*(int*)((char*)eax5 + 0x28) > 0)
    {
        int i = 0;
        do
        {
            void* eax6 = sub_6fa530(this);
            void* ecx6 = sub_712420(eax6);
            void* edi6 = *(void**)((char*)ecx6 + 0xc0);
            int j = 0;
            if (*(int*)((char*)edi6 + 0x28) > 0)
            {
                unsigned char flag = 1;
                do
                {
                    void* eax7 = sub_712420(edi6);
                    void* ecx7 = sub_7110c0(eax7);
                    if (ecx7 == 0)
                    {
                        flag = 0;
                        break;
                    }
                    j++;
                } while (j < *(int*)((char*)edi6 + 0x28));
                sub_7110d0(ecx6, flag);
            }
            else
            {
                sub_7110d0(ecx6, 1);
            }
            i++;
            void* eax8 = sub_6fa530(this);
            if (i >= *(int*)((char*)eax8 + 0x28))
                break;
        } while (1);
    }
    sub_6fb910(this);
    sub_64b230((char*)this + 0x38);
    void* eax9 = *(void**)((char*)this + 0x2c);
    if (eax9)
        sub_6a067a(eax9);
    void* ecx9 = *(void**)((char*)this + 0x20);
    *(void**)((char*)this + 0x30) = 0;
    *(void**)((char*)this + 0x34) = 0;
    *(void**)((char*)this + 0x38) = 0;
    sub_6a067a(ecx9);
}
