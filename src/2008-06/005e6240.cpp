// from server: 82% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Clump
{
    char reserved0[0x24];
    unsigned int value;
    char reserved1[0x0C];
    Clump** first;
    Clump** last;

    void setValue(unsigned int newValue);
};

void Clump::setValue(unsigned int newValue)
{
    value = newValue;
    for (unsigned int i = 0; i < (unsigned int)(last - first); ++i)
    {
        if (i >= (unsigned int)(last - first))
            invalid_parameter_noinfo();
        first[i]->setValue(newValue);
    }
}
