// from server: 88% by colin
struct RakPeer
{
    int func_004bef60(int, int);
};

int RakPeer::func_004bef60(int a, int b)
{
    extern int __stdcall func_004bcb80(int, int, int, int);
    int result = func_004bcb80(a, b, 0, 0);
    if (result != 0)
    {
        unsigned short* p = (unsigned short*)(result + 0x7d4);
        int count = 0;
        int sum = 0;
        while (count < 5)
        {
            unsigned short v = *p;
            if (v == 0xffff)
                break;
            sum += v;
            count++;
            p += 4;
        }
        if (count > 0)
            return sum / count;
    }
    return -1;
}
