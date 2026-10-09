// from server: 87% by colin
// roc 2007-08 006faa50  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXP  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006faa50
//
// 006faa50  56                   push esi
// 006faa51  8bf1                 mov esi, ecx
// 006faa53  e828e9ffff           call 0x6f9380
// 006faa58  e813e5f6ff           call 0x668f70
// 006faa5d  6a12                 push 0x12
// 006faa5f  8bc8                 mov ecx, eax
// 006faa61  e80addf6ff           call 0x668770
// 006faa66  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006faa69  894168               mov dword ptr [ecx + 0x68], eax
// 006faa6c  e8ffe4f6ff           call 0x668f70
// 006faa71  6a1e                 push 0x1e
// 006faa73  8bc8                 mov ecx, eax
// 006faa75  e8f6dcf6ff           call 0x668770
// 006faa7a  8b5634               mov edx, dword ptr [esi + 0x34]
// 006faa7d  894250               mov dword ptr [edx + 0x50], eax
// 006faa80  5e                   pop esi
// 006faa81  c3                   ret 

struct CXTPPropertyGridOfficeXP {
    void Init();
};

extern "C" void __stdcall sub_6F9380();
extern "C" void* __stdcall sub_668F70();
extern "C" void* __stdcall sub_668770(void*, int);

void CXTPPropertyGridOfficeXP::Init()
{
    sub_6F9380();
    void* p1 = sub_668F70();
    void* r1 = sub_668770(p1, 0x12);
    *(void**)(*(char**)((char*)this + 0x34) + 0x68) = r1;
    void* p2 = sub_668F70();
    void* r2 = sub_668770(p2, 0x1e);
    *(void**)(*(char**)((char*)this + 0x34) + 0x50) = r2;
}
