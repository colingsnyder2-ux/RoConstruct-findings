// from server: 38% by colin




extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __stdcall sub_803f10();
extern "C" void __stdcall sub_7119f0();
extern "C" void __stdcall sub_7110d0();
extern "C" int* __stdcall sub_43a320();
extern "C" int* __stdcall sub_43b510();

struct VBrickColor {
    void func(int* arg);
};

void VBrickColor::func(int* arg)
{
    int* p = arg;
    int v0 = p[0];
    int v1 = p[6];
    int* self = (int*)this;
    int local14 = (int)this;
    int local18 = 0xc2;
    unsigned char local13 = 0;
    int local38 = v1;
    int local34 = v0;
    int local2c;
    int local30;
    int local20;
    int local44;
    int local1c;
    int local40;
    int local4c;
    int local28;
    int local24;

    int* esi = (int*)self[4];
    if (esi > (int*)self[5]) {
        _invalid_parameter_noinfo();
    }
    int* ebp = (int*)self[1];
    int* ebx = esi;
    esi = (int*)self[5];
    local2c = (int)ebp;
    local30 = (int)ebx;
    local20 = (int)esi;
    if ((int*)self[4] > esi) {
        _invalid_parameter_noinfo();
    }
    int* eax = (int*)self[1];
    local44 = (int)eax;

    while (1) {
        if (ebp != 0 && ebp != (int*)local44) {
            _invalid_parameter_noinfo();
        }
        if (ebx == esi) break;
        if (ebp != 0) {
            eax = (int*)*ebp;
        } else {
            _invalid_parameter_noinfo();
            eax = 0;
            if (ebx < (int*)((char*)eax + 0x10)) {
                _invalid_parameter_noinfo();
            }
            eax = (int*)*ebx;
        }
        local1c = (int)eax;
        {
            int* r = (int*)sub_43a320();
            (void)r;
        }
        int* edi = (int*)local40;
        if (edi != 0 && edi != (int*)local34) {
            _invalid_parameter_noinfo();
        }
        int* esi2 = (int*)local40;
        if (esi2 == (int*)local38) {
            ebp = (int*)local2c;
            ebx = (int*)local30;
            if (ebp == 0) {
                _invalid_parameter_noinfo();
                eax = 0;
                if (ebx < (int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
                ebx = (int*)((char*)ebx + 4);
                local30 = (int)ebx;
                continue;
            } else {
                eax = (int*)*ebp;
                if (ebx < (int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
                ebx = (int*)((char*)ebx + 4);
                local30 = (int)ebx;
                continue;
            }
        }
        if (edi != 0) {
            eax = (int*)*edi;
        } else {
            _invalid_parameter_noinfo();
            eax = 0;
            if (esi2 == (int*)((char*)eax + 0x18)) {
                _invalid_parameter_noinfo();
            }
            ebp = (int*)((char*)esi2 + 0x1c);
            if (ebp > (int*)((char*)esi2 + 0x20)) {
                _invalid_parameter_noinfo();
            }
            ebx = (int*)((char*)esi2 + 0x10);
        }
        if (edi != 0) {
            edi = (int*)*edi;
        }
        if (esi2 != (int*)((char*)edi + 0x18)) {
            _invalid_parameter_noinfo();
        }
        int* edi2 = (int*)((char*)esi2 + 0x20);
        local1c = (int)edi2;
        if ((int*)((char*)esi2 + 0x1c) > edi2) {
            _invalid_parameter_noinfo();
        }
        int* ecx2 = (int*)((char*)esi2 + 0x10);
        local4c = (int)ecx2;
        if (ebx != 0 && ebx != (int*)local4c) {
            _invalid_parameter_noinfo();
        }
        if (ebp == edi2) {
            ebp = (int*)local2c;
            ebx = (int*)local30;
            if (ebp == 0) {
                _invalid_parameter_noinfo();
                eax = 0;
                if (ebx < (int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
                ebx = (int*)((char*)ebx + 4);
                local30 = (int)ebx;
                continue;
            } else {
                eax = (int*)*ebp;
                if (ebx < (int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
                ebx = (int*)((char*)ebx + 4);
                local30 = (int)ebx;
                continue;
            }
        }
        if (local13 != 0) {
            if (ebx != 0) {
                eax = (int*)*ebx;
            } else {
                _invalid_parameter_noinfo();
                eax = 0;
                if (ebp < (int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
                eax = (int*)*ebp;
            }
            int esi3 = local14;
            int* edi3 = *(int**)(esi3 - 0x118);
            local28 = (int)eax;
            esi3 += 0xfffffee8;
            {
                int* r = (int*)sub_43b510();
                (void)r;
            }
            edi3 = (int*)((char*)edi3 + 0xf8);
            int edx2 = *edi3;
            local24 = (int)eax;
            if (((int (__stdcall*)(int))edx2)(local24) == 0) {
                goto fail;
            }
            local13 = 1;
            if (ebx != 0) {
                eax = (int*)*ebx;
            } else {
                _invalid_parameter_noinfo();
                eax = 0;
                if (ebp < (int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
            }
            edi = (int*)local1c;
            ebp = (int*)((char*)ebp + 8);
            if (ebx != 0 && ebx != (int*)local4c) {
                _invalid_parameter_noinfo();
            }
            continue;
        } else {
            if (ebx != 0) {
                eax = (int*)*ebx;
            } else {
                _invalid_parameter_noinfo();
                eax = 0;
                if (ebp < (int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
                eax = (int*)*ebp;
            }
            int esi4 = local14;
            local28 = (int)eax;
            esi4 += 0xfffffee8;
            {
                int* r = (int*)sub_43b510();
                (void)r;
            }
            eax = (int*)*eax;
            int edx3 = *(int*)esi4;
            edx3 = *(int*)((char*)edx3 + 0xf4);
            local18 = (int)eax;
            local24 = (int)&local18;
            ((void (__stdcall*)(int))edx3)(local24);
            local13 = 1;
            if (ebx != 0) {
                eax = (int*)*ebx;
            } else {
                _invalid_parameter_noinfo();
                eax = 0;
                if (ebp < (int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
            }
            edi = (int*)local1c;
            ebp = (int*)((char*)ebp + 8);
            if (ebx != 0 && ebx != (int*)local4c) {
                _invalid_parameter_noinfo();
            }
            continue;
        }
    }

    {
        unsigned char al = (local13 == 0) ? 1 : 0;
        int ecx3 = (int)this - 0x118;
        sub_7110d0();
        return;
    }

fail:
    sub_803f10();
    {
        int esi5 = local14;
        esi5 += 0xfffffee8;
        sub_7119f0();
        sub_7110d0();
    }
    return;
}
