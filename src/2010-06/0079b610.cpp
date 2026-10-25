// from server: 100% by tester
// roc 2010-06 0079b610  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079b610
//
// 0079b610  8b442408             mov eax, dword ptr [esp + 8]
// 0079b614  dd00                 fld qword ptr [eax]
// 0079b616  8b442404             mov eax, dword ptr [esp + 4]
// 0079b61a  dc4c240c             fmul qword ptr [esp + 0xc]
// 0079b61e  c6400800             mov byte ptr [eax + 8], 0
// 0079b622  dd18                 fstp qword ptr [eax]
// 0079b624  c21000               ret 0x10

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
