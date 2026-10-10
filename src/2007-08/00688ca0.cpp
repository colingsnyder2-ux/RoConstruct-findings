// from server: 31% by colin
struct CXMLEnumerator {
    void* field_10;
    void Destroy();
    ~CXMLEnumerator();
};

extern "C" void __cdecl sub_62FC62(void*);
extern "C" void __cdecl sub_684D30(void*);

void CXMLEnumerator::Destroy()
{
    if (field_10 != 0) {
        void** vtbl = *(void***)field_10;
        void (*fn)(void*) = (void (*)(void*))vtbl[2];
        fn(field_10);
    }
    sub_684D30(this);
}

CXMLEnumerator::~CXMLEnumerator()
{
    Destroy();
    sub_62FC62(this);
}
