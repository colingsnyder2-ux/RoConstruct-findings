// from server: 81% by colin
// roc 2007-08 004752c0  unit: CInstanceRecord::CNameItem  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004752c0
//
// 004752c0  83ec10               sub esp, 0x10
// 004752c3  8b442418             mov eax, dword ptr [esp + 0x18]
// 004752c7  d900                 fld dword ptr [eax]
// 004752c9  56                   push esi
// 004752ca  8b742418             mov esi, dword ptr [esp + 0x18]
// 004752ce  d95c2404             fstp dword ptr [esp + 4]
// 004752d2  d94004               fld dword ptr [eax + 4]
// 004752d5  d95c2408             fstp dword ptr [esp + 8]
// 004752d9  d94008               fld dword ptr [eax + 8]
// 004752dc  8d442404             lea eax, [esp + 4]
// 004752e0  d95c240c             fstp dword ptr [esp + 0xc]
// 004752e4  50                   push eax
// 004752e5  d9e8                 fld1 
// 004752e7  56                   push esi
// 004752e8  d95c2418             fstp dword ptr [esp + 0x18]
// 004752ec  e81fe1ffff           call 0x473410
// 004752f1  8bc6                 mov eax, esi
// 004752f3  5e                   pop esi
// 004752f4  83c410               add esp, 0x10
// 004752f7  c20800               ret 8

struct CNameItem {
    void* method(const float* src, void* dst);
};

void* CNameItem::method(const float* src, void* dst)
{
    float tmp[3];
    tmp[0] = src[0];
    tmp[1] = src[1];
    tmp[2] = src[2];
    float one = 1.0f;
    extern void __stdcall sub_473410(void* dst, const float* src, float w);
    sub_473410(dst, tmp, one);
    return dst;
}
