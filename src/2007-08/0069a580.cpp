// from server: 70% by colin
// roc 2007-08 0069a580  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069a580
//
// 0069a580  8b442404             mov eax, dword ptr [esp + 4]
// 0069a584  3d2c270000           cmp eax, 0x272c
// 0069a589  56                   push esi
// 0069a58a  8bf1                 mov esi, ecx
// 0069a58c  7535                 jne 0x69a5c3
// 0069a58e  51                   push ecx
// 0069a58f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069a593  8bc4                 mov eax, esp
// 0069a595  8964240c             mov dword ptr [esp + 0xc], esp
// 0069a599  51                   push ecx
// 0069a59a  50                   push eax
// 0069a59b  e860feffff           call 0x69a400
// 0069a5a0  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 0069a5a6  8b11                 mov edx, dword ptr [ecx]
// 0069a5a8  8b4264               mov eax, dword ptr [edx + 0x64]
// 0069a5ab  83c408               add esp, 8
// 0069a5ae  ffd0                 call eax
// 0069a5b0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069a5b4  c70100000000         mov dword ptr [ecx], 0
// 0069a5ba  b801000000           mov eax, 1
// 0069a5bf  5e                   pop esi
// 0069a5c0  c21000               ret 0x10
// 0069a5c3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0069a5c7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069a5cb  52                   push edx
// 0069a5cc  8b542410             mov edx, dword ptr [esp + 0x10]
// 0069a5d0  51                   push ecx
// 0069a5d1  52                   push edx
// 0069a5d2  50                   push eax
// 0069a5d3  8bce                 mov ecx, esi
// 0069a5d5  e8764f0000           call 0x69f550
// 0069a5da  5e                   pop esi
// 0069a5db  c21000               ret 0x10

struct CXTPPropertyGridItemColor
{
    char pad[0x180];
    void* ptr180;
    int OnInplaceButtonDown(unsigned int code, int a2, int a3, int* a4);
};

extern "C" void __stdcall sub_69A400(int* out, int val);
extern "C" int __stdcall sub_69F550(void* self, unsigned int code, int a2, int a3, int* a4);

int CXTPPropertyGridItemColor::OnInplaceButtonDown(unsigned int code, int a2, int a3, int* a4)
{
    if (code == 0x272c)
    {
        int local;
        sub_69A400(&local, a2);
        void* p = ptr180;
        void** vtbl = *(void***)p;
        typedef void (__stdcall *Fn)(void*, int);
        Fn fn = (Fn)vtbl[0x64 / 4];
        fn(p, local);
        *a4 = 0;
        return 1;
    }
    return sub_69F550(this, code, a2, a3, a4);
}
