// from server: 90% by colin
// roc 2007-08 00557290  unit: ChatEnter  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00557290
//
// 00557290  51                   push ecx
// 00557291  56                   push esi
// 00557292  8bf1                 mov esi, ecx
// 00557294  e887820700           call 0x5cf520
// 00557299  d95c2404             fstp dword ptr [esp + 4]
// 0055729d  8bce                 mov ecx, esi
// 0055729f  e8bc820700           call 0x5cf560
// 005572a4  d8442404             fadd dword ptr [esp + 4]
// 005572a8  5e                   pop esi
// 005572a9  59                   pop ecx
// 005572aa  c3                   ret 

struct ChatEnter {
    float getA();
    float getB();
    float sum();
};

float ChatEnter::sum()
{
    float a = getA();
    float b = getB();
    return b + a;
}
