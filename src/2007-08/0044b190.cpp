// from server: 31% by colin
struct ErrorUploader_data;

struct ErrorUploader {
    void* _data;
    ErrorUploader();
};

extern "C" void __cdecl sub_44B010(void*);
extern "C" void __cdecl sub_630D23(void*);

ErrorUploader::ErrorUploader()
{
    static char initFlag;
    if (!(initFlag & 1)) {
        initFlag |= 1;
        sub_44B010(&_data);
        sub_630D23((void*)0x777d10);
    }
    _data = (void*)0x8bbea4;
}
