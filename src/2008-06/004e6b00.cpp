// from server: 100% by king_originala
// roc 2008-06 004e6b00  unit: RBX::ViewNew::Part  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6b00
//
// 004e6b00  56                   push esi
// 004e6b01  57                   push edi
// 004e6b02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e6b06  57                   push edi
// 004e6b07  8bf1                 mov esi, ecx
// 004e6b09  e822ffffff           call 0x4e6a30
// 004e6b0e  81ff0c619700         cmp edi, 0x97610c
// 004e6b14  751e                 jne 0x4e6b34
// 004e6b16  8bce                 mov ecx, esi
// 004e6b18  e863f4ffff           call 0x4e5f80
// 004e6b1d  84c0                 test al, al
// 004e6b1f  7423                 je 0x4e6b44
// 004e6b21  8bce                 mov ecx, esi
// 004e6b23  e818fcffff           call 0x4e6740
// 004e6b28  8bce                 mov ecx, esi
// 004e6b2a  e881fdffff           call 0x4e68b0
// 004e6b2f  5f                   pop edi
// 004e6b30  5e                   pop esi
// 004e6b31  c20400               ret 4
// 004e6b34  81ff28619700         cmp edi, 0x976128
// 004e6b3a  7408                 je 0x4e6b44
// 004e6b3c  81ff1c609700         cmp edi, 0x97601c
// 004e6b42  7507                 jne 0x4e6b4b
// 004e6b44  8bce                 mov ecx, esi
// 004e6b46  e865fdffff           call 0x4e68b0
// 004e6b4b  5f                   pop edi
// 004e6b4c  5e                   pop esi
// 004e6b4d  c20400               ret 4

struct S {
    void f(const void* p);
    void a(const void* p);
    bool b();
    void c();
    void d();
};

void S::f(const void* p)
{
    a(p);
    if (p == (const void*)0x97610C) {
        if (b())
            c();
        d();
    } else if (p == (const void*)0x976128 ||
               p == (const void*)0x97601C) {
        d();
    }
}
