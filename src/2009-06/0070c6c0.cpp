// from server: 100% by tester
// roc 2009-06 0070c6c0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070c6c0
//
// 0070c6c0  8b442408             mov eax, dword ptr [esp + 8]
// 0070c6c4  dd00                 fld qword ptr [eax]
// 0070c6c6  8b442404             mov eax, dword ptr [esp + 4]
// 0070c6ca  dc4c240c             fmul qword ptr [esp + 0xc]
// 0070c6ce  c6400800             mov byte ptr [eax + 8], 0
// 0070c6d2  dd18                 fstp qword ptr [eax]
// 0070c6d4  c21000               ret 0x10

struct S
{
    double value;
    unsigned char state;
};

void __stdcall f(S *a, const S *b, double c);

void __stdcall f(S *a, const S *b, double c)
{
    a->value = b->value * c;
    a->state = 0;
}
