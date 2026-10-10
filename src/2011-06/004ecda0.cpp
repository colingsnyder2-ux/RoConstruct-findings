// from server: 94% by atomic.potato
typedef unsigned int size_type;

void reverse_copy(char* dst, const char* src, size_type count)
{
    size_type i = 0;
    for (; i < count; ++i)
        dst[i] = src[count - i - 1];
}
