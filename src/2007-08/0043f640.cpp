// from server: 38% by colin
struct CSelectionPropGrid
{
    void construct(int a, int b);
};

extern "C" void __stdcall sub_43F2C0(void*, int, int);
extern "C" void __stdcall sub_77DDB8(void*);
extern "C" void __stdcall sub_698630(void*);

void CSelectionPropGrid::construct(int a, int b)
{
    sub_43F2C0(this, a, b);
    *(void**)this = (void*)0x78F184;
    *(void**)((char*)this + 0x20) = (void*)0x78F124;
    *(void**)((char*)this + 0x100) = (void*)0x78F11C;
    sub_77DDB8(0);
    sub_698630(this);
}
