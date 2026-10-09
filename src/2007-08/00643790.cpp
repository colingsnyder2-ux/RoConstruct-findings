// from server: 89% by colin
// roc 2007-08 00643790  unit: CXTPCommandBar  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643790
//
// 00643790  56                   push esi
// 00643791  8bf1                 mov esi, ecx
// 00643793  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 0064379a  7e0b                 jle 0x6437a7
// 0064379c  838ee400000002       or dword ptr [esi + 0xe4], 2
// 006437a3  5e                   pop esi
// 006437a4  c20800               ret 8
// 006437a7  57                   push edi
// 006437a8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006437ac  85ff                 test edi, edi
// 006437ae  7507                 jne 0x6437b7
// 006437b0  83a6e4000000fd       and dword ptr [esi + 0xe4], 0xfffffffd
// 006437b7  837e2000             cmp dword ptr [esi + 0x20], 0
// 006437bb  741f                 je 0x6437dc
// 006437bd  8b06                 mov eax, dword ptr [esi]
// 006437bf  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 006437c5  ffd2                 call edx
// 006437c7  85c0                 test eax, eax
// 006437c9  7411                 je 0x6437dc
// 006437cb  8b442410             mov eax, dword ptr [esp + 0x10]
// 006437cf  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006437d5  50                   push eax
// 006437d6  57                   push edi
// 006437d7  e8545b0800           call 0x6c9330
// 006437dc  5f                   pop edi
// 006437dd  5e                   pop esi
// 006437de  c20800               ret 8

struct CXTPCommandBar
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
    int field_30;
    int field_34;
    int field_38;
    int field_3c;
    int field_40;
    int field_44;
    int field_48;
    int field_4c;
    int field_50;
    int field_54;
    int field_58;
    int field_5c;
    int field_60;
    int field_64;
    int field_68;
    int field_6c;
    int field_70;
    int field_74;
    int field_78;
    int field_7c;
    int field_80;
    int field_84;
    int field_88;
    int field_8c;
    int field_90;
    int field_94;
    int field_98;
    int field_9c;
    int field_a0;
    int field_a4;
    int field_a8;
    int field_ac;
    int field_b0;
    int field_b4;
    int field_b8;
    int field_bc;
    int field_c0;
    int field_c4;
    int field_c8;
    int field_cc;
    int field_d0;
    int field_d4;
    int field_d8;
    int field_dc;
    int field_e0;
    int field_e4;
    int field_e8;
    int field_ec;
    int field_f0;
    int field_f4;
    int field_f8;
    int field_fc;
    int field_100;
    int field_104;
    int field_108;
    int field_10c;
    int field_110;
    int field_114;
    int field_118;
    int field_11c;
    int field_120;
    int field_124;
    int field_128;
    int field_12c;
    int field_130;
    int field_134;
    int field_138;
    int field_13c;
    int field_140;
    int field_144;
    int field_148;
    int field_14c;
    int field_150;
    int field_154;
    int field_158;
    int field_15c;
    int field_160;
    int field_164;
    int field_168;
    int field_16c;
    int field_170;
    int field_174;
    int field_178;
    int field_17c;

    void sub_00643790(int, int);
};

extern "C" int __stdcall sub_006c9330(int, int, int);

void CXTPCommandBar::sub_00643790(int a2, int a3)
{
    if (field_15c > 0)
    {
        field_e4 |= 2;
        return;
    }

    if (a2 == 0)
    {
        field_e4 &= 0xfffffffd;
    }

    if (field_20 != 0)
    {
        int (*fn)(void);
        fn = *(int (**)(void))(*(int*)this + 0x160);
        if (fn() != 0)
        {
            sub_006c9330(field_178, a2, a3);
        }
    }
}
