// from server: 77% by atomic.potato
extern char G;
char* func_008c1290();

extern "C" int __stdcall func_007f42e0(int);
extern "C" int __stdcall func_007f3c3e(int);

struct CXTPImageEditorDlg {
    int func_008c27e0(int);
    int func_008c2850(int, int, int);
};

int CXTPImageEditorDlg::func_008c2850(int, int, int a3)
{
    int v = *(int*)a3;
    int r1 = func_007f42e0(v);
    char* r2 = func_008c1290();
    int r3 = func_007f3c3e((int)r2);
    return func_008c27e0(r3);
}
