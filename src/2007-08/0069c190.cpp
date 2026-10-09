// from server: 87% by colin
// roc 2007-08 0069c190  unit: CXTPPropertyGridView  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069c190
//
// 0069c190  8b442404             mov eax, dword ptr [esp + 4]
// 0069c194  83f828               cmp eax, 0x28
// 0069c197  56                   push esi
// 0069c198  8bf1                 mov esi, ecx
// 0069c19a  7405                 je 0x69c1a1
// 0069c19c  83f826               cmp eax, 0x26
// 0069c19f  752d                 jne 0x69c1ce
// 0069c1a1  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0069c1a7  85c9                 test ecx, ecx
// 0069c1a9  7423                 je 0x69c1ce
// 0069c1ab  6a65                 push 0x65
// 0069c1ad  e82ebbffff           call 0x697ce0
// 0069c1b2  8bc8                 mov ecx, eax
// 0069c1b4  e8c79c0500           call 0x6f5e80
// 0069c1b9  85c0                 test eax, eax
// 0069c1bb  7411                 je 0x69c1ce
// 0069c1bd  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0069c1c3  8b11                 mov edx, dword ptr [ecx]
// 0069c1c5  50                   push eax
// 0069c1c6  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 0069c1cc  ffd0                 call eax
// 0069c1ce  8bce                 mov ecx, esi
// 0069c1d0  e86940f9ff           call 0x63023e
// 0069c1d5  5e                   pop esi
// 0069c1d6  c20c00               ret 0xc

struct CXTPPropertyGridView {
    char pad[0xe0];
    void* field_e0;
    void OnKeyDown(unsigned int nChar, unsigned int nRepCnt, unsigned int nFlags);
};

extern "C" void* __stdcall sub_697CE0(void* p, int n);
extern "C" void* __stdcall sub_6F5E80(void* p);
extern "C" void __stdcall sub_63023E(void* p);

void CXTPPropertyGridView::OnKeyDown(unsigned int nChar, unsigned int nRepCnt, unsigned int nFlags)
{
    if (nChar == 0x28 || nChar == 0x26)
    {
        void* p = field_e0;
        if (p != 0)
        {
            void* q = sub_697CE0(p, 0x65);
            void* r = sub_6F5E80(q);
            if (r != 0)
            {
                void* s = field_e0;
                void** vtbl = *(void***)s;
                void (__stdcall *fn)(void*, void*) = (void (__stdcall *)(void*, void*))vtbl[0xd0 / 4];
                fn(s, r);
            }
        }
    }
    sub_63023E(this);
}
