// from server: 92% by colin
struct CRegObject {
    int FindKey(int* key, int* out);
};

int CRegObject::FindKey(int* key, int* out)
{
    int* p = out;
    if (p == 0)
        goto fail;
    int val = *p;
    if (val == 0)
        goto fail;
    {
        int* begin = (int*)*key;
        int* end = begin + key[1];
        int idx = 1;
        while (begin < end) {
            if (*begin == val)
                return idx;
            begin++;
            idx++;
        }
    }
fail:
    return 0;
}
