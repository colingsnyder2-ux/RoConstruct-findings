// from server: 86% by colin
// roc 2007-08 004130f0  unit: std::runtime_error  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004130f0
//
// 004130f0  56                   push esi
// 004130f1  8bf1                 mov esi, ecx
// 004130f3  e868fcffff           call 0x412d60
// 004130f8  c7862812000002000000 mov dword ptr [esi + 0x1228], 2
// 00413102  c7862c12000004000000 mov dword ptr [esi + 0x122c], 4
// 0041310c  66c786261200005000   mov word ptr [esi + 0x1226], 0x50
// 00413115  a1986f7800           mov eax, dword ptr [0x786f98]
// 0041311a  6a04                 push 4
// 0041311c  50                   push eax
// 0041311d  6a21                 push 0x21
// 0041311f  56                   push esi
// 00413120  ff15cce67700         call dword ptr [0x77e6cc]
// 00413126  50                   push eax
// 00413127  e8b4e5feff           call 0x4016e0
// 0041312c  83c414               add esp, 0x14
// 0041312f  8bc6                 mov eax, esi
// 00413131  5e                   pop esi
// 00413132  c3                   ret 

struct S_func_004130f0 {
    char pad[0x1226];
    unsigned short m_1226;
    int m_1228;
    int m_122c;
    int init();
};

extern "C" int __stdcall sub_004016e0(int, int, int, int, int);
extern "C" int __stdcall sub_00412d60();

extern unsigned int g_786f98;
extern int (__stdcall *g_77e6cc)(int, int, int, int);

int S_func_004130f0::init()
{
    sub_00412d60();
    m_1228 = 2;
    m_122c = 4;
    m_1226 = 0x50;
    sub_004016e0((int)this, 0x21, g_786f98, 4, g_77e6cc((int)this, 0x21, g_786f98, 4));
    return (int)this;
}
