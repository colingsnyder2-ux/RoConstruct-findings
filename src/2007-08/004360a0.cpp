// from server: 85% by TrollStein
struct CDeclarationView
{
    void __cdecl constructView(char* out, int a, int b, int c, int d, int e, int f);
};

void CDeclarationView::constructView(char* out, int a, int b, int c, int d, int e, int f)
{
    int* begin = (int*)b;
    int* end = (int*)d;
    if (begin != end)
    {
        char* base = (char*)e + f;
        do
        {
            int v = *begin;
            ((void (__stdcall*)(char*, int))a)(base, v);
            begin++;
        } while (begin != end);
    }
    *(int*)(out + 0) = a;
    *(int*)(out + 4) = e;
    *(int*)(out + 8) = f;
    *(int*)(out + 12) = c;
}
