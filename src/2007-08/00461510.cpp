// from server: 47% by colin
extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" int __stdcall sub_433140(void* p, int v);
extern "C" int __stdcall sub_460d60(void* p, void* a, void* b);
extern "C" int __stdcall sub_464ec0(void* p, void* a);

struct MarshaledListener {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void method(void* a, void* b, void* c);
};

void MarshaledListener::method(void* a, void* b, void* c)
{
    void* mem = operator_new(0x18);
    int result;
    if (mem) {
        result = sub_460d60(mem, this, a);
    } else {
        result = 0;
    }
    sub_464ec0((char*)this + 4, &result);
    sub_433140(this->field18, result);
}
