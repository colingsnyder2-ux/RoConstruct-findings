// from server: 94% by colin
// roc 2007-08 006804e0  unit: CXTPBufferDC  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006804e0
//
// 006804e0  8b442404             mov eax, dword ptr [esp + 4]
// 006804e4  85c0                 test eax, eax
// 006804e6  56                   push esi
// 006804e7  8bf1                 mov esi, ecx
// 006804e9  c706e0ea7c00         mov dword ptr [esi], 0x7ceae0
// 006804ef  7403                 je 0x6804f4
// 006804f1  8b4004               mov eax, dword ptr [eax + 4]
// 006804f4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006804f8  85c9                 test ecx, ecx
// 006804fa  894604               mov dword ptr [esi + 4], eax
// 006804fd  7511                 jne 0x680510
// 006804ff  51                   push ecx
// 00680500  50                   push eax
// 00680501  ff1528d17700         call dword ptr [0x77d128]
// 00680507  894608               mov dword ptr [esi + 8], eax
// 0068050a  8bc6                 mov eax, esi
// 0068050c  5e                   pop esi
// 0068050d  c20800               ret 8
// 00680510  8b4904               mov ecx, dword ptr [ecx + 4]
// 00680513  51                   push ecx
// 00680514  50                   push eax
// 00680515  ff1528d17700         call dword ptr [0x77d128]
// 0068051b  894608               mov dword ptr [esi + 8], eax
// 0068051e  8bc6                 mov eax, esi
// 00680520  5e                   pop esi
// 00680521  c20800               ret 8

extern "C" void* __stdcall SelectObject(void*, void*);

struct CXTPBufferDC
{
    void* vtable;
    void* field_4;
    void* field_8;

    CXTPBufferDC* construct(void* a, void* b);
};

CXTPBufferDC* CXTPBufferDC::construct(void* a, void* b)
{
    this->vtable = (void*)0x7ceae0;
    void* p = a;
    if (p != 0)
        p = *(void**)((char*)p + 4);
    this->field_4 = p;
    void* q = b;
    if (q == 0)
    {
        this->field_8 = SelectObject(p, q);
        return this;
    }
    q = *(void**)((char*)q + 4);
    this->field_8 = SelectObject(p, q);
    return this;
}
