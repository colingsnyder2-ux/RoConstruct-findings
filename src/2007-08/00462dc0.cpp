// from server: 31% by colin
struct CInstanceExplorer {
    char pad[0x190];
    void construct();
};

extern "C" void __stdcall sub_430DD0(void*);
extern "C" void __stdcall sub_6902A0(void*);
extern "C" void __stdcall sub_630412(void*);

void CInstanceExplorer::construct()
{
    *(void**)this = (void*)0x795754;
    sub_430DD0((char*)this + 0x190);
    sub_6902A0((char*)this + 0x74);
    sub_630412(this);
}
