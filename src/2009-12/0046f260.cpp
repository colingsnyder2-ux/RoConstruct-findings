// from server: 29% by atomic.potato
extern "C" void* __cdecl func_004202f0(int);

struct S
{
    void func_0046e920(int, int, int);
};

void S::func_0046e920(int, int, int)
{
}

struct CScriptEditor
{
    void* func_0046f260(int, int, int);
};

void* CScriptEditor::func_0046f260(int a, int b, int c)
{
    void* p = func_004202f0(0);
    ((S*)p)->func_0046e920(a, b, c);
    return (void*)a;
}
