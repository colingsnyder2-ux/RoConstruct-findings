// from server: 88% by tester
// roc 2008-06 007b1580  unit: RBX::RenderNew::TextureProxy  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b1580
//
// 007b1580  83ec08               sub esp, 8
// 007b1583  80791400             cmp byte ptr [ecx + 0x14], 0
// 007b1587  53                   push ebx
// 007b1588  56                   push esi
// 007b1589  7413                 je 0x7b159e
// 007b158b  833d30bf960000       cmp dword ptr [0x96bf30], 0
// 007b1592  740a                 je 0x7b159e
// 007b1594  dd0580838200         fld qword ptr [0x828380]
// 007b159a  b301                 mov bl, 1
// 007b159c  eb04                 jmp 0x7b15a2
// 007b159e  d9e8                 fld1 
// 007b15a0  32db                 xor bl, bl
// 007b15a2  8b442418             mov eax, dword ptr [esp + 0x18]
// 007b15a6  dd5c2408             fstp qword ptr [esp + 8]
// 007b15aa  8b742414             mov esi, dword ptr [esp + 0x14]
// 007b15ae  50                   push eax
// 007b15af  8bce                 mov ecx, esi
// 007b15b1  e86a5ad2ff           call 0x4d7020
// 007b15b6  dd442408             fld qword ptr [esp + 8]
// 007b15ba  d9c0                 fld st(0)
// 007b15bc  d906                 fld dword ptr [esi]
// 007b15be  d8c9                 fmul st(1)
// 007b15c0  d91e                 fstp dword ptr [esi]
// 007b15c2  d94604               fld dword ptr [esi + 4]
// 007b15c5  d8c9                 fmul st(1)
// 007b15c7  d95e04               fstp dword ptr [esi + 4]
// 007b15ca  d84e08               fmul dword ptr [esi + 8]
// 007b15cd  d95e08               fstp dword ptr [esi + 8]
// 007b15d0  84db                 test bl, bl
// 007b15d2  7408                 je 0x7b15dc
// 007b15d4  dd0538e78100         fld qword ptr [0x81e738]
// 007b15da  eb02                 jmp 0x7b15de
// 007b15dc  d9e8                 fld1 
// 007b15de  d9460c               fld dword ptr [esi + 0xc]
// 007b15e1  8bc6                 mov eax, esi
// 007b15e3  d8c9                 fmul st(1)
// 007b15e5  d95e0c               fstp dword ptr [esi + 0xc]
// 007b15e8  d94610               fld dword ptr [esi + 0x10]
// 007b15eb  d8c9                 fmul st(1)
// 007b15ed  d95e10               fstp dword ptr [esi + 0x10]
// 007b15f0  d84e14               fmul dword ptr [esi + 0x14]
// 007b15f3  d95e14               fstp dword ptr [esi + 0x14]
// 007b15f6  d9c0                 fld st(0)
// 007b15f8  d94618               fld dword ptr [esi + 0x18]
// 007b15fb  d8c9                 fmul st(1)
// 007b15fd  d95e18               fstp dword ptr [esi + 0x18]
// 007b1600  d9461c               fld dword ptr [esi + 0x1c]
// 007b1603  d8c9                 fmul st(1)
// 007b1605  d95e1c               fstp dword ptr [esi + 0x1c]
// 007b1608  d84e20               fmul dword ptr [esi + 0x20]
// 007b160b  d95e20               fstp dword ptr [esi + 0x20]
// 007b160e  d9c0                 fld st(0)
// 007b1610  d9c0                 fld st(0)
// 007b1612  d84e24               fmul dword ptr [esi + 0x24]
// 007b1615  d95e24               fstp dword ptr [esi + 0x24]
// 007b1618  d94628               fld dword ptr [esi + 0x28]
// 007b161b  d8c9                 fmul st(1)
// 007b161d  d95e28               fstp dword ptr [esi + 0x28]
// 007b1620  d84e2c               fmul dword ptr [esi + 0x2c]
// 007b1623  d95e2c               fstp dword ptr [esi + 0x2c]
// 007b1626  d94630               fld dword ptr [esi + 0x30]
// 007b1629  d8c9                 fmul st(1)
// 007b162b  d95e30               fstp dword ptr [esi + 0x30]
// 007b162e  d94634               fld dword ptr [esi + 0x34]
// 007b1631  d8c9                 fmul st(1)
// 007b1633  d95e34               fstp dword ptr [esi + 0x34]
// 007b1636  d84e38               fmul dword ptr [esi + 0x38]
// 007b1639  d95e38               fstp dword ptr [esi + 0x38]
// 007b163c  5e                   pop esi
// 007b163d  5b                   pop ebx
// 007b163e  83c408               add esp, 8
// 007b1641  c20800               ret 8

struct TextureProxy {
    char pad[0x14];
    bool flag;
    void transform(float* out, float* in);
};

extern double g_scale1;
extern double g_scale2;
extern int g_enabled;

void __stdcall sub_4d7020(float* dst, float* src);

void TextureProxy::transform(float* out, float* in)
{
    double s;
    bool useScale;
    if (flag && g_enabled) {
        s = g_scale1;
        useScale = true;
    } else {
        s = 1.0;
        useScale = false;
    }
    sub_4d7020(out, in);
    out[0] = (float)(out[0] * s);
    out[1] = (float)(out[1] * s);
    out[2] = (float)(out[2] * s);
    double s2 = useScale ? g_scale2 : 1.0;
    out[3] = (float)(out[3] * s2);
    out[4] = (float)(out[4] * s2);
    out[5] = (float)(out[5] * s2);
    out[6] = (float)(out[6] * s);
    out[7] = (float)(out[7] * s);
    out[8] = (float)(out[8] * s);
    out[9] = (float)(out[9] * s);
    out[10] = (float)(out[10] * s);
    out[11] = (float)(out[11] * s);
    out[12] = (float)(out[12] * s);
    out[13] = (float)(out[13] * s);
    out[14] = (float)(out[14] * s);
}
