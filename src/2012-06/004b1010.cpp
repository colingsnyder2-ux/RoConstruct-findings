// from server: 70% by atomic.potato
typedef void* StringObject;

extern "C" void __stdcall std_string_copy(StringObject* destination, const StringObject* source);

struct CWebToolbox
{
    char pad[0x84];
    StringObject field_84;
    StringObject* func_004b1010(StringObject* source);
};

StringObject* CWebToolbox::func_004b1010(StringObject* source)
{
    StringObject* result = source;
    StringObject* destination = &field_84;
    std_string_copy(destination, source);
    return result;
}
