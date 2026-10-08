// from server: 100% by colin
// roc 2007-08 00567990  unit: TextXmlParser  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00567990
//
// 00567990  8b442404             mov eax, dword ptr [esp + 4]
// 00567994  83ec0c               sub esp, 0xc
// 00567997  56                   push esi
// 00567998  8bf1                 mov esi, ecx
// 0056799a  50                   push eax
// 0056799b  8d4c2408             lea ecx, [esp + 8]
// 0056799f  51                   push ecx
// 005679a0  e8bb960700           call 0x5e1060
// 005679a5  d900                 fld dword ptr [eax]
// 005679a7  d99e60020000         fstp dword ptr [esi + 0x260]
// 005679ad  83c408               add esp, 8
// 005679b0  d94004               fld dword ptr [eax + 4]
// 005679b3  d99e64020000         fstp dword ptr [esi + 0x264]
// 005679b9  d94008               fld dword ptr [eax + 8]
// 005679bc  d99e68020000         fstp dword ptr [esi + 0x268]
// 005679c2  5e                   pop esi
// 005679c3  83c40c               add esp, 0xc
// 005679c6  c20400               ret 4

struct TextXmlParser {
    char pad[0x260];
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
