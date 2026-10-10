// from server: 57% by colin
struct CXTPGraphicBitmapPng {
    char pad[0x64];
    int m_nField64;
    char pad2[0x10];
    int m_nField78;
    int m_nField7c;
    char pad3[0x40];
    int m_nFieldC0;
    int m_nFieldC4;
    int m_nFieldC8;
    int m_nFieldCC;
    int m_nFieldD0;
    int m_nFieldD4;
    CXTPGraphicBitmapPng();
};

extern "C" void __fastcall sub_6305DA(void*);
extern "C" void __fastcall sub_7383E2(void*);
extern "C" void __fastcall sub_6F2600(void*, int);
extern "C" void* __fastcall sub_6B3010();

CXTPGraphicBitmapPng::CXTPGraphicBitmapPng()
{
    sub_6305DA(this);
    m_nField64 = 0;
    *(int*)this = 0x7db6ec;
    sub_7383E2((char*)this + 0x68);
    sub_6F2600((char*)this + 0x80, 10);
    sub_6F2600((char*)this + 0x9c, 10);
    m_nField78 = 0;
    m_nField7c = 0;
    m_nFieldC0 = 0;
    m_nFieldC4 = 0;

    void* obj = sub_6B3010();
    m_nFieldC8 = ((int (__fastcall*)(void*, int))((*(int**)obj)[5]))(obj, 0x2396);

    obj = sub_6B3010();
    m_nFieldCC = ((int (__fastcall*)(void*, int))((*(int**)obj)[5]))(obj, 0x2398);

    obj = sub_6B3010();
    m_nFieldD0 = ((int (__fastcall*)(void*, int))((*(int**)obj)[5]))(obj, 0x2399);

    obj = sub_6B3010();
    m_nFieldD4 = ((int (__fastcall*)(void*, int))((*(int**)obj)[5]))(obj, 0x2397);
}
