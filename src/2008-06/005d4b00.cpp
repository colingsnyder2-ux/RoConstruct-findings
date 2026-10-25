// from server: 100% by king_originala
// roc 2008-06 005d4b00  unit: RBX::VSkin::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d4b00
//
// 005d4b00  56                   push esi
// 005d4b01  8bf1                 mov esi, ecx
// 005d4b03  e838fbffff           call 0x5d4640
// 005d4b08  85c0                 test eax, eax
// 005d4b0a  7407                 je 0x5d4b13
// 005d4b0c  8bc8                 mov ecx, eax
// 005d4b0e  e88d98fcff           call 0x59e3a0
// 005d4b13  8bce                 mov ecx, esi
// 005d4b15  e856fcffff           call 0x5d4770
// 005d4b1a  85c0                 test eax, eax
// 005d4b1c  7407                 je 0x5d4b25
// 005d4b1e  8bc8                 mov ecx, eax
// 005d4b20  e87b98fcff           call 0x59e3a0
// 005d4b25  8bce                 mov ecx, esi
// 005d4b27  e8e4f9ffff           call 0x5d4510
// 005d4b2c  85c0                 test eax, eax
// 005d4b2e  7407                 je 0x5d4b37
// 005d4b30  8bc8                 mov ecx, eax
// 005d4b32  e86998fcff           call 0x59e3a0
// 005d4b37  8bce                 mov ecx, esi
// 005d4b39  e862fdffff           call 0x5d48a0
// 005d4b3e  85c0                 test eax, eax
// 005d4b40  7407                 je 0x5d4b49
// 005d4b42  8bc8                 mov ecx, eax
// 005d4b44  e85798fcff           call 0x59e3a0
// 005d4b49  8bce                 mov ecx, esi
// 005d4b4b  e880feffff           call 0x5d49d0
// 005d4b50  5e                   pop esi
// 005d4b51  85c0                 test eax, eax
// 005d4b53  7407                 je 0x5d4b5c
// 005d4b55  8bc8                 mov ecx, eax
// 005d4b57  e94498fcff           jmp 0x59e3a0
// 005d4b5c  c3                   ret 

struct Item {
    void update();
};

struct S {
    Item* first();
    Item* second();
    Item* third();
    Item* fourth();
    Item* fifth();
    void update();
};

void S::update()
{
    Item* p = first();
    if (p)
        p->update();

    p = second();
    if (p)
        p->update();

    p = third();
    if (p)
        p->update();

    p = fourth();
    if (p)
        p->update();

    p = fifth();
    if (p)
        p->update();
}
