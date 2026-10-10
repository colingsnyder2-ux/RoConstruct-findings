// from server: 77% by why2
// roc 2009-06 0062d150  unit: RBX::ArrowTool  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062d150
//
// 0062d150  8b442404             mov eax, dword ptr [esp + 4]
// 0062d154  8b5008               mov edx, dword ptr [eax + 8]
// 0062d157  8b4804               mov ecx, dword ptr [eax + 4]
// 0062d15a  8b00                 mov eax, dword ptr [eax]
// 0062d15c  52                   push edx
// 0062d15d  ffd0                 call eax
// 0062d15f  c3                   ret

struct S {
    void *p0;
    void *p4;
    void *p8;
};

void f(S *s)
{
    void (*fn)(void *, void *) = (void (*)(void *, void *))s->p0;
    fn(s->p4, s->p8);
}
