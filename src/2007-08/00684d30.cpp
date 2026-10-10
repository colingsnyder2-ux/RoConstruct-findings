// from server: 89% by colin
struct CXTPPropertyGrid
{
    void SetPaintManager(void* p);
};

extern "C" void __stdcall sub_77ddbc();

void CXTPPropertyGrid::SetPaintManager(void* p)
{
    *(void**)this = (void*)0x7cf41c;
    sub_77ddbc();
}
