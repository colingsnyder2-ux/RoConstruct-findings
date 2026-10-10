// from server: 62% by colin
struct CXTPCustomizeSheet {
    char pad[0xb4];
    void* m_pB4;
    void* m_pB8;
    int m_n20;
    int OnNotify(unsigned int code, void* pNotify);
};

extern "C" void* __stdcall GetForegroundWindow();
extern "C" void* __stdcall GetParent(void*);

void* __fastcall sub_633900(void* p);
int __fastcall sub_6A3940(void* p, int n);
void* __fastcall sub_6301C0(void* p);
void* __fastcall sub_643630();
int __fastcall sub_6301F0(void* p, void* q);
int __fastcall sub_643980(void* p);
void __fastcall sub_6A3C30(void* p, int a, int b, int c);
int __fastcall sub_738412(void* p);
int __fastcall sub_673660(void* p);
void __fastcall sub_630004(void* p);
void* __fastcall sub_40EB70(void* p);

int CXTPCustomizeSheet::OnNotify(unsigned int code, void* pNotify)
{
    if (code == 0x200 || code == 0xa0)
        return 1;

    void* pB8 = this->m_pB8;
    void* p = sub_633900(pB8);
    int r = sub_6A3940(p, 0);

    if (r != 0) {
        void* pNotify8 = *(void**)((char*)pNotify + 8);
        void* q = sub_6301C0(pNotify8);
        void* r2 = sub_643630();
        int r3 = sub_6301F0(q, r2);
        if (r3 != 0) {
            int r4 = sub_643980(q);
            if (r4 == 0)
                return 1;
        }
        if (q != 0) {
            void* hwnd = *(void**)((char*)q + 0x20);
            void* parent = GetParent(hwnd);
            void* q2 = sub_6301C0(parent);
            if (q2 != 0) {
                void* r5 = sub_643630();
                int r6 = sub_6301F0(q2, r5);
                if (r6 != 0) {
                    int r7 = sub_643980(q2);
                    if (r7 == 0)
                        return 1;
                }
            }
        }
        int a = *(int*)((char*)pNotify + 4);
        int b = *(int*)pNotify;
        int c = *(int*)((char*)this + 0x14);
        sub_6A3C30(p, c, b, a);
    }

    void* pB4 = this->m_pB4;
    int r8 = sub_738412(pB4);

    if (r8 < 0) {
        GetForegroundWindow();
        void* pB4b = this->m_pB4;
        void* edi = *(void**)((char*)pB4b + 0x20);
        int r9 = sub_673660(edi);
        if (r9 == 0) {
            sub_630004(this);
        }
    }

    void* pB4c = this->m_pB4;
    void* edi2 = *(void**)((char*)pB4c + 0x20);
    int r10 = sub_673660(edi2);
    if (r10 == 0)
        return 1;

    void* edi3 = *(void**)((char*)this + 0x20);
    int r11 = sub_673660(edi3);
    if (r11 != 0)
        return 1;

    void* r12 = GetForegroundWindow();
    if (r12 != 0) {
        void* r13 = GetForegroundWindow();
        void* edi4 = r13;
        int r14 = sub_673660(edi4);
        if (r14 != 0)
            return 1;
    }

    void* pNotify8e = *(void**)((char*)pNotify + 8);
    void* q3 = sub_6301C0(pNotify8e);
    if (q3 != 0) {
        void* edi5 = sub_40EB70(q3);
        void* r15 = sub_643630();
        int r16 = sub_6301F0(q3, r15);
        if (r16 != 0) {
            int r17 = sub_643980(q3);
            return r17 == (int)this->m_pB8;
        }
        if (edi5 != 0) {
            void* r18 = sub_643630();
            int r19 = sub_6301F0(edi5, r18);
            if (r19 != 0) {
                int r20 = sub_643980(edi5);
                return r20 == (int)this->m_pB8;
            }
        }
    }
    return 0;
}
