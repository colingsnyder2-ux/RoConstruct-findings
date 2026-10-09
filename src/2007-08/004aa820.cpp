// from server: 78% by colin
// roc 2007-08 004aa820  unit: RBX::Network::Peer  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004aa820
//
// 004aa820  56                   push esi
// 004aa821  57                   push edi
// 004aa822  8bb9f8000000         mov edi, dword ptr [ecx + 0xf8]
// 004aa828  8b37                 mov esi, dword ptr [edi]
// 004aa82a  81c600010000         add esi, 0x100
// 004aa830  e82be7feff           call 0x498f60
// 004aa835  0fb7800c010000       movzx eax, word ptr [eax + 0x10c]
// 004aa83c  50                   push eax
// 004aa83d  e81ee7feff           call 0x498f60
// 004aa842  0fb78808010000       movzx ecx, word ptr [eax + 0x108]
// 004aa849  51                   push ecx
// 004aa84a  e811e7feff           call 0x498f60
// 004aa84f  8b16                 mov edx, dword ptr [esi]
// 004aa851  db8004010000         fild dword ptr [eax + 0x104]
// 004aa857  83ec08               sub esp, 8
// 004aa85a  8bcf                 mov ecx, edi
// 004aa85c  dd1c24               fstp qword ptr [esp]
// 004aa85f  ffd2                 call edx
// 004aa861  5f                   pop edi
// 004aa862  5e                   pop esi
// 004aa863  c3                   ret 

struct Peer {
    char pad[0xf8];
    int* field_f8;
    void func();
};

extern "C" int __cdecl sub_498F60();

void Peer::func()
{
    int* p = field_f8;
    int* q = (int*)(*p + 0x100);
    int a = sub_498F60();
    unsigned short w1 = *(unsigned short*)(a + 0x10c);
    int b = sub_498F60();
    unsigned short w2 = *(unsigned short*)(b + 0x108);
    int c = sub_498F60();
    int v = *(int*)(c + 0x104);
    double d = (double)v;
    void (__thiscall *fn)(void*, double) = *(void (__thiscall **)(void*, double))q;
    fn(p, d);
}
