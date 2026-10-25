// from server: 100% by Espeon
// roc 2008-06 00448fd0  unit: CRenderSettings  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448fd0
//
// 00448fd0  51                   push ecx
// 00448fd1  56                   push esi
// 00448fd2  57                   push edi
// 00448fd3  8bf9                 mov edi, ecx
// 00448fd5  d98744010000         fld dword ptr [edi + 0x144]
// 00448fdb  8db744010000         lea esi, [edi + 0x144]
// 00448fe1  d9442410             fld dword ptr [esp + 0x10]
// 00448fe5  d8d1                 fcom st(1)
// 00448fe7  dfe0                 fnstsw ax
// 00448fe9  ddd9                 fstp st(1)
// 00448feb  f6c405               test ah, 5
// 00448fee  7a0d                 jp 0x448ffd
// 00448ff0  51                   push ecx
// 00448ff1  d91c24               fstp dword ptr [esp]
// 00448ff4  e847ffffff           call 0x448f40
// 00448ff9  d9442410             fld dword ptr [esp + 0x10]
// 00448ffd  d81e                 fcomp dword ptr [esi]
// 00448fff  dfe0                 fnstsw ax
// 00449001  f6c441               test ah, 0x41
// 00449004  7504                 jne 0x44900a
// 00449006  8d742410             lea esi, [esp + 0x10]
// 0044900a  d906                 fld dword ptr [esi]
// 0044900c  d9542410             fst dword ptr [esp + 0x10]
// 00449010  d905a4638100         fld dword ptr [0x8163a4]
// 00449016  d9542408             fst dword ptr [esp + 8]
// 0044901a  ded9                 fcompp 
// 0044901c  dfe0                 fnstsw ax
// 0044901e  f6c441               test ah, 0x41
// 00449021  8d442410             lea eax, [esp + 0x10]
// 00449025  7404                 je 0x44902b
// 00449027  8d442408             lea eax, [esp + 8]
// 0044902b  d900                 fld dword ptr [eax]
// 0044902d  d98748010000         fld dword ptr [edi + 0x148]
// 00449033  dde9                 fucomp st(1)
// 00449035  dfe0                 fnstsw ax
// 00449037  f6c444               test ah, 0x44
// 0044903a  7b18                 jnp 0x449054
// 0044903c  6864d49600           push 0x96d464
// 00449041  d99f48010000         fstp dword ptr [edi + 0x148]
// 00449047  8bcf                 mov ecx, edi
// 00449049  e8b24afcff           call 0x40db00
// 0044904e  5f                   pop edi
// 0044904f  5e                   pop esi
// 00449050  59                   pop ecx
// 00449051  c20400               ret 4
// 00449054  5f                   pop edi
// 00449055  ddd8                 fstp st(0)
// 00449057  5e                   pop esi
// 00449058  59                   pop ecx
// 00449059  c20400               ret 4

// from server: 85% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast

extern const char renderSettingsChanged;

struct CRenderSettings {
    char pad[0x144];
    float field_148;
    float field_144;
    void sub_448FD0(float);
    void sub_40DB00(const void*);
    void setAASamples(float);
};

inline const float& minimum(const float& a, const float& b) { return a > b ? b : a; }
inline const float& maximum(const float& a, const float& b) { return a > b ? a : b; }

void CRenderSettings::setAASamples(float value) {
    if (value < field_148)
        sub_448FD0(value);
    value = maximum(value, field_148);
    extern float lowerLimit;
    float zero = lowerLimit;
    float result = minimum(zero, value);
    if (result != field_144) {
        field_144 = result;
        sub_40DB00(&renderSettingsChanged);
    }
}

