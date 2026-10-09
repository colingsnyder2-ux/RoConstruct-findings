// from server: 80% by colin
// roc 2007-08 005de130  unit: seg_005de000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005de130

void __cdecl sub_5DE130(int* first, int len, int value)
{
    int hole = (len - 1) / 2;
    if (hole < len) {
        do {
            int parent = first[hole];
            if (parent >= value)
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
