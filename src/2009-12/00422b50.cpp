// from server: 60% by atomic.potato
extern "C" unsigned long __stdcall GetLastError();

extern "C" int __stdcall sub_402b80(unsigned long);

int __stdcall sub_422b50()
{
    unsigned long result = GetLastError();
    if ((long)result > 0)
        result = (result & 0xffffUL) | 0x80070000UL;
    return sub_402b80(result);
}
