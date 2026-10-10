// from server: 76% by atomic.potato
extern "C" void sub_005400e0(float* result, int index);

struct CoreGuiService_006474c0
{
    int m_data[50];
    void* f(void* value);
};

void* CoreGuiService_006474c0::f(void* value)
{
    sub_005400e0((float*)value, 0);
    return value;
}
