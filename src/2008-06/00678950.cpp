// from server: 68% by king_originala
extern "C" int (__cdecl *memmove_s)(void *, unsigned int, const void *, unsigned int);

void __cdecl insertion_sort(float *first, float *last)
{
    if (first != last)
    {
        float *current = first + 1;
        for (; current != last; ++current)
        {
            float value = *current;
            float *hole = current;

            if (*first > value)
            {
                int count = current - first;
                if (count > 0)
                    memmove_s(current + 1 - count, count * sizeof(float),
                              first, count * sizeof(float));
                *first = value;
            }
            else
            {
                float *previous = current - 1;
                while (*previous > value)
                {
                    *hole = *previous;
                    hole = previous;
                    --previous;
                }
                *hole = value;
            }
        }
    }
}
