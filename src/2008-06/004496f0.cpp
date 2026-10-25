// from server: 100% by atomic.potato
// roc 2008-06 004496f0  unit: CRbxPlayDocTemplate  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004496f0
//
// 004496f0  56                   push esi
// 004496f1  57                   push edi
// 004496f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004496f6  57                   push edi
// 004496f7  8bf1                 mov esi, ecx
// 004496f9  e8f87a2500           call 0x6a11f6
// 004496fe  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 00449704  750a                 jne 0x449710
// 00449706  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 00449710  5f                   pop edi
// 00449711  5e                   pop esi
// 00449712  c20400               ret 4

struct CRbxPlayDocTemplate
{
    void* pad[36];
    void* field_90;
    void method(void*);
};

extern "C" void __stdcall sub_006A11F6(void*);

void CRbxPlayDocTemplate::method(void* value)
{
    sub_006A11F6(value);
    if (value == field_90)
        field_90 = 0;
}
