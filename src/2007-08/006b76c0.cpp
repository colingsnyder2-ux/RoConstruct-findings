// from server: 36% by colin
struct CXTPControlGallery;

struct CXTPControlGallery {
    int sub_6B6F10(int);
    int sub_6713D0(void*);
    int sub_63B420(int, int, int, int, int);

    int sub_6B76C0(int a1, int a2, int a3, int a4, int a5);
};

struct CString {
    void* m_pData;
    void CString_ctor(void*);
    void CString_dtor();
};

extern "C" void __stdcall sub_62FF38(void*, int);
extern "C" void __stdcall sub_62FF3E(CString*, void*);

int CXTPControlGallery::sub_6B76C0(int a1, int a2, int a3, int a4, int a5)
{
    CString str;
    int local1;
    int local2;
    int local3;
    int local4;
    int local5;
    int result;

    sub_62FF3E(&str, *(void**)((char*)this - 4));

    local1 = 0;
    if (this->sub_6713D0(&local2) == 0) {
        result = this->sub_63B420(local2, local3, local4, local5, a1);
        if (str.m_pData) {
            *(int*)((char*)str.m_pData + 4) = local1;
        }
        if (local3) {
            sub_62FF38((void*)local3, 0);
        }
        return result;
    } else {
        int r = this->sub_6B6F10(a1 - 1);
        if (str.m_pData) {
            *(int*)((char*)str.m_pData + 4) = local1;
        }
        if (local3) {
            sub_62FF38((void*)local3, 0);
        }
        return 0;
    }
}
