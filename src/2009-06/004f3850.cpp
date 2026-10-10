// from server: 66% by why2
struct RBX_Reflection_EventSource {
    char pad[0x10];
    void* field_0x10;
    void func_004f3850();
};

extern "C" void __cdecl func_00474dc0(void*);

void RBX_Reflection_EventSource::func_004f3850()
{
    void* p = this->field_0x10;
    if (p != 0)
    {
        func_00474dc0((void*)0x474d50);
    }
}
