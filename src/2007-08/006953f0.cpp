// from server: 58% by colin
struct CArray {
    char pad0[4];
    void* field4;
    void* field8;
    char padc[0x10];
    void* field1c;
    char pad20[4];
    void* field24;
};

extern "C" void __cdecl func_630b8c(void*, int, unsigned int);
extern "C" void* __cdecl func_6301c0(void*);
extern "C" void __cdecl func_630a1e(void);
extern "C" void __cdecl func_67f490(void*);

extern "C" void* __stdcall func_77dd6c(void*, void*);
extern "C" void* __stdcall func_77dd74(void*, void*);
extern "C" void* __stdcall func_77ebf8(void*);
extern "C" void* __stdcall func_77ecd8(void*, unsigned int, void*, void*);

extern unsigned int g_8b5188;

struct CXTPToolTipContextToolTip2 {
    char pad0[0x20];
    void* field20;
    char pad24[0x18];
    void* field3c;
    char pad40[0x2c];
    void* field6c;
    void func(CArray* pArray, void* pParam);
};

void CXTPToolTipContextToolTip2::func(CArray* pArray, void* pParam)
{
    char buffer[0x68];
    void* local14;
    void* local18;
    int local1c;
    void* local74;
    void* local84;
    void* pParent;
    void* pMsg;

    if (pArray->field4 != 0)
    {
        void* ebx = pArray->field24;
        func_630b8c(buffer, 0, 0x68);
        void* ecx_val = pArray->field8;
        void* eax_val = this->field20;
        void* edx_val = pArray->field1c;
        local84 = ecx_val;
        void* ecx2 = this->field3c;
        local14 = eax_val;
        local18 = ebx;
        local1c = 0xfffffdf8;
        local74 = edx_val;
        if (ecx2 != 0)
        {
            pParent = ecx2;
        }
        else
        {
            pParent = func_77ebf8(eax_val);
        }
        pMsg = func_6301c0(pParent);
        void* edx2 = *(void**)((char*)pMsg + 0x20);
        func_77ecd8(edx2, 0x4e, ebx, &local14);
        func_77dd6c(pArray, &local1c);
        void* ecx3 = this->field6c;
        if ((*(unsigned char*)((char*)ecx3 + 0x3c) & 2) == 0)
        {
            func_67f490(pArray);
        }
        pArray->field4 = 0;
    }
    func_77dd74(pParam, pArray);
}
