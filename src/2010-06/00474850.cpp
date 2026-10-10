// from server: 53% by atomic.potato
extern "C" void func_00474740(void*, int*, int);

struct CScriptReviewView
{
    void f(int);
};

void CScriptReviewView::f(int value)
{
    int* p = 0;
    func_00474740((char*)this + 4, p, value);
}
