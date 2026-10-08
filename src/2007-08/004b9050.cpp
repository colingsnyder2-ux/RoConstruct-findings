// from server: 63% by colin
// roc 2007-08 004b9050  unit: RakPeer  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9050
//
// 004b9050  51                   push ecx
// 004b9051  8b81d8060000         mov eax, dword ptr [ecx + 0x6d8]
// 004b9057  85c0                 test eax, eax
// 004b9059  7630                 jbe 0x4b908b
// 004b905b  8b89e0060000         mov ecx, dword ptr [ecx + 0x6e0]
// 004b9061  85c9                 test ecx, ecx
// 004b9063  890c24               mov dword ptr [esp], ecx
// 004b9066  db0424               fild dword ptr [esp]
// 004b9069  7d06                 jge 0x4b9071
// 004b906b  d805706f7800         fadd dword ptr [0x786f70]
// 004b9071  85c0                 test eax, eax
// 004b9073  890424               mov dword ptr [esp], eax
// 004b9076  db0424               fild dword ptr [esp]
// 004b9079  7d06                 jge 0x4b9081
// 004b907b  d805706f7800         fadd dword ptr [0x786f70]
// 004b9081  def9                 fdivp st(1)
// 004b9083  d91c24               fstp dword ptr [esp]
// 004b9086  d90424               fld dword ptr [esp]
// 004b9089  59                   pop ecx
// 004b908a  c3                   ret 
// 004b908b  d9ee                 fldz 
// 004b908d  59                   pop ecx
// 004b908e  c3                   ret 

struct RakPeer {
    char pad[0x6d8];
    unsigned int field_0x6d8;
    char pad2[4];
    int field_0x6e0;
    float getRatio();
};

float RakPeer::getRatio()
{
    unsigned int a = field_0x6d8;
    if (a != 0)
        return 0.0f;
    int b = field_0x6e0;
    float fb = (float)b;
    if (b < 0)
        fb += 4294967296.0f;
    float fa = (float)a;
    if ((int)a < 0)
        fa += 4294967296.0f;
    return fb / fa;
}
