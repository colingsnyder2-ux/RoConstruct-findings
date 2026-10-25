// from server: 100% by tester
// roc 2010-06 006a6640  unit: boost::iostreams::Uinput::?$filtering_stream  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a6640
//
// 006a6640  56                   push esi
// 006a6641  8b31                 mov esi, dword ptr [ecx]
// 006a6643  807e5800             cmp byte ptr [esi + 0x58], 0
// 006a6647  740b                 je 0x6a6654
// 006a6649  8bce                 mov ecx, esi
// 006a664b  e8d0b8ffff           call 0x6a1f20
// 006a6650  c6465800             mov byte ptr [esi + 0x58], 0
// 006a6654  5e                   pop esi
// 006a6655  c3                   ret 

struct S
{
    void f();
};

extern "C" void __fastcall sub_006a1f20(void*);

void S::f()
{
    char* p = *(char**)this;
    if (p[0x58] != 0)
    {
        sub_006a1f20(p);
        p[0x58] = 0;
    }
}
