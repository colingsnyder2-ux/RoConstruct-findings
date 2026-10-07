// roc 2007-08 0049fc10  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 9 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0049fc10
//
// 0049fc10  8b442404             mov eax, dword ptr [esp + 4]
// 0049fc14  8901                 mov dword ptr [ecx], eax
// 0049fc16  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0049fc10 {
    int m_x;
    void f(int a1);
};
void S_func_0049fc10::f(int a1)
{
    m_x = (int)a1;
}
