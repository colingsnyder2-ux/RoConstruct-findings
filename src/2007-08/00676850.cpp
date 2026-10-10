// from server: 66% by colin
struct PAUXTP_COMMANDBARS_CATEGORYINFO_CArray
{
    char pad[0x140];
    int* data;
    int size;
    int find(const char* name);
};

extern "C" int __stdcall sub_77DCB8(int a, const char* b);
extern "C" void __cdecl sub_62FF20();

int PAUXTP_COMMANDBARS_CATEGORYINFO_CArray::find(const char* name)
{
    int i = 0;
    if (size > 0)
    {
        do
        {
            if (i < 0 || i >= size)
                sub_62FF20();
            if (sub_77DCB8(data[i], name) == 0)
            {
                if (i >= size)
                    sub_62FF20();
                return data[i];
            }
            ++i;
        } while (i < size);
    }
    return 0;
}
