// from server: 85% by colin
// roc 2007-08 0057ad80  unit: RBX::ArrowTool  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ad80
//
// 0057ad80  8b442404             mov eax, dword ptr [esp + 4]
// 0057ad84  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 0057ad8a  8b88bc000000         mov ecx, dword ptr [eax + 0xbc]
// 0057ad90  8b91bc000000         mov edx, dword ptr [ecx + 0xbc]
// 0057ad96  85d2                 test edx, edx
// 0057ad98  7414                 je 0x57adae
// 0057ad9a  8d9b00000000         lea ebx, [ebx]
// 0057ada0  8bc1                 mov eax, ecx
// 0057ada2  8bca                 mov ecx, edx
// 0057ada4  8b91bc000000         mov edx, dword ptr [ecx + 0xbc]
// 0057adaa  85d2                 test edx, edx
// 0057adac  75f2                 jne 0x57ada0
// 0057adae  c3                   ret 

struct S {
    char pad[0xbc];
    S* field_bc;
};

S* get(S* s)
{
    S* p = s->field_bc;
    S* q = p->field_bc;
    S* r = q->field_bc;
    if (r != 0) {
        do {
            p = q;
            q = r;
            r = q->field_bc;
        } while (r != 0);
    }
    return p;
}
