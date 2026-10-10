// from server: 35% by colin
// roc 2007-08 0048e3c0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 386 bytes

extern "C" __declspec(dllimport) void __stdcall _invalid_parameter_noinfo();

struct RefPropDescriptor {
    char pad0[0xc];
    int field_c;
    int field_4;
    int field_0;

    void construct(char* name, char* category, int get, int set, int attributes, int security);
    void checkFlags();
};

struct Helper {
    int a;
    int b;
    int c;
    int d;
    char e;
};

extern "C" void __cdecl sub_489940();
extern "C" void __cdecl sub_48d5b0();
extern "C" void __cdecl sub_4891b0();
extern "C" void __cdecl sub_4872f0();

void RefPropDescriptor::construct(char* name, char* category, int get, int set, int attributes, int security)
{
    Helper h;
    int local2c;
    int local30;
    int local10;
    int local14;
    int local18;
    int local28;
    int local34;
    int local38;
    int ebp_val;
    int ebx_val;
    int esi_val;
    int eax_val;
    char dl_val;

    sub_489940();
    sub_48d5b0();
    ebp_val = local34;
    if (ebp_val != -2 && ebp_val != 0 && ebp_val != ebx_val)
        _invalid_parameter_noinfo();

    eax_val = local18;
    if (eax_val == esi_val) {
        local28 = ebx_val;
        local28 = esi_val;
        local28 = ebx_val;
        local28 = esi_val;
        h.e = 0;
        return;
    }

    if (field_c != 0) {
        sub_4872f0();
        ebx_val = local30;
        esi_val = local2c;
    } else {
        while (1) {
            if (esi_val != -2 && esi_val != 0 && esi_val != local34)
                _invalid_parameter_noinfo();
            if (ebx_val == local38)
                break;
            if (esi_val != -2) {
                if (esi_val == 0)
                    _invalid_parameter_noinfo();
                if (esi_val + 0x18 < 0x10)
                    eax_val = esi_val + 4;
                else
                    eax_val = *(int*)(esi_val + 4);
                if (ebx_val >= eax_val + *(int*)(esi_val + 0x14))
                    _invalid_parameter_noinfo();
            }
            dl_val = *(char*)ebx_val;
            ebp_val = field_4;
            sub_4891b0();
            if (*(int*)eax_val != 0 && *(int*)eax_val != local10)
                _invalid_parameter_noinfo();
            if (*(int*)(eax_val + 4) == ebp_val)
                break;
            if (esi_val != -2) {
                if (esi_val == 0)
                    _invalid_parameter_noinfo();
                if (esi_val + 0x18 < 0x10)
                    eax_val = esi_val + 4;
                else
                    eax_val = *(int*)(esi_val + 4);
                if (ebx_val >= eax_val + *(int*)(esi_val + 0x14))
                    _invalid_parameter_noinfo();
            }
            ebx_val++;
        }
    }

    local28 = esi_val;
    local28 = ebp_val;
    local28 = ebx_val;
    local28 = local18;
    h.e = 0;
}
