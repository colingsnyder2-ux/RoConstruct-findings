// from server: 100% by tester
// roc 2010-06 006affc0  unit: G3D::$$A6AXVColor3::?$signal::slot  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006affc0
//
// 006affc0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006affc4  83f804               cmp eax, 4
// 006affc7  7409                 je 0x6affd2
// 006affc9  8944240c             mov dword ptr [esp + 0xc], eax
// 006affcd  e92efeffff           jmp 0x6afe00
// 006affd2  8b442408             mov eax, dword ptr [esp + 8]
// 006affd6  32c9                 xor cl, cl
// 006affd8  c70040b6bc00         mov dword ptr [eax], 0xbcb640
// 006affde  884804               mov byte ptr [eax + 4], cl
// 006affe1  884805               mov byte ptr [eax + 5], cl
// 006affe4  c3                   ret 

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
