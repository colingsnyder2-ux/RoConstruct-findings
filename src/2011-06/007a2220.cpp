// from server: 100% by atomic.potato
// roc 2011-06 007a2220  unit: RBX::Body  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a2220
//
// 007a2220  53                   push ebx
// 007a2221  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007a2225  56                   push esi
// 007a2226  57                   push edi
// 007a2227  8bf9                 mov edi, ecx
// 007a2229  33f6                 xor esi, esi
// 007a222b  397710               cmp dword ptr [edi + 0x10], esi
// 007a222e  895f30               mov dword ptr [edi + 0x30], ebx
// 007a2231  7e12                 jle 0x7a2245
// 007a2233  8b470c               mov eax, dword ptr [edi + 0xc]
// 007a2236  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007a2239  53                   push ebx
// 007a223a  e8e1ffffff           call 0x7a2220
// 007a223f  46                   inc esi
// 007a2240  3b7710               cmp esi, dword ptr [edi + 0x10]
// 007a2243  7cee                 jl 0x7a2233
// 007a2245  5f                   pop edi
// 007a2246  5e                   pop esi
// 007a2247  5b                   pop ebx
// 007a2248  c20400               ret 4

struct S
{
    int pad0[3];
    S** items;
    int count;
    int pad1[7];
    int value;
    void f(int);
};

void S::f(int value)
{
    int i = 0;
    this->value = value;
    if (count > 0)
    {
        do
        {
            items[i]->f(value);
            ++i;
        } while (i < count);
    }
}
