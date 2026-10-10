// from server: 57% by atomic.potato
extern "C" void std_string_copy(void*, const void*);

struct CWebToolbox
{
    char pad[0xcb0];
    void* field_cb0;
    void func_004b0fe0(const void*);
};

void CWebToolbox::func_004b0fe0(const void* arg)
{
    std_string_copy((char*)this + 0xcb0, arg);
}
