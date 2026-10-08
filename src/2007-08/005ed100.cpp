// from server: 100% by colin
// roc 2007-08 005ed100  unit: RBX::BodyGyro  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed100
//
// 005ed100  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005ed103  8b90d8010000         mov edx, dword ptr [eax + 0x1d8]
// 005ed109  56                   push esi
// 005ed10a  8b7264               mov esi, dword ptr [edx + 0x64]
// 005ed10d  57                   push edi
// 005ed10e  8db918ffffff         lea edi, [ecx - 0xe8]
// 005ed114  56                   push esi
// 005ed115  8bcf                 mov ecx, edi
// 005ed117  e8e4ecffff           call 0x5ebe00
// 005ed11c  56                   push esi
// 005ed11d  8bcf                 mov ecx, edi
// 005ed11f  e8ace9ffff           call 0x5ebad0
// 005ed124  5f                   pop edi
// 005ed125  5e                   pop esi
// 005ed126  c20800               ret 8

struct BodyGyro_005ed100 {
    char pad0[0x10];
    int m_field10;
    void f(int a, int b);
};

struct Sub_005ebe00 {
    void g(int);
};

struct Sub_005ebad0 {
    void g(int);
};

void BodyGyro_005ed100::f(int a, int b)
{
    int v = *(int*)(m_field10 + 0x1d8);
    int s = *(int*)(v + 0x64);
    BodyGyro_005ed100* self = (BodyGyro_005ed100*)((char*)this - 0xe8);
    ((Sub_005ebe00*)self)->g(s);
    ((Sub_005ebad0*)self)->g(s);
}
