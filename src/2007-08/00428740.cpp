// from server: 33% by colin
struct COleException {
    int m_nSize;
    int Append(int n);
};

extern "C" void __stdcall sub_77E698(void*);
extern "C" void __cdecl sub_4024C0(void*, void*);
extern "C" void __cdecl sub_630B9E(void*, void*);

int COleException::Append(int n)
{
    int result = 0xCCCCCC - this->m_nSize;
    if (result < (unsigned int)n) {
        sub_77E698((void*)0x78598C);
        sub_4024C0((void*)0, (void*)0);
        sub_630B9E((void*)0x83F778, (void*)0);
    }
    this->m_nSize += n;
    return this->m_nSize;
}
