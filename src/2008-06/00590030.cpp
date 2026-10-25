// from server: 100% by tester
// roc 2008-06 00590030  unit: TextXmlParser  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00590030
//
// 00590030  8b442404             mov eax, dword ptr [esp + 4]
// 00590034  83ec0c               sub esp, 0xc
// 00590037  56                   push esi
// 00590038  8bf1                 mov esi, ecx
// 0059003a  50                   push eax
// 0059003b  8d4c2408             lea ecx, [esp + 8]
// 0059003f  51                   push ecx
// 00590040  e85bfe0700           call 0x60fea0
// 00590045  d900                 fld dword ptr [eax]
// 00590047  d99ec8020000         fstp dword ptr [esi + 0x2c8]
// 0059004d  83c408               add esp, 8
// 00590050  d94004               fld dword ptr [eax + 4]
// 00590053  d99ecc020000         fstp dword ptr [esi + 0x2cc]
// 00590059  d94008               fld dword ptr [eax + 8]
// 0059005c  d99ed0020000         fstp dword ptr [esi + 0x2d0]
// 00590062  5e                   pop esi
// 00590063  83c40c               add esp, 0xc
// 00590066  c20400               ret 4

struct TextXmlParser {
    char pad[0x2c8];
    float field260;
    float field264;
    float field268;
    void setVector(const float* v);
};

extern "C" float* __cdecl sub_5e1060(float* out, const float* in);

void TextXmlParser::setVector(const float* v) {
    float tmp[3];
    float* r = sub_5e1060(tmp, v);
    field260 = r[0];
    field264 = r[1];
    field268 = r[2];
}
