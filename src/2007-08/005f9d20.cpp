// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct S_func_0057aa50 {
    void f(int a1, int a2);
};

struct S_func_005f8d60 {
    void f(int a1, int a2);
};

struct S_func_0048e1c0 {
    int f();
};

struct S_DebrisService {
    char pad[0xec];
    int* array;
    int capacity;
    int head;
    int count;
    int field_100;

    void func(int a1, int a2);
};

void S_DebrisService::func(int a1, int a2)
{
    while (this->count > 0) {
        int ebx = this->head;
        int eax = this->count;
        int total = eax + ebx;
        if (ebx > total) {
            _invalid_parameter_noinfo();
        }
        int ecx = this->count + this->head;
        int edi = ebx;
        int ebp = ebx;
        edi = edi >> 1;
        ebp = ebp & 1;
        if (ebx >= ecx) {
            _invalid_parameter_noinfo();
        }
        int eax2 = this->capacity;
        if (eax2 > edi) {
        } else {
            edi = edi - eax2;
        }
        int* edx = this->array;
        int* eax3 = (int*)edx[edi];
        int edx2 = eax3[ebp * 2];
        int eax4 = eax3[ebp * 2 + 1];
        int edi2 = 0;
        if (eax4 != edi2) {
            volatile long* p = (volatile long*)(eax4 + 8);
            _InterlockedExchangeAdd(p, 1);
        }
        S_func_005f8d60* s = (S_func_005f8d60*)this;
        s->f(edx2, eax4);
        if (this->count == edi2) {
            break;
        }
        int eax5 = this->head;
        int* ecx2 = this->array;
        int edx3 = eax5;
        edx3 = edx3 >> 1;
        int edx4 = ecx2[edx3];
        eax5 = eax5 & 1;
        int ecx3 = *(int*)(edx4 + eax5 * 8 + 4);
        if (ecx3 != edi2) {
            volatile long* p2 = (volatile long*)(ecx3 + 8);
            long old = _InterlockedExchangeAdd(p2, -1);
            if (old == 1) {
                int* vtbl = *(int**)ecx3;
                void (__stdcall *fn)(int) = (void (__stdcall *)(int))vtbl[2];
                fn(ecx3);
            }
        }
        this->head = this->head + 1;
        int ecx4 = this->capacity;
        int eax6 = this->head;
        ecx4 = ecx4 + ecx4;
        if (ecx4 > eax6) {
        } else {
            this->head = edi2;
        }
        this->count = this->count - 1;
        if (this->count == 0) {
            this->head = edi2;
        }
        if (this->count > 0) {
            continue;
        }
        break;
    }
    S_func_0057aa50* s2 = (S_func_0057aa50*)this;
    s2->f(a1, a2);
    if (a1 != 0) {
        S_func_0048e1c0* s3 = (S_func_0048e1c0*)a1;
        int r = s3->f();
        this->field_100 = r;
    } else {
        this->field_100 = 0;
    }
}
