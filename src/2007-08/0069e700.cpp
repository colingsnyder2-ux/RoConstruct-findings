// from server: 100% by colin
// roc 2007-08 0069e700  unit: CXTPPropertyGridItemEnum  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069e700
//
// 0069e700  56                   push esi
// 0069e701  8bf1                 mov esi, ecx
// 0069e703  e8382afdff           call 0x671140
// 0069e708  8bc8                 mov ecx, eax
// 0069e70a  e8213afdff           call 0x672130
// 0069e70f  68d0000000           push 0xd0
// 0069e714  6a00                 push 0
// 0069e716  56                   push esi
// 0069e717  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 0069e71d  e86a24f9ff           call 0x630b8c
// 0069e722  83c40c               add esp, 0xc
// 0069e725  687c2c7d00           push 0x7d2c7c
// 0069e72a  ff157cd27700         call dword ptr [0x77d27c]
// 0069e730  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0069e736  8bc6                 mov eax, esi
// 0069e738  5e                   pop esi
// 0069e739  c3                   ret 

extern "C" __declspec(dllimport) void *__stdcall LoadLibraryA(const char *);

struct CXTPPropertyGridItemEnum {
    void *construct();
};

extern void *__fastcall sub_671140(void *);
extern void *__fastcall sub_672130(void *);
extern void __cdecl sub_630B8C(void *, int, int);

void *CXTPPropertyGridItemEnum::construct()
{
    void *p = sub_671140(this);
    void *q = sub_672130(p);
    *(void **)((char *)this + 0xd4) = q;
    sub_630B8C(this, 0, 0xd0);
    *(void **)((char *)this + 0xd0) = LoadLibraryA("UxTheme.dll");
    return this;
}
