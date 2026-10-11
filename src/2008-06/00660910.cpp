// from server: 49% by colin
struct FilterStairs {
    char pad[0x30];
    int field30;
    int field34;
    void __cdecl addLocal(int* value);
};

extern "C" int __cdecl sub_660740(int a, int b, int c, int d, int e, int f);
extern "C" void __cdecl sub_65C480(int a, int b, int c);

void FilterStairs::addLocal(int* value)
{
    int* base = (int*)field30;
    int count = *(short*)((char*)base + 0x30);
    int* vec = (int*)*base;
    int* end = (int*)((char*)vec + 0x38);
    int size = *(int*)((char*)vec + 0x38);
    int i = count + 1;
    if (i > size)
    {
        int* data = *(int**)((char*)vec + 0x18);
        int* newData = (int*)sub_660740(field34, (int)data, (int)end, 0xc, 0x7fff, 0x84c548);
        *(int**)((char*)vec + 0x18) = newData;
    }
    if (size < *end)
    {
        int* data = *(int**)((char*)vec + 0x18);
        int idx = size;
        do
        {
            *(int*)((char*)data + idx * 0xc) = 0;
            idx++;
        } while (idx < *end);
    }
    int* data = *(int**)((char*)vec + 0x18);
    int idx = count;
    *(int*)((char*)data + idx * 0xc) = (int)value;
    if ((*(unsigned char*)((char*)value + 5) & 3) != 0)
    {
        if ((*(unsigned char*)((char*)vec + 5) & 4) != 0)
        {
            sub_65C480(field34, (int)vec, (int)value);
        }
    }
    unsigned short newCount = (unsigned short)(count + 1);
    *(short*)((char*)base + 0x30) = newCount;
}
