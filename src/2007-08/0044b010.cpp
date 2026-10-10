// from server: 29% by colin
struct ErrorUploader_data {
    void* dummy;
};

struct ErrorUploader {
    void* _data;
    ErrorUploader();
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __cdecl sub_4489E0();
extern "C" void __cdecl sub_44AEC0();
extern "C" void __cdecl sub_428C90();

ErrorUploader::ErrorUploader()
{
    ErrorUploader_data* p = (ErrorUploader_data*)operator_new(0xc);
    if (p == 0) {
        *(void**)((char*)p + 0) = 0;
        *(void**)((char*)p + 4) = 0;
        *(void**)((char*)p + 8) = 0;
        sub_4489E0();
        sub_44AEC0();
    }
    sub_428C90();
    _data = p;
}
