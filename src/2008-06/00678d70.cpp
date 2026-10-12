// from server: 55% by king_originala
extern void __cdecl helper_678780(float*, int, int, float);

void __cdecl function_678d70(float* first, float* last)
{
    int bytes = reinterpret_cast<char*>(last) - reinterpret_cast<char*>(first);
    while ((bytes >> 2) > 1)
    {
        float* tail = reinterpret_cast<float*>(
            reinterpret_cast<char*>(first) + bytes - 4);
        float value = *tail;
        *tail = *first;
        helper_678780(first, 0, (bytes - 4) >> 2, value);
        bytes -= 4;
    }
}
