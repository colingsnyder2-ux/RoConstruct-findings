// from server: 42% by atomic.potato
typedef unsigned long DWORD;

extern "C" void* __stdcall rbx_call(DWORD, DWORD, DWORD);

struct CNameItem
{
    void* f(void* value, DWORD flags);
};

void* CNameItem::f(void* value, DWORD flags)
{
    char* p = (char*)this + 0x40;
    return rbx_call((DWORD)value, (DWORD)p, 0);
}
