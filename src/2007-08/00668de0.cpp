// from server: 95% by colin
// roc 2007-08 00668de0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668de0
//
// 00668de0  56                   push esi
// 00668de1  8bf1                 mov esi, ecx
// 00668de3  f6461801             test byte ptr [esi + 0x18], 1
// 00668de7  7511                 jne 0x668dfa
// 00668de9  8d4e14               lea ecx, [esi + 0x14]
// 00668dec  ff1598dd7700         call dword ptr [0x77dd98]
// 00668df2  50                   push eax
// 00668df3  6a04                 push 4
// 00668df5  e88e78fcff           call 0x630688
// 00668dfa  8b4628               mov eax, dword ptr [esi + 0x28]
// 00668dfd  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00668e00  8d5004               lea edx, [eax + 4]
// 00668e03  3bd1                 cmp edx, ecx
// 00668e05  760d                 jbe 0x668e14
// 00668e07  2bc1                 sub eax, ecx
// 00668e09  83c004               add eax, 4
// 00668e0c  50                   push eax
// 00668e0d  8bce                 mov ecx, esi
// 00668e0f  e81cf60c00           call 0x738430
// 00668e14  8b4628               mov eax, dword ptr [esi + 0x28]
// 00668e17  d900                 fld dword ptr [eax]
// 00668e19  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00668e1d  d919                 fstp dword ptr [ecx]
// 00668e1f  83462804             add dword ptr [esi + 0x28], 4
// 00668e23  8bc6                 mov eax, esi
// 00668e25  5e                   pop esi
// 00668e26  c20400               ret 4

struct CXTTreeBase {
    char pad[0x14];
    int field14;
    unsigned char flags18;
    char pad3[0xf];
    int field28;
    int field2c;
    void sub_738430(int);
    CXTTreeBase* get(float* out);
};

extern "C" int __stdcall sub_630688(int, int);
extern "C" int __stdcall sub_77dd98(int);

CXTTreeBase* CXTTreeBase::get(float* out) {
    if ((flags18 & 1) == 0) {
        int v = sub_77dd98((int)&field14);
        sub_630688(4, v);
    }
    int a = field28;
    int b = field2c;
    if ((unsigned int)(a + 4) > (unsigned int)b) {
        sub_738430(a - b + 4);
    }
    *out = *(float*)field28;
    field28 += 4;
    return this;
}
