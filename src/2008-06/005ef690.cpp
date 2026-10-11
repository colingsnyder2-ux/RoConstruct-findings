// from server: 43% by colin
extern "C" {
    void __stdcall sub_557330(void*, void*);
    void __stdcall sub_6a067a(void*);
}

void* sub_5ef4c0();
void* sub_597fb0();
void* sub_5ef470(void*, void*, void*, void*, void*);

struct FaceInstance {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void sub_56c650(void*, void*, void*, void*, void*);
    void* construct(void*, void*, void*, void*, void*, void*, void*);
};

void* FaceInstance::construct(void* a, void* b, void* c, void* d, void* e, void* f, void* g)
{
    void* edi;
    void* eax;
    void* ecx;
    void* edx;
    void* tmp;

    sub_557330((void*)0x97b574, (void*)0x5ef520);
    edi = sub_5ef4c0();
    eax = sub_597fb0();

    edx = g;
    ecx = e;
    sub_56c650(a, b, c, d, e);
    field18 = edi;

    tmp = sub_5ef470(a, b, c, d, &tmp);
    ecx = *(void**)tmp;
    *(void**)tmp = 0;
    field1C = ecx;

    if (f != 0) {
        sub_6a067a(f);
    }

    sub_557330((void*)0x97b574, (void*)0x5ef520);
    eax = sub_5ef4c0();
    field20 = eax;

    return this;
}
