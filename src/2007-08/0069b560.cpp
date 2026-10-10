// from server: 36% by colin
// roc 2007-08 0069b560  unit: CXTPPropertyGridView  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069b560

struct CXTPPropertyGridView {
    void sub_69B560();
};

extern "C" void __stdcall sub_630490(void*, void*);
extern "C" void __stdcall sub_680000(void*, void*);
extern "C" void __stdcall sub_680060(void*, void*, void*);
extern "C" void __stdcall sub_680430(void*);
extern "C" void __stdcall sub_63048A(void*);
extern "C" void __stdcall sub_630A1E(void);
extern "C" void __stdcall sub_62FDE2(void*, int, void*, int);
extern "C" void* __stdcall sub_69AB30(void*);

void CXTPPropertyGridView::sub_69B560()
{
    char buf1[0x40];
    char buf2[0x40];
    void* p1;
    void* p2;
    void* p3;

    sub_630490(buf1, this);
    sub_680000(buf2, this);
    sub_680060(&p1, buf1, &p2);
    void* p = sub_69AB30(this);
    void* vtbl = *(void**)p;
    void* fn = *(void**)((char*)vtbl + 0x14);
    ((void (__stdcall*)(void*, void*))fn)(p, &p3);
    sub_62FDE2(this, 0xf, p3, 0);
    sub_680430(&p3);
    sub_63048A(buf1);
}
