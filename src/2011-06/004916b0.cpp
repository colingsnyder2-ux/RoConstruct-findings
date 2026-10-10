// from server: 66% by atomic.potato
struct CScriptReviewView
{
    void* f(void*);
};

extern "C" void* func_00491590(void*, void*, void*);

void* CScriptReviewView::f(void* value)
{
    void* result;
    result = func_00491590((char*)this + 4, value, 0);
    return value;
}
