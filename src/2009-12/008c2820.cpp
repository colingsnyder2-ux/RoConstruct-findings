// from server: 80% by atomic.potato
extern char G;
char* func_008c1290();

extern "C" int __stdcall func_007f42e0(int);
extern "C" int __stdcall func_007f3c3e(int);

struct CXTPImageEditorDlg {
    int func_008c27e0(int);
    int func_008c2820(int, int);
};

int CXTPImageEditorDlg::func_008c2820(int a, int b)
{
    int v = *(int*)a;
    int r1 = func_007f42e0(v);
    char* r2 = func_008c1290();
    int r3 = func_007f3c3e((int)r2);
    return this->func_008c27e0(r3);
}
