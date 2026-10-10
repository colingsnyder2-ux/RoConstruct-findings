// from server: 35% by colin
struct CXTPToolTipContext_CLunaToolTip
{
    char pad[0x6c];
    void* field_6c;
    char pad2[0x12c - 0x70];
    void* field_12c;

    void func_006954d0(int* out, int arg);
};

extern "C" void __stdcall sub_630946(void*);
extern "C" void __stdcall sub_738694(void*);
extern "C" void __stdcall sub_6953f0(void*, void*);
extern "C" void __stdcall sub_6942c0();
extern "C" void __stdcall sub_47b540();
extern "C" void __stdcall sub_653870();
extern "C" void __stdcall sub_680550(void*, void*);
extern "C" void __stdcall sub_6805d0(void*);
extern "C" void __stdcall sub_630940(void*);

extern "C" int (__stdcall *g_77dcd0)();
extern "C" int (__stdcall *g_77dcc8)();
extern "C" int (__stdcall *g_77dd98)();
extern "C" int (__stdcall *g_77ddbc)();

void CXTPToolTipContext_CLunaToolTip::func_006954d0(int* out, int arg)
{
    int local_14;
    int local_18;
    int local_1c;
    int local_20;
    int local_24;
    int local_28;
    int local_2c;
    int local_30;
    int local_34;
    int local_38;
    int local_3c;
    int local_40;
    int local_44;
    int local_48;
    int local_4c;
    int local_50;
    int local_54;
    int local_58;
    int local_5c;
    int local_60;
    int local_64;
    int local_68;
    int local_6c;
    int local_70;
    int local_74;
    int local_78;
    int local_7c;
    int local_80;
    int local_84;
    int local_88;
    int local_8c;
    int local_90;

    sub_630946(&local_68);
    local_88 = 0;

    void* p = (char*)field_6c + 0x94;
    sub_738694(&local_68);
    local_28 = (int)p;

    sub_6953f0(&local_14, &local_68);
    local_84 = 1;

    if (g_77dcd0())
    {
        out[0] = 0;
        out[1] = 0;
        goto cleanup;
    }

    {
        void* eax = field_6c;
        int ecx = *(int*)((char*)eax + 0x40);
        int edi = *(int*)((char*)eax + 0x48);
        int edx = *(int*)((char*)eax + 0x44);
        int eax2 = *(int*)((char*)eax + 0x4c);
        edi = edi + ecx + 6;
        eax2 = eax2 + edx + 6;
        local_24 = eax2;
        local_40 = edi;

        sub_6942c0();
        int diff = (int)sub_6942c0 - edi;

        int edi2 = local_68;
        local_50 = 0;
        local_54 = 0;
        local_58 = diff;
        local_5c = 0;
        edi2 += 0x70;

        g_77dcc8();
        g_77dd98();
        (*(void(**)(void*))edi2)(&local_78);

        int edi3 = local_54 - local_4c;
        int ebp = local_50 - local_48;

        int eax3 = (field_12c != 0) ? 1 : 0;
        local_1c = eax3;
        local_34 = edi3;

        g_77dcd0();
        local_90 = 1;
        local_28 = 0;

        int eax4 = (g_77dcd0() == 0) ? 1 : 0;
        local_18 = eax4;

        if (local_1c != 0)
        {
            sub_47b540();
            int v = (int)sub_47b540;
            local_90 = v;
            sub_653870();
            int eax5 = (int)sub_653870;
            int edx2 = (v <= 0x10) ? 1 : 0;
            local_28 = eax5;
            local_2c = v;
            local_90 = edx2;
            if (edx2 != 0)
            {
                if (local_18 == 0)
                {
                    ebp = eax5 + ebp + 3;
                }
                else
                {
                    ebp = eax5 + ebp + 5;
                }
            }
            else
            {
                ebp = eax5 + ebp + 5;
            }
            if (edi3 > v)
            {
                edi3 = v;
            }
            else
            {
                edi3 = local_34;
            }
        }
        else
        {
            edi3 = local_34;
        }

        if (local_18 != 0)
        {
            void* ecx2 = (char*)field_6c + 0x9c;
            sub_680550(&local_60, &local_68);
            local_84 = 2;

            sub_6942c0();
            int esi2 = local_68;
            int ecx3 = 0xffffffe7 - local_40;
            int eax6 = (int)sub_6942c0 + ecx3;

            local_34 = 0;
            local_38 = 0;
            local_40 = 0;
            local_3c = eax6;
            esi2 += 0x70;

            g_77dcc8();
            g_77dd98();
            (*(void(**)(void*))esi2)(&local_78);

            int ecx4 = local_3c - local_34;
            int esi3 = local_1c;
            edi3 = edi3 + ecx4 + 0x14;

            int eax7;
            if (esi3 != 0 && local_90 != 0)
            {
                eax7 = local_28 + 1;
            }
            else
            {
                eax7 = 0;
            }

            int ecx5 = local_30;
            int edx3 = local_38;
            eax7 = eax7 - ecx5;
            ebp += 0x19;
            eax7 = eax7 + edx3 + 4;

            if (ebp > eax7)
            {
                int ebp2;
                if (esi3 != 0 && local_90 != 0)
                {
                    ebp2 = local_28 + 1;
                }
                else
                {
                    ebp2 = 0;
                }
                ebp2 = ebp2 - ecx5;
                ebp = edx3 + ebp2 + 4;
            }

            local_84 = 1;
            sub_6805d0(&local_58);
        }

        sub_738694(&local_68);
        ebp += local_40;
        edi3 += local_24;
        out[0] = ebp;
        out[1] = edi3;
    }

cleanup:
    g_77ddbc();
    local_84 = -1;
    sub_630940(&local_68);
}
