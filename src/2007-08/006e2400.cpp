// from server: 100% by colin
// roc 2007-08 006e2400  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e2400
//
// 006e2400  56                   push esi
// 006e2401  8bf1                 mov esi, ecx
// 006e2403  e858feffff           call 0x6e2260
// 006e2408  85c0                 test eax, eax
// 006e240a  7502                 jne 0x6e240e
// 006e240c  5e                   pop esi
// 006e240d  c3                   ret 
// 006e240e  33c0                 xor eax, eax
// 006e2410  3986c0010000         cmp dword ptr [esi + 0x1c0], eax
// 006e2416  5e                   pop esi
// 006e2417  0f94c0               sete al
// 006e241a  c3                   ret 

struct S_func_006e2400 {
    char pad0[0x1c0];
    int m_field1c0;
    int helper();
    int f();
};

int S_func_006e2400::f()
{
    if (helper() == 0)
        return 0;
    return m_field1c0 == 0;
}
