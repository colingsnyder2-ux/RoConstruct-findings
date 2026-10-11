// from server: 70% by colin
// roc 2008-06 006456e0  unit: RBX::RigidJoint  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006456e0
//
// 006456e0  53                   push ebx
// 006456e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006456e5  55                   push ebp
// 006456e6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006456ea  56                   push esi
// 006456eb  8bf1                 mov esi, ecx
// 006456ed  3b6c9e0c             cmp ebp, dword ptr [esi + ebx*4 + 0xc]
// 006456f1  7453                 je 0x645746
// 006456f3  837e0400             cmp dword ptr [esi + 4], 0
// 006456f7  57                   push edi
// 006456f8  7504                 jne 0x6456fe
// 006456fa  33ff                 xor edi, edi
// 006456fc  eb2d                 jmp 0x64572b
// 006456fe  8b4e04               mov ecx, dword ptr [esi + 4]
// 00645701  8b01                 mov eax, dword ptr [ecx]
// 00645703  8b5004               mov edx, dword ptr [eax + 4]
// 00645706  ffd2                 call edx
// 00645708  83f807               cmp eax, 7
// 0064570b  8b4604               mov eax, dword ptr [esi + 4]
// 0064570e  7503                 jne 0x645713
// 00645710  8b4004               mov eax, dword ptr [eax + 4]
// 00645713  8b780c               mov edi, dword ptr [eax + 0xc]
// 00645716  85ff                 test edi, edi
// 00645718  7411                 je 0x64572b
// 0064571a  8b449e0c             mov eax, dword ptr [esi + ebx*4 + 0xc]
// 0064571e  85c0                 test eax, eax
// 00645720  7409                 je 0x64572b
// 00645722  50                   push eax
// 00645723  56                   push esi
// 00645724  8bcf                 mov ecx, edi
// 00645726  e8153bfaff           call 0x5e9240
// 0064572b  55                   push ebp
// 0064572c  53                   push ebx
// 0064572d  8bce                 mov ecx, esi
// 0064572f  e85c3b0100           call 0x659290
// 00645734  85ff                 test edi, edi
// 00645736  740d                 je 0x645745
// 00645738  85ed                 test ebp, ebp
// 0064573a  7409                 je 0x645745
// 0064573c  55                   push ebp
// 0064573d  56                   push esi
// 0064573e  8bcf                 mov ecx, edi
// 00645740  e80b3bfaff           call 0x5e9250
// 00645745  5f                   pop edi
// 00645746  5e                   pop esi
// 00645747  5d                   pop ebp
// 00645748  5b                   pop ebx
// 00645749  c20800               ret 8

struct P_func_005e9240 { void g(); };
struct P_func_005e9250 { void g(); };

struct S_func_005e9240 {
    char pad[136];
    P_func_005e9240* m_p;
    void f();
};

struct S_func_005e9250 {
    char pad[136];
    P_func_005e9250* m_p;
    void f();
};

struct Joint {
    char pad0[4];
    void* m_p;
    char pad8[4];
    void* m_slot[2];
    void removeJoint(int, void*);
    void setPrimitive(int, void*);
};

void Joint::removeJoint(int a, void* b)
{
    if (b == m_slot[a])
        return;
    void* edi = 0;
    if (m_p) {
        void* p = m_p;
        int t = ((int (__thiscall*)(void*))((*(void***)p)[1]))(p);
        void* q;
        if (t == 7)
            q = ((void**)m_p)[1];
        else
            q = m_p;
        edi = ((void**)q)[3];
        if (edi) {
            void* s = m_slot[a];
            if (s) {
                ((S_func_005e9240*)edi)->m_p->g();
            }
        }
    }
    setPrimitive(a, b);
    if (edi) {
        if (b) {
            ((S_func_005e9250*)edi)->m_p->g();
        }
    }
}
