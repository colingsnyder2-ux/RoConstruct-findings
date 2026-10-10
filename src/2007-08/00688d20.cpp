// from server: 76% by colin
struct CXTPPropExchangeXMLNode_CXMLEnumerator
{
    void* field_0;
    void* field_4;
    int method_687a70(void*);

    int method_688d20(void* arg);
};

extern "C" int __stdcall sub_6319a0(int);

int CXTPPropExchangeXMLNode_CXMLEnumerator::method_688d20(void* arg)
{
    void* p = *(void**)arg;
    if (p != 0)
    {
        void** vtbl = *(void***)p;
        void (*fn)(void*) = (void (*)(void*))vtbl[1];
        fn(p);
    }
    int hr = this->method_687a70(&p);
    if (hr < 0 && hr != (int)0x80004002)
    {
        sub_6319a0(hr);
    }
    return (int)this;
}
