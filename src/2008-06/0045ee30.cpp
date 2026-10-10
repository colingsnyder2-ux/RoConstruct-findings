// from server: 60% by atomic.potato
struct S
{
    char field[0x158];
};

extern "C" void* __cdecl sub_45edb0(void* object, void* value);
extern "C" void __cdecl sub_5c8fa0(S* object, void* value);

void function_0045ee30(S* object)
{
    char buffer[80];
    sub_45edb0(object->field + 0x158, buffer);
    sub_5c8fa0(object, buffer);
}
