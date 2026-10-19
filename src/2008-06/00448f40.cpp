// from server: 84% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 75% by colin
// roc 2008-06 00448f40  unit: CRenderSettings  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448f40
//
// 00448f40  51                   push ecx
// 00448f41  56                   push esi
// 00448f42  57                   push edi
// 00448f43  8bf9                 mov edi, ecx
// 00448f45  d98748010000         fld dword ptr [edi + 0x148]
// 00448f4b  8db748010000         lea esi, [edi + 0x148]
// 00448f51  d9442410             fld dword ptr [esp + 0x10]
// 00448f55  d8d1                 fcom st(1)
// 00448f57  dfe0                 fnstsw ax
// 00448f59  ddd9                 fstp st(1)
// 00448f5b  f6c441               test ah, 0x41
// 00448f5e  750d                 jne 0x448f6d
// 00448f60  51                   push ecx
// 00448f61  d91c24               fstp dword ptr [esp]
// 00448f64  e867000000           call 0x448fd0
// 00448f69  d9442410             fld dword ptr [esp + 0x10]
// 00448f6d  d81e                 fcomp dword ptr [esi]
// 00448f6f  dfe0                 fnstsw ax
// 00448f71  f6c405               test ah, 5
// 00448f74  7a04                 jp 0x448f7a
// 00448f76  8d742410             lea esi, [esp + 0x10]
// 00448f7a  d906                 fld dword ptr [esi]
// 00448f7c  d9542410             fst dword ptr [esp + 0x10]
// 00448f80  d9ee                 fldz 
// 00448f82  d9542408             fst dword ptr [esp + 8]
// 00448f86  ded9                 fcompp 
// 00448f88  dfe0                 fnstsw ax
// 00448f8a  f6c405               test ah, 5
// 00448f8d  8d442410             lea eax, [esp + 0x10]
// 00448f91  7b04                 jnp 0x448f97
// 00448f93  8d442408             lea eax, [esp + 8]
// 00448f97  d900                 fld dword ptr [eax]
// 00448f99  d98744010000         fld dword ptr [edi + 0x144]
// 00448f9f  dde9                 fucomp st(1)
// 00448fa1  dfe0                 fnstsw ax
// 00448fa3  f6c444               test ah, 0x44
// 00448fa6  7b18                 jnp 0x448fc0
// 00448fa8  6848d49600           push 0x96d448
// 00448fad  d99f44010000         fstp dword ptr [edi + 0x144]
// 00448fb3  8bcf                 mov ecx, edi
// 00448fb5  e8464bfcff           call 0x40db00
// 00448fba  5f                   pop edi
// 00448fbb  5e                   pop esi
// 00448fbc  59                   pop ecx
// 00448fbd  c20400               ret 4
// 00448fc0  5f                   pop edi
// 00448fc1  ddd8                 fstp st(0)
// 00448fc3  5e                   pop esi
// 00448fc4  59                   pop ecx
// 00448fc5  c20400               ret 4

struct CRenderSettings {
    char pad[0x144];
    float field_144;
    float field_148;
    void sub_448FD0(float);
    void sub_40DB00(const void*);
    void setAASamples(float);
};

void CRenderSettings::setAASamples(float value) {
    float* esi = &field_148;
    float cur = *esi;
    if (!(value == cur)) {
        sub_448FD0(value);
        value = *esi;
    }
    if (value == *esi) {
        esi = &value;
    }
    float v = *esi;
    float zero = 0.0f;
    float* p;
    if (v == zero) {
        p = &v;
    } else {
        p = &zero;
    }
    float result = *p;
    if (!(result == field_144)) {
        field_144 = result;
        sub_40DB00((const void*)0x96d448);
    }
}
