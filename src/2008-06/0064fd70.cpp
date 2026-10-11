// from server: 84% by colin
struct ChatOutput {
    char pad0[0x174];
    int field174;
    char pad1[0x188 - 0x178];
    int field188;
    int field18c;
    int field190;
    void func();
};

extern "C" void __stdcall invalid_parameter_noinfo();

struct Inner {
    int field0;
};

extern "C" Inner* __fastcall sub_436420(int* a, int b);

extern "C" void __fastcall sub_64f8c0(void* p);

extern "C" void __cdecl sub_6a067a(void* p);

void ChatOutput::func()
{
    int eax = field190;
    int edi = field18c;
    eax += edi;
    if (edi > eax)
        invalid_parameter_noinfo();

    int tmp = field174;
    Inner* r = sub_436420(&tmp, edi);
    int saved = r->field0;

    eax = field190;
    int edx = 0;
    if (eax != edx) {
        field18c++;
        int ecx = field18c;
        int ebx = field188;
        ebx += ebx;
        ebx += ebx;
        if (ebx <= ecx)
            field18c = edx;
        eax--;
        field190 = eax;
        if (eax == edx)
            field18c = edx;
    }

    if (saved != edx) {
        sub_64f8c0((void*)saved);
        sub_6a067a((void*)saved);
    }
}
