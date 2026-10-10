// from server: 83% by tester
struct CXTPPropExchangeXMLNode {
    int __thiscall ExchangeArchive(void* pArchive);
    int __thiscall Exchange(void* pArchive);
};

extern "C" int __stdcall sub_6319A0(int hr);

int CXTPPropExchangeXMLNode::ExchangeArchive(void* pArchive)
{
    int* p = (int*)pArchive;
    int* obj = (int*)*p;
    int* local = obj;
    if (obj) {
        int* vtbl = (int*)*obj;
        void (__stdcall *fn)(int*) = (void (__stdcall *)(int*))vtbl[1];
        fn(obj);
    }
    int hr = Exchange(&local);
    if (hr < 0 && hr != (int)0x80004002) {
        sub_6319A0(hr);
    }
    return (int)this;
}
