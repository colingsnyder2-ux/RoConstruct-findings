// from server: 50% by colin
// roc 2007-08 004b0bc0  unit: RBX::Network::VReplicator::?$SignalDesc  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b0bc0

struct std_string {
    char data[0x1c];
};

extern "C" void __stdcall std_string_copy_ctor(std_string* dest, const std_string* src);
extern "C" void __stdcall std_string_dtor_call(std_string* self);

struct SignalDesc {
    void __cdecl construct(const std_string& name, int a, int b, int c, int d);
};

void SignalDesc::construct(const std_string& name, int a, int b, int c, int d)
{
    std_string local;
    std_string_copy_ctor(&local, &name);
    ((void (__thiscall*)(void*))0x4aff10)(this);
    std_string_dtor_call(&local);
}
