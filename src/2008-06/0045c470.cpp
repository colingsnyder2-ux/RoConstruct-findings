// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Inner {
    int* begin;
    int* end;
    int* cap;
};

struct Holder {
    int* vtable;
    long refcount1;
    long refcount2;
};

struct Outer {
    char pad[0x108];
    Inner* inner;

    void func(int arg);
};

extern void __stdcall sub_4915b0(Inner* self, void* out);

void Outer::func(int arg)
{
    if (this->inner != 0)
        return;

    Inner* p = this->inner;

    void* out;
    sub_4915b0(p, &out);

    int* esi = *(int**)&out;
    int* eax = (int*)esi[4];
    int* ebx = *(int**)0x802890;
    int* edi = (int*)esi[3];
    int* ecx = (int*)esi[0];
    int* ebp = (int*)arg;

    int* local1c = ecx;
    int* local10 = eax;

    if (edi > eax)
        ((void(*)())ebx)();

    esi = (int*)esi[0];

    while (true) {
        if (esi != 0 && esi != local1c)
            ((void(*)())ebx)();

        if (edi == local10)
            break;

        if (esi == 0) {
            ((void(*)())ebx)();
            int* eax2 = 0;
            if (edi >= (int*)eax2[4])
                ((void(*)())ebx)();
            int* edx = (int*)edi[0];
            ((void(*)(int*))ebp)(edx);
            if (esi == 0) {
                ((void(*)())ebx)();
                int* eax3 = 0;
                if (edi >= (int*)eax3[4])
                    ((void(*)())ebx)();
                edi += 2;
                continue;
            }
            int* eax4 = (int*)esi[0];
            if (edi >= (int*)eax4[4])
                ((void(*)())ebx)();
            edi += 2;
            continue;
        }
        int* eax5 = (int*)esi[0];
        if (edi >= (int*)eax5[4])
            ((void(*)())ebx)();
        int* edx2 = (int*)edi[0];
        ((void(*)(int*))ebp)(edx2);
        if (esi == 0) {
            ((void(*)())ebx)();
            int* eax6 = 0;
            if (edi >= (int*)eax6[4])
                ((void(*)())ebx)();
            edi += 2;
            continue;
        }
        int* eax7 = (int*)esi[0];
        if (edi >= (int*)eax7[4])
            ((void(*)())ebx)();
        edi += 2;
    }

    Holder* h = (Holder*)local1c;
    if (h != 0) {
        if (_InterlockedExchangeAdd(&h->refcount1, -1) == 1) {
            int* vt = (int*)h->vtable;
            ((void(*)(Holder*))vt[1])(h);
            if (_InterlockedExchangeAdd(&h->refcount2, -1) == 1) {
                int* vt2 = (int*)h->vtable;
                ((void(*)(Holder*))vt2[2])(h);
            }
        }
    }
}
