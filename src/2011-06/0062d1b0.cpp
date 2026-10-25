// from server: 100% by tester
// roc 2011-06 0062d1b0  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062d1b0
//
// 0062d1b0  ff05e4a3cc00         inc dword ptr [0xcca3e4]
// 0062d1b6  56                   push esi
// 0062d1b7  8bf1                 mov esi, ecx
// 0062d1b9  e882ffffff           call 0x62d140
// 0062d1be  8906                 mov dword ptr [esi], eax
// 0062d1c0  c7460400000000       mov dword ptr [esi + 4], 0
// 0062d1c7  8bc6                 mov eax, esi
// 0062d1c9  5e                   pop esi
// 0062d1ca  c3                   ret 

extern int g_00C18314;

struct S_func_00618780
{
    int m_value;
    int m_unused;
    S_func_00618780();
};

extern "C" int __cdecl func_00618710();

S_func_00618780::S_func_00618780()
{
    ++g_00C18314;
    m_value = func_00618710();
    m_unused = 0;
}
