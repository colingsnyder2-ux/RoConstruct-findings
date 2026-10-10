// from server: 76% by colin
struct CXTPPropertyGridView__UWNDRECT__CArray {
    void InsertAt(int index, int count, int value);
};

extern "C" void __stdcall sub_62FF20();
extern "C" int __stdcall sub_630688(int, int);
extern "C" int __stdcall sub_63068E(int, int, int);
extern "C" void __stdcall sub_630694(int, int, int);

void CXTPPropertyGridView__UWNDRECT__CArray::InsertAt(int index, int count, int value)
{
    int* dest;
    int remaining;
    int chunk;
    int bytes;

    if (count != 0 && index == 0)
        sub_62FF20();

    if ((~*(unsigned char*)((char*)this + 0x18) & 1) != 0)
    {
        if (count > 0)
        {
            dest = (int*)index;
            remaining = count;
            do
            {
                chunk = remaining;
                if (remaining >= 0x6666666)
                    chunk = 0x6666666;
                bytes = chunk * 20;
                sub_630694(value, (int)dest, bytes);
                remaining -= chunk;
                dest = (int*)((char*)dest + bytes);
            } while (remaining > 0);
        }
    }
    else
    {
        if (count > 0)
        {
            dest = (int*)index;
            remaining = count;
            do
            {
                chunk = remaining;
                if (remaining >= 0x6666666)
                    chunk = 0x6666666;
                bytes = chunk * 20;
                if (sub_63068E(value, (int)dest, bytes) != bytes)
                {
                    sub_630688(3, 0);
                    break;
                }
                remaining -= chunk;
                dest = (int*)((char*)dest + bytes);
            } while (remaining > 0);
        }
    }
}
