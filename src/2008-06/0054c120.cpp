// from server: 32% by atomic.potato
extern "C" int sub_004dc410(void *);
extern "C" void __cdecl invalid_parameter_noinfo(void);

struct Mesh
{
    int *data;
    int f(unsigned int index);
};

int Mesh::f(unsigned int index)
{
    if (index >= (unsigned int)sub_004dc410(this))
        invalid_parameter_noinfo();
    return (int)((char *)data + index * 12);
}
