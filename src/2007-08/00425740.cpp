// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CSelectionTreeCtrl {
    char pad[0xbc];
    int m_field_bc;
    char pad2[0x24];
    void* m_ptr_e4;
    void* m_ptr_e8;
    void SetSelection(void* p);
};

extern void __stdcall sub_40d550(void* p);
extern void* __fastcall sub_4109b0(void* p);
extern void* __fastcall sub_410d40(void* p);
extern void __fastcall sub_432530(void* p, void* q);
extern void __fastcall sub_423240(void* p, void* q);
extern void __fastcall sub_5595a0(void* p);
extern void __fastcall sub_402a60(void* p, void* q);

void CSelectionTreeCtrl::SetSelection(void* p)
{
    if (m_ptr_e4) {
        void* a = m_ptr_e4;
        void* b = m_ptr_e8;
        if (b)
            _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
        sub_40d550(&a);
        void* r = sub_4109b0(m_ptr_e4);
        if (r)
            sub_432530((char*)r + 0xe8, &m_field_bc);
        sub_5595a0(&a);
    }
    m_ptr_e4 = p;
    sub_402a60(&m_ptr_e8, &p);
    if (m_ptr_e4) {
        void* a = m_ptr_e4;
        void* b = m_ptr_e8;
        if (b)
            _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
        sub_40d550(&a);
        void* r = sub_410d40(m_ptr_e4);
        if (r)
            sub_423240((char*)r + 0xe8, &m_field_bc);
        sub_5595a0(&a);
    }
    if (p) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            void** vt = *(void***)p;
            ((void (__fastcall*)(void*))vt[1])(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                void** vt2 = *(void***)p;
                ((void (__fastcall*)(void*))vt2[2])(p);
            }
        }
    }
}
