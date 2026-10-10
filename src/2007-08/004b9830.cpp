// from server: 70% by colin
struct RakPeer {
    int m_refs[4];
};

void __cdecl f(int a1)
{
    int* p = (int*)(a1 + 8);
    unsigned int i = 0;
    do {
        int c = p[-2];
        if (c != 0) {
            p[-2] = c - 1;
            if (c - 1 != 0)
                break;
        }
        c = p[-1];
        if (c != 0) {
            p[-1] = c - 1;
            if (c - 1 != 0)
                break;
        }
        c = p[0];
        if (c != 0) {
            p[0] = c - 1;
            if (c - 1 != 0)
                break;
        }
        c = p[1];
        if (c != 0) {
            p[1] = c - 1;
            if (c - 1 != 0)
                break;
        }
        i += 4;
        p += 4;
    } while (i < 16);
}
