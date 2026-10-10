// from server: 51% by tester
extern "C" {
    void __stdcall EnterCriticalSection(void*);
    void __stdcall LeaveCriticalSection(void*);
    unsigned long __stdcall GetCurrentThreadId();
    void __stdcall RaiseException(unsigned long, unsigned long, unsigned long, const unsigned long*);
}

struct FunctionMarshaller {
    char pad0[0x1c];
    void* field_1c;
};

void __stdcall func_004251d0(FunctionMarshaller* self, void** out, void* arg);
void __stdcall func_004251d0(FunctionMarshaller* self, void** out, void* arg)
{
    if (self == 0) {
        unsigned long args[1];
        args[0] = 0;
        RaiseException(0xc0000005, 1, 2, args);
    }
    if (out == 0 || arg == 0) {
        unsigned long args[1];
        args[0] = 0;
        RaiseException(0xc0000005, 1, 2, args);
        return;
    }
    *out = arg;
    out[1] = (void*)GetCurrentThreadId();
    void** slot = (void**)((char*)self + 4);
    EnterCriticalSection(slot);
    out[2] = self->field_1c;
    self->field_1c = out;
    LeaveCriticalSection(slot);
}
