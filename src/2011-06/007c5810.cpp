// from server: 91% by atomic.potato
struct S
{
    int pad[6];
    int field_18;
};

extern "C" S *__cdecl func_007c55d0();
extern "C" void __stdcall EnterCriticalSection(S *);
extern "C" void __stdcall LeaveCriticalSection(S *);

void __cdecl f(int *value)
{
    S *object = func_007c55d0();
    EnterCriticalSection(object);
    *value = object->field_18;
    object->field_18 = (int)value;
    LeaveCriticalSection(object);
}
