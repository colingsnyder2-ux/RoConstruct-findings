// from server: 81% by colin
void __cdecl sub_5DE130(int* first, int len, int value)
{
    int hole = (len - 1) / 2;
    if (hole < len) {
        do {
            int parent = first[hole];
            if ((unsigned)parent >= (unsigned)value)
                break;
            first[len] = parent;
            len = hole;
            hole = (hole - 1) / 2;
        } while (hole < len);
        first[len] = value;
    } else {
        first[len] = value;
    }
}
