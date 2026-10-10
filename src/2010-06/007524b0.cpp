// from server: 94% by atomic.potato
struct S
{
    int pad0[6];
    int field18;
};

extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);
extern "C" S *__cdecl AllocateS();

S * __cdecl f(int *value)
{
    S *object = AllocateS();
    EnterCriticalSection(object);
    *value = object->field18;
    object->field18 = (int)value;
    LeaveCriticalSection(object);
    return object;
}
