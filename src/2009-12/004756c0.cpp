// from server: 66% by atomic.potato
extern "C" char* std_string_myptr(void*);
extern "C" void __cdecl invalid_parameter_noinfo();

struct DxUserInput_004756c0 {
    int m_value;
    unsigned int m_count;
    int f();
};

void* g_string_object;
void (*g_invalid_parameter_noinfo)();

int DxUserInput_004756c0::f()
{
    if (m_value != -4) {
        if (m_value == 0)
            invalid_parameter_noinfo();

        int value = (int)std_string_myptr((void*)m_value);
        value += *(int*)((char*)m_value + 20);

        if (m_count >= (unsigned int)value)
            invalid_parameter_noinfo();
    }

    ++m_count;
    return (int)this;
}
