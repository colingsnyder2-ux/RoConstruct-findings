// from server: 24% by colin
struct ContentItem {
    int __cdecl f(int* arg);
};

struct Holder {
    int pad0[0x44];
    int pad1[0x44];
    int* begin;
    int* end;
    int* cap;
    int pad2[0x4];
    int* begin2;
    int* end2;
    int* cap2;
    int pad3[0x4];
    void* ptr128;
    void* ptr12c;
};

extern "C" void _invalid_parameter_noinfo();
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl func_58c5c0(void*, void*);
extern "C" void __cdecl func_576f00(void*, void*);
extern "C" void __cdecl func_5773c0(void*);
extern "C" void __cdecl func_5a2fe0(void*);
extern "C" void __cdecl func_43a320(void*, void*, void*);
extern "C" void __cdecl func_43c940(void*, void*, void*, void*, void*, void*);
extern "C" void __cdecl func_420110(void*, void*);

int ContentItem::f(int* arg)
{
    Holder* self = (Holder*)this;
    int* p = arg;
    int result = 0;
    int* local60 = 0;
    int local54 = 0;
    int local50 = 0;
    int local4c = 0;
    int local40 = 0;

    void* mem = operator_new(4);
    if (mem) {
        *(int**)mem = (int*)&local60;
    } else {
        mem = 0;
    }
    local60 = (int*)mem;

    void* v128 = self->ptr128;
    int edx = *(int*)((char*)v128 + 0x230);
    int* esi = self->begin;
    int* eax = (int*)((char*)v128 + 0x218);
    int eaxv = *eax;

    int local38 = edx;
    int local3c = eaxv;

    if (self->end < esi) {
        _invalid_parameter_noinfo();
    }

    int* ecx = self->begin;
    int local30 = (int)esi;
    int* esi2 = self->end;
    int local34 = (int)ecx;

    if (esi2 > self->cap) {
        _invalid_parameter_noinfo();
    }

    int* edi = self->begin;
    int local2c = (int)edi;
    int local28 = (int)esi2;

    while (1) {
        if (edi != 0 && edi == (int*)local34) {
        } else {
            _invalid_parameter_noinfo();
        }

        if ((int*)local28 == (int*)local30) {
            break;
        }

        if (edi != 0) {
            edi = *(int**)edi;
        } else {
            _invalid_parameter_noinfo();
        }

        if ((int*)local28 < (int*)((char*)edi + 0x10)) {
            _invalid_parameter_noinfo();
        }

        int edx2 = *(int*)local28;
        int* ecx2 = (int*)self->ptr128;
        int local18 = edx2;
        int* eax2 = &local18;
        int local44;
        ecx2 = (int*)((char*)ecx2 + 0x218);
        func_43a320(ecx2, &local44, eax2);

        int* edi2 = (int*)local44;
        if (edi2 != 0 && edi2 == (int*)local3c) {
        } else {
            _invalid_parameter_noinfo();
        }

        int* esi3 = (int*)local40;
        if (esi3 == (int*)local38) {
            break;
        }

        if (edi2 != 0) {
            edi2 = *(int**)edi2;
        } else {
            _invalid_parameter_noinfo();
        }

        if (esi3 != (int*)((char*)edi2 + 0x18)) {
            _invalid_parameter_noinfo();
        }

        int* ebx = (int*)((char*)esi3 + 0x1c);
        if (ebx > (int*)((char*)esi3 + 0x20)) {
            _invalid_parameter_noinfo();
        }

        int* eax3 = (int*)((char*)esi3 + 0x10);
        int local20 = (int)ebx;
        int local24 = (int)eax3;

        if (edi2 != 0) {
            edi2 = *(int**)edi2;
        } else {
            _invalid_parameter_noinfo();
        }

        if (esi3 == (int*)((char*)edi2 + 0x18)) {
            _invalid_parameter_noinfo();
        }

        int* edi3 = (int*)((char*)esi3 + 0x20);
        if ((int*)((char*)esi3 + 0x1c) > edi3) {
            _invalid_parameter_noinfo();
        }

        int* esi4 = (int*)((char*)esi3 + 0x10);

        while (1) {
            if (eax3 != 0 && eax3 == esi4) {
            } else {
                _invalid_parameter_noinfo();
            }

            if ((int*)local20 == edi3) {
                break;
            }

            if (eax3 != 0) {
                eax3 = *(int**)eax3;
            } else {
                _invalid_parameter_noinfo();
            }

            if ((int*)local20 < (int*)((char*)eax3 + 0x10)) {
                _invalid_parameter_noinfo();
            }

            func_420110(&local60, (void*)local20);

            if (eax3 != 0) {
                eax3 = *(int**)eax3;
            } else {
                _invalid_parameter_noinfo();
            }

            if ((int*)local20 < (int*)((char*)eax3 + 0x10)) {
                _invalid_parameter_noinfo();
            }

            local20 += 8;
            eax3 = (int*)local24;
        }

        if (local2c != 0) {
        } else {
            _invalid_parameter_noinfo();
        }

        if ((int*)local28 < (int*)((char*)local2c + 0x10)) {
            _invalid_parameter_noinfo();
        }

        local28 += 4;
        edi = (int*)local2c;
        esi2 = (int*)local28;
    }

    float fv = *(float*)p;
    int local8 = *(int*)&fv;

    int local74 = 0;
    int local6c = 0x71f210;
    int local8b = local50;
    int ecx3 = local54;

    if (ecx3 > local8b) {
        _invalid_parameter_noinfo();
        local8b = local50;
        ecx3 = local54;
    }

    int edx3 = (int)local60;
    int local44b = edx3;
    int local18b = ecx3;

    if (ecx3 > local8b) {
        _invalid_parameter_noinfo();
    }

    int ecx4 = local74;
    int edx4 = local6c;

    int args[6];
    args[0] = 0x43a720;
    args[1] = ecx4;
    args[2] = (int)self;
    args[3] = edx4;
    args[4] = local40;
    args[5] = local8;

    int local78;
    func_43c940(&local78, (void*)local60, (void*)local18b, (void*)local44b, (void*)local8b, args);

    int* esi5 = (int*)self;
    int* eax4 = (int*)self->ptr128;
    if (*(int*)((char*)eax4 + 0x198) != 0) {
        int* eax5 = *(int**)((char*)eax4 + 0x198);
        int local48 = 0;
        int local44c = 0;
        int local40c = 0;
        func_576f00(&local48, eax5);
        int* edx5 = (int*)self->ptr12c;
        int eax6 = *(int*)((char*)edx5 + 4);
        func_58c5c0((void*)eax6, (void*)eax6);
        int* ecx6 = (int*)self->ptr128;
        int* edx6 = *(int**)((char*)ecx6 + 0x198);
        func_58c5c0(edx6, (void*)eax6);
        int* eax7 = (int*)self->ptr128;
        int* eax8 = *(int**)((char*)eax7 + 0x198);
        int* edx7 = *(int**)((char*)eax8 + 0x1f0);
        int* ecx7 = (int*)((char*)eax8 + 0x1f0);
        int eax9 = *edx7;
        ((void(__thiscall*)(void*, int))eax9)(ecx7, 1);
        func_5773c0(&local48);
    }

    func_5a2fe0(&local60);
    return result;
}
