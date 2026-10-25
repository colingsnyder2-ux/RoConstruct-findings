// from server: 100% by tester
// roc 2010-06 006af180  unit: G3D::$$A6AXVVector3::?$signal::slot  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006af180
//
// 006af180  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006af184  83f804               cmp eax, 4
// 006af187  7409                 je 0x6af192
// 006af189  8944240c             mov dword ptr [esp + 0xc], eax
// 006af18d  e92efeffff           jmp 0x6aefc0
// 006af192  8b442408             mov eax, dword ptr [esp + 8]
// 006af196  32c9                 xor cl, cl
// 006af198  c700b8adbc00         mov dword ptr [eax], 0xbcadb8
// 006af19e  884804               mov byte ptr [eax + 4], cl
// 006af1a1  884805               mov byte ptr [eax + 5], cl
// 006af1a4  c3                   ret 

struct Slot {
    void* vtbl;
    unsigned char b4;
    unsigned char b5;
};

extern "C" void __cdecl sub_8f8f80(int, int, int);

void __cdecl sub_8f9140(int a, int b, int c)
{
    if (c != 4) {
        sub_8f8f80(a, b, c);
        return;
    }
    Slot* p = (Slot*)b;
    p->vtbl = (void*)0xdfdb10;
    p->b4 = 0;
    p->b5 = 0;
}
