// from server: 48% by colin
struct DomResourceIcon;

struct IconHandle {
    const DomResourceIcon* m_domIcon;
    int compare(const IconHandle& rhs) const;
};

extern "C" int __stdcall sub_724390(unsigned short idx);

int IconHandle::compare(const IconHandle& rhs) const
{
    unsigned short counts[15];
    int i;
    unsigned short carry = 0;
    for (i = 1; i <= 14; ++i) {
        unsigned short v = *(unsigned short*)((const char*)this + i * 2 + 2);
        v = (unsigned short)(v + carry);
        v = (unsigned short)(v + v);
        carry = v;
        counts[i] = carry;
    }
    int n = *(int*)((const char*)this + 4);
    int j = 0;
    if (n >= 0) {
        do {
            unsigned short t = *(unsigned short*)((const char*)&rhs + j * 4 + 2);
            if (t != 0) {
                unsigned short c = counts[t];
                counts[t] = (unsigned short)(c + 1);
                *(unsigned short*)((char*)this + j * 4) = (unsigned short)sub_724390(c);
            }
            ++j;
        } while (j <= n);
    }
    return 0;
}
