// from server: 90% by colin
// roc 2007-08 00637130  unit: CPatchedControlComboBox  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637130
//
// 00637130  56                   push esi
// 00637131  57                   push edi
// 00637132  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00637136  8bf1                 mov esi, ecx
// 00637138  3bbefc000000         cmp edi, dword ptr [esi + 0xfc]
// 0063713e  7429                 je 0x637169
// 00637140  85ff                 test edi, edi
// 00637142  7429                 je 0x63716d
// 00637144  8bcf                 mov ecx, edi
// 00637146  e825f40000           call 0x646570
// 0063714b  85c0                 test eax, eax
// 0063714d  741a                 je 0x637169
// 0063714f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00637152  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 00637158  85c0                 test eax, eax
// 0063715a  7403                 je 0x63715f
// 0063715c  8b4020               mov eax, dword ptr [eax + 0x20]
// 0063715f  51                   push ecx
// 00637160  6af8                 push -8
// 00637162  50                   push eax
// 00637163  ff1518ec7700         call dword ptr [0x77ec18]
// 00637169  85ff                 test edi, edi
// 0063716b  7517                 jne 0x637184
// 0063716d  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00637173  85c9                 test ecx, ecx
// 00637175  740d                 je 0x637184
// 00637177  83792000             cmp dword ptr [ecx + 0x20], 0
// 0063717b  7407                 je 0x637184
// 0063717d  8b01                 mov eax, dword ptr [ecx]
// 0063717f  8b5068               mov edx, dword ptr [eax + 0x68]
// 00637182  ffd2                 call edx
// 00637184  89befc000000         mov dword ptr [esi + 0xfc], edi
// 0063718a  5f                   pop edi
// 0063718b  5e                   pop esi
// 0063718c  c20400               ret 4

struct CPatchedControlComboBox {
    char pad[0xfc];
    void* m_pSomething;
    char pad2[0x16c - 0xfc - 4];
    void* m_pSomething2;
    char pad3[0x178 - 0x16c - 4];
    void* m_pSomething3;
    void SetSomething(void* p);
};

extern "C" void* __stdcall sub_646570(void* p);
extern "C" int __stdcall SetWindowLongA(void* hWnd, int nIndex, int dwNewLong);

void CPatchedControlComboBox::SetSomething(void* p) {
    if (p != m_pSomething) {
        if (p != 0) {
            void* q = sub_646570(p);
            if (q != 0) {
                int val = *(int*)((char*)q + 0x20);
                void* r = m_pSomething2;
                if (r != 0) {
                    r = *(void**)((char*)r + 0x20);
                }
                SetWindowLongA(r, -8, val);
            }
        }
        if (p != 0) {
            void* s = m_pSomething3;
            if (s != 0 && *(void**)((char*)s + 0x20) != 0) {
                (*(void(__thiscall**)(void*))((*(int*)s) + 0x68))(s);
            }
        }
        m_pSomething = p;
    }
}
