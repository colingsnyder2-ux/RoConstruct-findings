// from server: 82% by atomic.potato
extern "C" int __stdcall sub_7F4AAA(void*, void*, void*, void*, void*);

int __stdcall RBX_ForceField_isA(void* value)
{
    return sub_7F4AAA(value, (void*)0xAFFE40, (void*)0xB352DC, 0, 0) != 0;
}
