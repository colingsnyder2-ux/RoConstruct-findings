// from server: 77% by atomic.potato
typedef unsigned char Boolean;

struct S
{
    void* value;
    void* field0;
    void* field1;
    void* field2;
};

extern "C" void* __cdecl sub_5d40e0(S*);
extern "C" Boolean __cdecl sub_6c8100(void*, void*);

void* __cdecl function_005d41e0(S* object)
{
    void* value = object->field2;
    void* argument = sub_5d40e0(object);
    if (sub_6c8100(value, argument))
        return (char*)object - 0x1c;
    return 0;
}
