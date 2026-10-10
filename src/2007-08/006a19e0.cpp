// from server: 27% by colin
struct CXTPDockBar_UDOCK_INFO_CArray {
    void* operator new(unsigned int);
    void Construct();
    void* Alloc();
};

void* CXTPDockBar_UDOCK_INFO_CArray::Alloc()
{
    return operator new(0x70);
}

void CXTPDockBar_UDOCK_INFO_CArray::Construct()
{
    void* p = Alloc();
    if (p) {
        CXTPDockBar_UDOCK_INFO_CArray* obj = (CXTPDockBar_UDOCK_INFO_CArray*)p;
        obj->Construct();
    }
}
