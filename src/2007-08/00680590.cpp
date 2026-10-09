// from server: 96% by colin
// roc 2007-08 00680590  unit: CXTPBitmapDC  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00680590
//
// 00680590  8b442404             mov eax, dword ptr [esp + 4]
// 00680594  56                   push esi
// 00680595  8bf1                 mov esi, ecx
// 00680597  894604               mov dword ptr [esi + 4], eax
// 0068059a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0068059e  85c0                 test eax, eax
// 006805a0  c706d8ec7c00         mov dword ptr [esi], 0x7cecd8
// 006805a6  c7460800000000       mov dword ptr [esi + 8], 0
// 006805ad  c7460cffffffff       mov dword ptr [esi + 0xc], 0xffffffff
// 006805b4  7406                 je 0x6805bc
// 006805b6  50                   push eax
// 006805b7  e834edffff           call 0x67f2f0
// 006805bc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006805c0  51                   push ecx
// 006805c1  8bce                 mov ecx, esi
// 006805c3  e858edffff           call 0x67f320
// 006805c8  8bc6                 mov eax, esi
// 006805ca  5e                   pop esi
// 006805cb  c20c00               ret 0xc

struct CXTPBitmapDC {
    void* m_vtable;
    int m_field4;
    int m_field8;
    int m_fieldC;
    CXTPBitmapDC* Construct(int a, int b, int c);
};

extern "C" void __stdcall sub_67F2F0(int);
extern "C" void __stdcall sub_67F320(int);

CXTPBitmapDC* CXTPBitmapDC::Construct(int a, int b, int c) {
    m_field4 = a;
    m_vtable = (void*)0x7CECD8;
    m_field8 = 0;
    m_fieldC = -1;
    if (b != 0) {
        sub_67F2F0(b);
    }
    sub_67F320(c);
    return this;
}
