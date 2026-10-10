// from server: 19% by colin
struct CXTPPropExchangeEnumerator {
    int unknown0;
    void* unknown4;
    unsigned int unknown8;
    unsigned int unknownC;
    int GetNext(void* pArg);
};

extern "C" {
    void __stdcall sub_77ddac(void* p);
    void* __stdcall sub_77dd98(void* p);
    void __stdcall sub_77dd94(void* p, const char* fmt, void* arg);
    void __stdcall sub_77ddbc(void* p);
}

int CXTPPropExchangeEnumerator::GetNext(void* pArg) {
    int* pIndex = (int*)pArg;
    char buf[16];
    void* pStr;
    int result;

    sub_77ddac(buf);
    sub_77dd98((char*)this + 8);
    sub_77dd94(buf, "%s%i", (void*)(*pIndex - 1));
    pStr = sub_77dd98(buf);
    result = ((int (__thiscall*)(void*, void*))((*(void***)this->unknown4)[0x70/4]))(this->unknown4, pStr);
    (*pIndex)++;
    if ((unsigned int)*pIndex > this->unknownC) {
        *pIndex = 0;
    }
    sub_77ddbc(buf);
    return result;
}
